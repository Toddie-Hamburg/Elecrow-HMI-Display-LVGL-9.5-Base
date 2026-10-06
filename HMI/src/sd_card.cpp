#include "sd_card.h"
#include <SPI.h>
#include <SD.h>
#include "ui/ui.h"
#include "globals.h"

String        FileList[MAX_FILES];
String        SortKey[MAX_FILES];
int           FileCount       = 0;
uint16_t      FileListIdx     = 0;
unsigned long last_sd_check   = 0;
bool          sd_card_present = false;
uint8_t       sd_card_type    = CARD_NONE;

SPIClass card(HSPI);

// ---------------------------------------------------------
// SD-Kartenstatus prüfen
// ---------------------------------------------------------
bool sd_check()
{
    File test = SD.open("/");

    if (!test)
    {
        sd_card_type    = CARD_NONE;
        sd_card_present = false;
        return false;
    }

    test.close();

    sd_card_type    = SD.cardType();
    sd_card_present = (sd_card_type != CARD_NONE);

    return sd_card_present;
}

// ---------------------------------------------------------
// Aktuellen SD-Status liefern
// ---------------------------------------------------------
bool sd_present()
{
    return sd_card_present;
}

// ---------------------------------------------------------
// Dateiliste zurücksetzen
// ---------------------------------------------------------
void sd_resetScan()
{
    FileCount   = 0;
    FileListIdx = 0;
}

// ---------------------------------------------------------
// Natural Normalize
// ---------------------------------------------------------
String normalize(const String &s)
{
    String out = s;

    out.toLowerCase();

    out.replace("ä", "ae");
    out.replace("ö", "oe");
    out.replace("ü", "ue");
    out.replace("ß", "ss");

    out.replace("_", " ");
    out.replace("-", " ");
    out.replace("(", " ");
    out.replace(")", " ");
    out.replace(".", " ");

    if (out.startsWith("the "))
        out = out.substring(4);

    if (out.startsWith("der "))
        out = out.substring(4);

    if (out.startsWith("die "))
        out = out.substring(4);

    if (out.startsWith("das "))
        out = out.substring(4);

    out.trim();

    return out;
}

// ---------------------------------------------------------
// Wildcard / Multi-Extension Matcher
// ---------------------------------------------------------
bool matchExt(const String &name, const char *ext)
{
    if (strcmp(ext, "*.*") == 0)
        return true;

    String e = String(ext);
    e.toLowerCase();

    int pos = 0;

    while (true)
    {
        int next = e.indexOf('|', pos);

        String token = (next == -1) ? e.substring(pos) : e.substring(pos, next);

        token.trim();

        if (token.length() > 0 && name.endsWith(token))
            return true;

        if (next == -1)
            break;

        pos = next + 1;
    }

    return false;
}

// ---------------------------------------------------------
// Rekursiver SD-Scanner
// ---------------------------------------------------------
void sd_scanFiles(const char *dirname, const char *ext)
{
    File root = SD.open(dirname);

    if (!root || !root.isDirectory())
    {
        if (root)
            root.close();

        return;
    }

    for (File file = root.openNextFile(); file && FileCount < MAX_FILES; file = root.openNextFile())
    {
        if (file.isDirectory())
        {
            const char *sub = file.name();

            if (sub && *sub)
            {
                String next(dirname);

                if (!next.endsWith("/"))
                    next += '/';

                next += sub;

                file.close();

                sd_scanFiles(next.c_str(), ext);
                continue;
            }
        }
        else
        {
            String name  = file.name();
            String lower = name;
            lower.toLowerCase();
            if ((FileCount < MAX_FILES) && matchExt(lower, ext))
            {
                String full;
                if (strlen(dirname) <= 1)
                    full = "/" + name;
                else
                    full = String(dirname) + "/" + name;
                if (full.length() < MAX_FILENAME_LEN)
                {
                    FileList[FileCount] = full;
                    SortKey[FileCount]  = normalize(name);
                    FileCount++;
                }
            }
        }
        file.close();
    }
    root.close();
}

// ---------------------------------------------------------
// Natural Sort
// ---------------------------------------------------------
void sd_sortFileList()
{
    for (int i = 0; i < FileCount - 1; i++)
    {
        for (int j = i + 1; j < FileCount; j++)
        {
            if (SortKey[j] < SortKey[i])
            {
                String tmpKey = SortKey[i];
                SortKey[i]    = SortKey[j];
                SortKey[j]    = tmpKey;

                String tmpFile = FileList[i];
                FileList[i]    = FileList[j];
                FileList[j]    = tmpFile;
            }
        }
    }
}

// ---------------------------------------------------------
// Dateiliste aufbauen
// ---------------------------------------------------------
bool sd_getFileList(const char *dirname, const char *ext)
{
    if (!sd_present())
        return false;

    sd_resetScan();

    sd_scanFiles(dirname, ext);

    if (FileCount > 1)
        sd_sortFileList();

    return (FileCount > 0);
}

// ---------------------------------------------------------
// SD-Initialisierung
// ---------------------------------------------------------
bool sd_init()
{
    pinMode(SD_CS, OUTPUT);
    digitalWrite(SD_CS, HIGH);

    card.begin(SD_SCLK, SD_MISO, SD_MOSI, SD_CS);

    return SD.begin(SD_CS, card);
}

// ---------------------------------------------------------
// SD-Überwachung
// ---------------------------------------------------------
void sd_loop()
{
    const unsigned long currentTime = millis();

    if (currentTime - last_sd_check >= 2000)
    {
        last_sd_check = currentTime;

        sd_check();

        setVisibility(ui_imgsdeerror, !sd_card_present);

        switch (sd_card_type)
        {
            case CARD_MMC:
                lv_label_set_text(ui_lblsd, "MMC");
                break;

            case CARD_SD:
                lv_label_set_text(ui_lblsd, "SD");
                break;

            case CARD_SDHC:
                lv_label_set_text(ui_lblsd, "SDHC");
                break;

            default:
                lv_label_set_text(ui_lblsd, "-----");
                break;
        }
    }
}