#pragma once

#include <Arduino.h>

#define SD_CS   10
#define SD_MOSI 11
#define SD_SCLK 12
#define SD_MISO 13

#define MAX_FILES        512
#define MAX_FILENAME_LEN 256

extern bool     sd_card_present;
extern uint8_t  sd_card_type;
extern String   FileList[MAX_FILES];
extern String   SortKey[MAX_FILES];
extern int      FileCount;
extern uint16_t FileListIdx;

extern bool sd_init();
extern void sd_sortFileList();
extern bool sd_check();
extern bool sd_present();
extern void sd_loop();

// Aufruf: scanFiles("/", ".mp3|.wav|.flac") oder scanfiles("/", "*.*") oder scanfiles("/sfx", "*.*")
extern void sd_scanFiles(const char *dirname, const char *ext);
extern bool sd_getFileList(const char *dirname, const char *ext);
extern void sd_resetScan();
