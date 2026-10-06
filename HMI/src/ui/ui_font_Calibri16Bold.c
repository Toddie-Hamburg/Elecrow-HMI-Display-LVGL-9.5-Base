/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font D:/Arduino Projekte/HMI/.SL-Projekt/assets/calibrib.ttf -o D:/Arduino Projekte/HMI/.SL-Projekt/assets\ui_font_Calibri16Bold.c --format lvgl -r 0x20-0x7f --symbols äöüßÄÖÜ --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_CALIBRI16BOLD
#define UI_FONT_CALIBRI16BOLD 1
#endif

#if UI_FONT_CALIBRI16BOLD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3c,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x36, 0x36, 0x36, 0xff, 0x36, 0x6c, 0xff, 0x6c,
    0x6c, 0x6c,

    /* U+0024 "$" */
    0x18, 0x31, 0xf7, 0xfc, 0x3c, 0x1e, 0x1e, 0xf,
    0xf, 0xfb, 0xe3, 0x6, 0x0,

    /* U+0025 "%" */
    0x70, 0xdb, 0x33, 0x6c, 0x6d, 0x87, 0x60, 0x1b,
    0x86, 0xd8, 0xdb, 0x33, 0x6c, 0x38,

    /* U+0026 "&" */
    0x3c, 0x1f, 0x86, 0x61, 0x98, 0x3c, 0x1e, 0x6c,
    0xdb, 0x1c, 0xff, 0xdf, 0x70,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x36, 0x66, 0xcc, 0xcc, 0xcc, 0x66, 0x63,

    /* U+0029 ")" */
    0xc6, 0x66, 0x33, 0x33, 0x33, 0x66, 0x6c,

    /* U+002A "*" */
    0x25, 0x5c, 0xea, 0x90,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0xc, 0x30, 0x61, 0x83, 0x6, 0x18, 0x30,
    0x61, 0x83, 0xc, 0x18, 0x0,

    /* U+0030 "0" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xfe,
    0xf8,

    /* U+0031 "1" */
    0x33, 0xcf, 0xc, 0x30, 0xc3, 0xc, 0xff, 0xf0,

    /* U+0032 "2" */
    0x7d, 0xfe, 0x18, 0x30, 0xc3, 0xc, 0x30, 0xff,
    0xfc,

    /* U+0033 "3" */
    0x7d, 0xfe, 0x18, 0x37, 0xcf, 0xc1, 0xc3, 0xfe,
    0xf8,

    /* U+0034 "4" */
    0x1c, 0x78, 0xf3, 0x66, 0xd9, 0xbf, 0xff, 0xc,
    0x18,

    /* U+0035 "5" */
    0xff, 0xff, 0x6, 0xf, 0xdf, 0xc1, 0xc3, 0xfe,
    0xf8,

    /* U+0036 "6" */
    0x3e, 0xff, 0x86, 0xd, 0xdf, 0xf1, 0xe3, 0xfe,
    0xf8,

    /* U+0037 "7" */
    0xff, 0xfc, 0x30, 0x61, 0x83, 0xc, 0x18, 0x60,
    0xc0,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x37, 0xcf, 0xb1, 0xe3, 0xfe,
    0xf8,

    /* U+0039 "9" */
    0x7d, 0xff, 0x1e, 0x3f, 0xee, 0xc1, 0x87, 0xfd,
    0xf0,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0x6c, 0x0, 0xdb, 0xc0,

    /* U+003C "<" */
    0x6, 0x3d, 0xe7, 0xe, 0xf, 0x7, 0x83,

    /* U+003D "=" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+003E ">" */
    0xc1, 0xe0, 0xf0, 0x70, 0xe7, 0xbc, 0x60,

    /* U+003F "?" */
    0x7b, 0xf8, 0xc3, 0xc, 0xe3, 0xc, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0xf, 0xc3, 0xfe, 0x70, 0x76, 0xfb, 0xdf, 0xbd,
    0xb3, 0xdb, 0x3d, 0xfe, 0xcd, 0xc6, 0x0, 0x7f,
    0x81, 0xf8,

    /* U+0041 "A" */
    0xc, 0x7, 0x81, 0xe0, 0xcc, 0x33, 0x18, 0x67,
    0xf9, 0xfe, 0xc0, 0xf0, 0x30,

    /* U+0042 "B" */
    0xfd, 0xff, 0x1e, 0x3f, 0xdf, 0xf1, 0xe3, 0xff,
    0xf8,

    /* U+0043 "C" */
    0x3c, 0xff, 0x8e, 0xc, 0x18, 0x30, 0x71, 0x7e,
    0x78,

    /* U+0044 "D" */
    0xfc, 0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7,
    0xfe, 0xfc,

    /* U+0045 "E" */
    0xff, 0xfc, 0x30, 0xfb, 0xec, 0x30, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xfb, 0xec, 0x30, 0xc3, 0x0,

    /* U+0047 "G" */
    0x3e, 0x7f, 0xe1, 0xc0, 0xcf, 0xcf, 0xc3, 0xe3,
    0x7f, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x33, 0x33, 0x33, 0x33, 0xfe,

    /* U+004B "K" */
    0xc3, 0xc7, 0xce, 0xdc, 0xf8, 0xf8, 0xdc, 0xce,
    0xc7, 0xc3,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xff, 0xf0,

    /* U+004D "M" */
    0xe0, 0x7f, 0xf, 0xf0, 0xfd, 0x9b, 0xd9, 0xbd,
    0x9b, 0xcf, 0x3c, 0xf3, 0xc6, 0x3c, 0x63,

    /* U+004E "N" */
    0xe1, 0xf8, 0xfc, 0x7b, 0x3d, 0x9e, 0x6f, 0x37,
    0x8f, 0xc7, 0xe1, 0xc0,

    /* U+004F "O" */
    0x3e, 0x3f, 0xb8, 0xf8, 0x3c, 0x1e, 0xf, 0x7,
    0xc7, 0x7f, 0x1f, 0x0,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3c, 0x7f, 0xff, 0x60, 0xc1,
    0x80,

    /* U+0051 "Q" */
    0x3e, 0x1f, 0xce, 0x3b, 0x6, 0xc1, 0xb0, 0x6c,
    0x1b, 0x8e, 0x7f, 0xf, 0xe0, 0x1c, 0x3,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3f, 0xdf, 0x33, 0x66, 0xc7,
    0x8c,

    /* U+0053 "S" */
    0x7b, 0xfc, 0x70, 0xf9, 0xf0, 0xe3, 0xfd, 0xe0,

    /* U+0054 "T" */
    0xff, 0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe7,
    0x7e, 0x3c,

    /* U+0056 "V" */
    0xc1, 0xe0, 0xd8, 0xcc, 0x66, 0x31, 0xb0, 0xd8,
    0x6c, 0x1c, 0xe, 0x0,

    /* U+0057 "W" */
    0xc1, 0x7, 0x87, 0xd, 0x8e, 0x33, 0x36, 0x66,
    0x6c, 0xc6, 0xdb, 0xf, 0x1e, 0x1e, 0x3c, 0x18,
    0x30, 0x30, 0x60,

    /* U+0058 "X" */
    0xc7, 0x8d, 0xb3, 0x63, 0x87, 0x1b, 0x36, 0xc7,
    0x8c,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0xff, 0x7, 0xe, 0x1c, 0x38, 0x70, 0xe0,
    0xff, 0xff,

    /* U+005B "[" */
    0xff, 0x6d, 0xb6, 0xdb, 0x6f, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x81, 0x83, 0x6, 0x6, 0xc, 0xc, 0x18,
    0x30, 0x30, 0x60, 0x60, 0xc0,

    /* U+005D "]" */
    0xfd, 0xb6, 0xdb, 0x6d, 0xbf, 0xc0,

    /* U+005E "^" */
    0x38, 0x71, 0xb3, 0x6c, 0x78, 0xc0,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xcc, 0x80,

    /* U+0061 "a" */
    0xfb, 0xf0, 0xdf, 0xcf, 0xf7, 0xc0,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xd, 0xdf, 0xf1, 0xe3, 0xc7,
    0xff, 0x70,

    /* U+0063 "c" */
    0x7f, 0xf1, 0x8c, 0x7d, 0xe0,

    /* U+0064 "d" */
    0x6, 0xc, 0x18, 0x37, 0x7f, 0xf1, 0xe3, 0xc7,
    0xfd, 0xd8,

    /* U+0065 "e" */
    0x7b, 0xfc, 0xff, 0xc3, 0xf7, 0xc0,

    /* U+0066 "f" */
    0x3b, 0xd8, 0xcf, 0xfd, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7f, 0x9b, 0x36, 0x67, 0x98, 0x1f, 0x63, 0xc6,
    0xf8,

    /* U+0068 "h" */
    0xc1, 0x83, 0x6, 0xd, 0xdf, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0xf3, 0xff, 0xf0,

    /* U+006A "j" */
    0x6c, 0x36, 0xdb, 0x6d, 0xfc,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0xc, 0x79, 0xb6, 0x78, 0xd9,
    0x9b, 0x18,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xdb, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcc,

    /* U+006E "n" */
    0xdd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+006F "o" */
    0x7d, 0xff, 0x1e, 0x3c, 0x7f, 0xdf, 0x0,

    /* U+0070 "p" */
    0xdd, 0xff, 0x1e, 0x3c, 0x7f, 0xf7, 0x60, 0xc1,
    0x80,

    /* U+0071 "q" */
    0x77, 0xff, 0x1e, 0x3c, 0x7f, 0xdd, 0x83, 0x6,
    0xc,

    /* U+0072 "r" */
    0xdf, 0xf1, 0x8c, 0x63, 0x0,

    /* U+0073 "s" */
    0x7f, 0xc6, 0x3f, 0xe0,

    /* U+0074 "t" */
    0x63, 0x3f, 0xf6, 0x31, 0x8f, 0x38,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xdd, 0x80,

    /* U+0076 "v" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18,

    /* U+0077 "w" */
    0xc6, 0x3c, 0x63, 0x6f, 0x66, 0xf6, 0x39, 0xc3,
    0x9c, 0x19, 0x80,

    /* U+0078 "x" */
    0xc6, 0xd9, 0xb1, 0xc6, 0xcd, 0xb1, 0x80,

    /* U+0079 "y" */
    0xc3, 0xc3, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,
    0x30, 0x30,

    /* U+007A "z" */
    0xff, 0x36, 0xcf, 0xf0,

    /* U+007B "{" */
    0x37, 0x66, 0x66, 0xcc, 0x66, 0x66, 0x73,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xce, 0x66, 0x66, 0x33, 0x66, 0x66, 0xec,

    /* U+007E "~" */
    0x67, 0xef, 0x7e, 0x60,

    /* U+00C4 "Ä" */
    0x33, 0xc, 0xc0, 0x0, 0x30, 0x1e, 0x7, 0x83,
    0x30, 0xcc, 0x61, 0x9f, 0xe7, 0xfb, 0x3, 0xc0,
    0xc0,

    /* U+00D6 "Ö" */
    0x36, 0x1b, 0x0, 0x7, 0xc7, 0xf7, 0x1f, 0x7,
    0x83, 0xc1, 0xe0, 0xf8, 0xef, 0xe3, 0xe0,

    /* U+00DC "Ü" */
    0x66, 0x66, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xe7, 0x7e, 0x3c,

    /* U+00DF "ß" */
    0x7d, 0xff, 0x1e, 0x3c, 0xfb, 0x37, 0x67, 0xc7,
    0xbf, 0x70,

    /* U+00E4 "ä" */
    0x6d, 0xb0, 0x3e, 0xfc, 0x37, 0xf3, 0xfd, 0xf0,

    /* U+00F6 "ö" */
    0x6c, 0xd8, 0x3, 0xef, 0xf8, 0xf1, 0xe3, 0xfe,
    0xf8,

    /* U+00FC "ü" */
    0x6c, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xfe,
    0xec
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 58, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 83, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 112, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 7, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 130, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 30, .adv_w = 187, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 180, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 60, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 58, .adv_w = 80, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 65, .adv_w = 80, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 72, .adv_w = 128, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 76, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 84, .adv_w = 66, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 86, .adv_w = 78, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 87, .adv_w = 68, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 110, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 101, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 110, .adv_w = 130, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 71, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 71, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 196, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 203, .adv_w = 128, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 209, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 216, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 230, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 243, .adv_w = 155, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 144, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 161, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 125, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 118, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 163, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 162, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 68, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 85, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 224, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 169, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 176, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 409, .adv_w = 144, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 121, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 127, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 167, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 151, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 232, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 141, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 133, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 122, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 83, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 512, .adv_w = 110, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 525, .adv_w = 83, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 531, .adv_w = 128, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 537, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 539, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 541, .adv_w = 126, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 129, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 81, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 594, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 63, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 65, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 612, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 63, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 208, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 138, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 657, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 666, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 102, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 121, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 191, .box_w = 12, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 121, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 723, .adv_w = 102, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 88, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 734, .adv_w = 122, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 738, .adv_w = 88, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 745, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 749, .adv_w = 155, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 167, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 126, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 138, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0}
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
const lv_font_t ui_font_Calibri16Bold = {
#else
lv_font_t ui_font_Calibri16Bold = {
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



#endif /*#if UI_FONT_CALIBRI16BOLD*/

