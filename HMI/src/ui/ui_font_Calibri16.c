/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font D:/Arduino Projekte/HMI/.SL-Projekt/assets/calibri.ttf -o D:/Arduino Projekte/HMI/.SL-Projekt/assets\ui_font_Calibri16.c --format lvgl -r 0x20-0x7f --symbols äöüßÄÖÜ --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_CALIBRI16
#define UI_FONT_CALIBRI16 1
#endif

#if UI_FONT_CALIBRI16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x60,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x22, 0x22, 0x22, 0xff, 0x22, 0x44, 0xff, 0x44,
    0x44, 0x44,

    /* U+0024 "$" */
    0x10, 0x47, 0xa1, 0x82, 0x6, 0x6, 0x4, 0x18,
    0x5e, 0x20, 0x80,

    /* U+0025 "%" */
    0x61, 0x24, 0x49, 0x22, 0x50, 0x64, 0x2, 0x60,
    0xa4, 0x49, 0x22, 0x48, 0x60,

    /* U+0026 "&" */
    0x38, 0x22, 0x11, 0x9, 0x3, 0x2, 0x8a, 0x25,
    0xa, 0x82, 0x42, 0x9e, 0x20,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x92, 0x24, 0x40,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x24, 0xa5, 0x0,

    /* U+002A "*" */
    0x25, 0x5c, 0xea, 0x90,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x56,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x4, 0x10, 0x82, 0x10, 0x42, 0x8, 0x21, 0x4,
    0x20, 0x80,

    /* U+0030 "0" */
    0x7a, 0x18, 0x61, 0x86, 0x18, 0x61, 0x85, 0xe0,

    /* U+0031 "1" */
    0x23, 0x28, 0x42, 0x10, 0x84, 0x27, 0xc0,

    /* U+0032 "2" */
    0x7a, 0x10, 0x41, 0x8, 0x21, 0x8, 0x43, 0xf0,

    /* U+0033 "3" */
    0x7a, 0x10, 0x41, 0x78, 0x10, 0x41, 0x85, 0xe0,

    /* U+0034 "4" */
    0x18, 0x62, 0x8a, 0x49, 0x28, 0xbf, 0x8, 0x20,

    /* U+0035 "5" */
    0x7d, 0x4, 0x10, 0x78, 0x10, 0x41, 0x85, 0xe0,

    /* U+0036 "6" */
    0x3d, 0x8, 0x20, 0xbb, 0x18, 0x61, 0x85, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x41, 0x8, 0x21, 0x0,

    /* U+0038 "8" */
    0x7a, 0x18, 0x61, 0x7a, 0x18, 0x61, 0x85, 0xe0,

    /* U+0039 "9" */
    0x7a, 0x18, 0x61, 0x8d, 0xd0, 0x41, 0xb, 0xc0,

    /* U+003A ":" */
    0xc6,

    /* U+003B ";" */
    0x50, 0x15, 0x80,

    /* U+003C "<" */
    0x4, 0x66, 0x20, 0x60, 0x60, 0x40,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0x81, 0x81, 0x81, 0x19, 0x88, 0x0,

    /* U+003F "?" */
    0x74, 0x42, 0x10, 0x98, 0x84, 0x1, 0x8,

    /* U+0040 "@" */
    0xf, 0xc3, 0x2, 0x40, 0x14, 0x69, 0x89, 0x99,
    0x9, 0x91, 0x19, 0x32, 0x8c, 0xc4, 0x0, 0x60,
    0x1, 0xf8,

    /* U+0041 "A" */
    0x8, 0x4, 0x5, 0x2, 0x82, 0x21, 0x11, 0xfc,
    0x82, 0x80, 0xc0, 0x40,

    /* U+0042 "B" */
    0xf9, 0xa, 0x14, 0x2f, 0x90, 0xa0, 0xc1, 0x83,
    0xf8,

    /* U+0043 "C" */
    0x3e, 0x41, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x41, 0x3e,

    /* U+0044 "D" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0xfa, 0x8, 0x20, 0x83, 0xf0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x84, 0x0,

    /* U+0047 "G" */
    0x3e, 0x41, 0x80, 0x80, 0x80, 0x8f, 0x81, 0x81,
    0x41, 0x3e,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81, 0x81,
    0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xc0,

    /* U+004A "J" */
    0x11, 0x11, 0x11, 0x11, 0x1e,

    /* U+004B "K" */
    0x86, 0x29, 0x28, 0xc2, 0x89, 0x24, 0x8a, 0x10,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xf0,

    /* U+004D "M" */
    0xc0, 0x78, 0xe, 0x82, 0xd0, 0x59, 0x13, 0x22,
    0x62, 0x8c, 0x51, 0x84, 0x30, 0x84,

    /* U+004E "N" */
    0xc1, 0xa1, 0xa1, 0x91, 0x91, 0x89, 0x89, 0x85,
    0x85, 0x83,

    /* U+004F "O" */
    0x3e, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x1f, 0x0,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0x87, 0xe8, 0x20, 0x82, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x10, 0x48, 0xa, 0x2, 0x80, 0xa0, 0x28,
    0xa, 0x2, 0x41, 0xf, 0xc0, 0xc,

    /* U+0052 "R" */
    0xf9, 0xa, 0x14, 0x28, 0x5f, 0x22, 0x42, 0x85,
    0x4,

    /* U+0053 "S" */
    0x74, 0x61, 0x6, 0x8, 0x21, 0x8b, 0x80,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+0056 "V" */
    0x80, 0xc0, 0x50, 0x48, 0x22, 0x21, 0x10, 0x50,
    0x28, 0x8, 0x4, 0x0,

    /* U+0057 "W" */
    0x84, 0x30, 0x86, 0x10, 0xa5, 0x24, 0xa4, 0x94,
    0x94, 0x51, 0x8c, 0x20, 0x84, 0x10,

    /* U+0058 "X" */
    0x81, 0x42, 0x24, 0x24, 0x18, 0x18, 0x24, 0x24,
    0x42, 0x81,

    /* U+0059 "Y" */
    0x82, 0x89, 0x11, 0x42, 0x82, 0x4, 0x8, 0x10,
    0x20,

    /* U+005A "Z" */
    0xfe, 0x4, 0x10, 0x41, 0x2, 0x8, 0x20, 0x81,
    0xfc,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0xc0,

    /* U+005C "\\" */
    0x82, 0x4, 0x10, 0x20, 0x81, 0x4, 0x10, 0x20,
    0x81, 0x4,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x93, 0xc0,

    /* U+005E "^" */
    0x10, 0x50, 0xa2, 0x24, 0x50, 0x40,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0x88, 0x80,

    /* U+0061 "a" */
    0x7a, 0x10, 0x5f, 0x86, 0x37, 0x40,

    /* U+0062 "b" */
    0x82, 0x8, 0x20, 0xbb, 0x18, 0x61, 0x87, 0x1b,
    0x80,

    /* U+0063 "c" */
    0x74, 0x61, 0x8, 0x45, 0xc0,

    /* U+0064 "d" */
    0x4, 0x10, 0x41, 0x76, 0x38, 0x61, 0x86, 0x37,
    0x40,

    /* U+0065 "e" */
    0x7a, 0x18, 0x7f, 0x82, 0x7, 0xc0,

    /* U+0066 "f" */
    0x34, 0x44, 0xf4, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x7f, 0xa, 0x14, 0x27, 0x90, 0x1f, 0x41, 0x82,
    0xf8,

    /* U+0068 "h" */
    0x82, 0x8, 0x20, 0xbb, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0x24, 0xe0,

    /* U+006B "k" */
    0x84, 0x21, 0x8, 0xca, 0x98, 0xa4, 0xa2,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xb3, 0x66, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xbb, 0x18, 0x61, 0x86, 0x18, 0x40,

    /* U+006F "o" */
    0x7a, 0x18, 0x61, 0x86, 0x17, 0x80,

    /* U+0070 "p" */
    0xbb, 0x18, 0x61, 0x87, 0x1b, 0xa0, 0x82, 0x0,

    /* U+0071 "q" */
    0x76, 0x38, 0x61, 0x86, 0x37, 0x41, 0x4, 0x10,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x7c, 0x20, 0xe0, 0x87, 0xc0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x30,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x37, 0x40,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa5, 0x10, 0x80,

    /* U+0077 "w" */
    0x44, 0x51, 0x12, 0xa8, 0xaa, 0x2a, 0x84, 0x41,
    0x10,

    /* U+0078 "x" */
    0x8a, 0x94, 0x45, 0x2a, 0x20,

    /* U+0079 "y" */
    0x8c, 0x54, 0xa5, 0x10, 0x84, 0x42, 0x0,

    /* U+007A "z" */
    0xf1, 0x24, 0x48, 0xf0,

    /* U+007B "{" */
    0x34, 0x44, 0x44, 0x84, 0x44, 0x44, 0x43,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xc2, 0x22, 0x22, 0x12, 0x22, 0x22, 0x2c,

    /* U+007E "~" */
    0x63, 0x26, 0x30,

    /* U+00C4 "Ä" */
    0x24, 0x12, 0x0, 0x1, 0x0, 0x80, 0xa0, 0x50,
    0x44, 0x22, 0x3f, 0x90, 0x50, 0x18, 0x8,

    /* U+00D6 "Ö" */
    0x12, 0x9, 0x0, 0x7, 0xc4, 0x14, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x28, 0x23, 0xe0,

    /* U+00DC "Ü" */
    0x24, 0x24, 0x0, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+00DF "ß" */
    0x72, 0x28, 0xa2, 0x9a, 0x8a, 0x26, 0x86, 0x1b,
    0x80,

    /* U+00E4 "ä" */
    0x28, 0xa0, 0x1e, 0x84, 0x17, 0xe1, 0x8d, 0xd0,

    /* U+00F6 "ö" */
    0x28, 0xa0, 0x1e, 0x86, 0x18, 0x61, 0x85, 0xe0,

    /* U+00FC "ü" */
    0x49, 0x20, 0x21, 0x86, 0x18, 0x61, 0x8d, 0xd0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 58, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 83, .box_w = 1, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 103, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 5, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 130, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 175, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 57, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 53, .adv_w = 78, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 59, .adv_w = 78, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 65, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 69, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 76, .adv_w = 64, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 77, .adv_w = 78, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 78, .adv_w = 65, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 89, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 130, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 69, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 69, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 172, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 178, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 182, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 188, .adv_w = 119, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 229, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 213, .adv_w = 148, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 158, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 125, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 118, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 162, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 65, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 82, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 133, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 219, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 165, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 170, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 132, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 356, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 370, .adv_w = 139, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 118, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 164, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 145, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 228, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 133, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 79, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 465, .adv_w = 99, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 475, .adv_w = 79, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 481, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 487, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 488, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 490, .adv_w = 123, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 108, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 127, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 525, .adv_w = 78, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 531, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 540, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 59, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 61, .box_w = 3, .box_h = 12, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 556, .adv_w = 116, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 59, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 205, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 135, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 135, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 135, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 593, .adv_w = 135, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 601, .adv_w = 89, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 135, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 116, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 183, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 111, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 116, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 647, .adv_w = 101, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 81, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 658, .adv_w = 118, .box_w = 1, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 660, .adv_w = 81, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 667, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 670, .adv_w = 148, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 164, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 135, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 123, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 135, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 135, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x12, 0x18, 0x1b, 0x20, 0x32, 0x38
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 196, .range_length = 57, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 7, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Calibri16 = {
#else
lv_font_t ui_font_Calibri16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_CALIBRI16*/

