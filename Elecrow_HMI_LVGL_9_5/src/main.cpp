#include <Arduino.h>
#include "display.h"
#include "ui/ui.h"
#include "globals.h"

void setup()
{
    Serial.begin(115200);

    blink_timer_init();

    lv_init();
    display_init();
    ui_init();

    String TitleText = "LVGL Version: " + String(lv_version_major()) + "." + String(lv_version_minor()) + "." +
                       String(lv_version_patch());
    lv_label_set_text(ui_lblversion, TitleText.c_str());

    printSystemStatus();
}

void loop()
{
    lv_timer_handler();
    delay(5);
}
