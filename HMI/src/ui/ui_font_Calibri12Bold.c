/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --font D:/Arduino Projekte/HMI/.SL-Projekt/assets/calibrib.ttf -o D:/Arduino Projekte/HMI/.SL-Projekt/assets\ui_font_Calibri12Bold.c --format lvgl -r 0x20-0x7f --symbols äöüßÄÖÜ --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_CALIBRI12BOLD
#define UI_FONT_CALIBRI12BOLD 1
#endif

#if UI_FONT_CALIBRI12BOLD

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xcf,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x28, 0xaf, 0xca, 0x53, 0xf5, 0x14,

    /* U+0024 "$" */
    0x23, 0xb3, 0x8f, 0x3c, 0x73, 0x71, 0x0,

    /* U+0025 "%" */
    0x44, 0xa4, 0xa8, 0x48, 0x12, 0x15, 0x25, 0x22,

    /* U+0026 "&" */
    0x38, 0x6c, 0x6c, 0x38, 0x7a, 0xce, 0xc6, 0x7b,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x2d, 0x6d, 0xb2, 0x64,

    /* U+0029 ")" */
    0x99, 0x36, 0xda, 0xd0,

    /* U+002A "*" */
    0x25, 0x5c, 0xea, 0x90,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x44, 0x22, 0x10, 0x88, 0x44, 0x20,

    /* U+0030 "0" */
    0x76, 0xf7, 0xbd, 0xef, 0x6e,

    /* U+0031 "1" */
    0x31, 0xcb, 0xc, 0x30, 0xc3, 0x3f,

    /* U+0032 "2" */
    0x74, 0xc6, 0x33, 0x33, 0x1f,

    /* U+0033 "3" */
    0x74, 0xc6, 0xe1, 0x8e, 0x6e,

    /* U+0034 "4" */
    0x38, 0xe5, 0x96, 0x9b, 0xf1, 0x86,

    /* U+0035 "5" */
    0xfe, 0x31, 0xe1, 0x8c, 0x7e,

    /* U+0036 "6" */
    0x7e, 0x31, 0xed, 0xef, 0x6e,

    /* U+0037 "7" */
    0xf8, 0xcc, 0x63, 0x31, 0x8c,

    /* U+0038 "8" */
    0x76, 0xf6, 0xed, 0xef, 0x6e,

    /* U+0039 "9" */
    0x76, 0xf7, 0xb7, 0x8c, 0x7e,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0x6c, 0x6, 0xde,

    /* U+003C "<" */
    0x1b, 0x20, 0xc1, 0x80,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0xc1, 0x82, 0x6c, 0x0,

    /* U+003F "?" */
    0xf0, 0xc6, 0xe6, 0x1, 0x8c,

    /* U+0040 "@" */
    0x1f, 0x8, 0x24, 0xd6, 0x4d, 0xa2, 0x69, 0x99,
    0xb9, 0x0, 0x3e, 0x0,

    /* U+0041 "A" */
    0x18, 0x30, 0xf1, 0x26, 0x6f, 0xd9, 0xb3,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xfe, 0xcf, 0x3c, 0xfe,

    /* U+0043 "C" */
    0x76, 0x71, 0x8c, 0x63, 0x2e,

    /* U+0044 "D" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x78, 0xf3, 0x7c,

    /* U+0045 "E" */
    0xfe, 0x31, 0xfc, 0x63, 0x1f,

    /* U+0046 "F" */
    0xfe, 0x31, 0xfc, 0x63, 0x18,

    /* U+0047 "G" */
    0x7d, 0x87, 0x6, 0xc, 0xf8, 0xf1, 0xbe,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xff, 0xff,

    /* U+004A "J" */
    0x6d, 0xb6, 0xde,

    /* U+004B "K" */
    0xcf, 0x6d, 0xbc, 0xf3, 0x6d, 0xb3,

    /* U+004C "L" */
    0xcc, 0xcc, 0xcc, 0xcf,

    /* U+004D "M" */
    0xc1, 0xf1, 0xf8, 0xfe, 0xfd, 0x5e, 0xef, 0x27,
    0x93,

    /* U+004E "N" */
    0xc7, 0xcf, 0x9e, 0xbd, 0x79, 0xf3, 0xe3,

    /* U+004F "O" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0050 "P" */
    0xf6, 0xf7, 0xbf, 0x63, 0x18,

    /* U+0051 "Q" */
    0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c,
    0x3,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xfe, 0xdb, 0x3c, 0xf3,

    /* U+0053 "S" */
    0x76, 0x71, 0xe7, 0x8e, 0x6e,

    /* U+0054 "T" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0056 "V" */
    0xcf, 0x3c, 0xd2, 0x79, 0xe3, 0xc,

    /* U+0057 "W" */
    0xcc, 0xf3, 0x36, 0xd9, 0xb6, 0x6d, 0x8c, 0xc3,
    0x30, 0xcc,

    /* U+0058 "X" */
    0xcf, 0x37, 0x8c, 0x31, 0xec, 0xf3,

    /* U+0059 "Y" */
    0xcf, 0x37, 0x9e, 0x30, 0xc3, 0xc,

    /* U+005A "Z" */
    0xf8, 0xcc, 0x66, 0x33, 0x1f,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdc,

    /* U+005C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x82, 0x10, 0x42,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x7c,

    /* U+005E "^" */
    0x22, 0x95, 0x10,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0xf0, 0xdf, 0xbd, 0xbc,

    /* U+0062 "b" */
    0xc6, 0x3d, 0xbd, 0xef, 0x7e,

    /* U+0063 "c" */
    0x7c, 0xcc, 0xc7,

    /* U+0064 "d" */
    0x18, 0xdf, 0xbd, 0xef, 0x6f,

    /* U+0065 "e" */
    0x76, 0xff, 0x8c, 0x3c,

    /* U+0066 "f" */
    0x36, 0xf6, 0x66, 0x66,

    /* U+0067 "g" */
    0x7f, 0x6d, 0x9c, 0xc1, 0xed, 0xbc,

    /* U+0068 "h" */
    0xc6, 0x3d, 0xbd, 0xef, 0x7b,

    /* U+0069 "i" */
    0xf3, 0xff, 0xc0,

    /* U+006A "j" */
    0x6c, 0x36, 0xdb, 0x6f, 0x0,

    /* U+006B "k" */
    0xc6, 0x37, 0xbf, 0x7b, 0x7b,

    /* U+006C "l" */
    0xff, 0xff,

    /* U+006D "m" */
    0xf6, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb,

    /* U+006E "n" */
    0xf6, 0xf7, 0xbd, 0xec,

    /* U+006F "o" */
    0x76, 0xf7, 0xbd, 0xb8,

    /* U+0070 "p" */
    0xf6, 0xf7, 0xbd, 0xfb, 0x18,

    /* U+0071 "q" */
    0x7e, 0xf7, 0xbd, 0xbc, 0x63,

    /* U+0072 "r" */
    0xfb, 0x6d, 0x80,

    /* U+0073 "s" */
    0x7c, 0xe7, 0x3e,

    /* U+0074 "t" */
    0x6f, 0x66, 0x66, 0x30,

    /* U+0075 "u" */
    0xde, 0xf7, 0xbd, 0xbc,

    /* U+0076 "v" */
    0xde, 0xf6, 0xa7, 0x38,

    /* U+0077 "w" */
    0xdb, 0xdb, 0xdb, 0x66, 0x66, 0x66,

    /* U+0078 "x" */
    0xde, 0xdc, 0xed, 0xec,

    /* U+0079 "y" */
    0xde, 0xf6, 0xa7, 0x19, 0x8c,

    /* U+007A "z" */
    0xf3, 0x66, 0xcf,

    /* U+007B "{" */
    0x36, 0x66, 0xc6, 0x66, 0x63,

    /* U+007C "|" */
    0xff, 0xc0,

    /* U+007D "}" */
    0xc6, 0x66, 0x36, 0x66, 0x6c,

    /* U+007E "~" */
    0x6d, 0x80,

    /* U+00C4 "Ä" */
    0x24, 0x0, 0x60, 0xc3, 0xc4, 0x99, 0xbf, 0x66,
    0xcc,

    /* U+00D6 "Ö" */
    0x28, 0x1, 0xf6, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xf8,

    /* U+00DC "Ü" */
    0x28, 0x3, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xf8,

    /* U+00DF "ß" */
    0x7b, 0x3c, 0xf6, 0xdb, 0x3c, 0xf6,

    /* U+00E4 "ä" */
    0x50, 0x3c, 0x37, 0xef, 0x6f,

    /* U+00F6 "ö" */
    0x50, 0x1d, 0xbd, 0xef, 0x6e,

    /* U+00FC "ü" */
    0x50, 0x37, 0xbd, 0xef, 0x6f
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 63, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 84, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5, .adv_w = 96, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 26, .adv_w = 135, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 45, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 35, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 60, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 43, .adv_w = 96, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 47, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 51, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 53, .adv_w = 59, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 54, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 53, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 53, .box_w = 3, .box_h = 8, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 119, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 123, .adv_w = 96, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 125, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 129, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 134, .adv_w = 173, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 146, .adv_w = 116, .box_w = 7, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 88, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 122, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 51, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 64, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 81, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 168, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 132, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 247, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 95, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 125, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 174, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 62, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 308, .adv_w = 83, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 315, .adv_w = 62, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 319, .adv_w = 96, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 322, .adv_w = 96, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 323, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 324, .adv_w = 95, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 80, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 97, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 61, .box_w = 4, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 91, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 47, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 49, .box_w = 3, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 368, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 47, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 156, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 103, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 103, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 394, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 399, .adv_w = 68, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 77, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 67, .box_w = 4, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 103, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 143, .box_w = 8, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 88, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 432, .adv_w = 76, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 66, .box_w = 4, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 440, .adv_w = 91, .box_w = 1, .box_h = 10, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 442, .adv_w = 66, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 447, .adv_w = 96, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 449, .adv_w = 116, .box_w = 7, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 107, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t ui_font_Calibri12Bold = {
#else
lv_font_t ui_font_Calibri12Bold = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_CALIBRI12BOLD*/

