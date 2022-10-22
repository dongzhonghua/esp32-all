/*******************************************************************************
 * Size: 4 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_FONT_ARIAL_4
#define LV_FONT_ARIAL_4 1
#endif

#if LV_FONT_ARIAL_4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0021 "!" */
    0x64, 0x20,

    /* U+0022 "\"" */
    0x73,

    /* U+0023 "#" */
    0x45, 0x7, 0x70, 0x77, 0x0,

    /* U+0024 "$" */
    0x57, 0x4, 0x70, 0x59, 0x0, 0x10,

    /* U+0025 "%" */
    0x54, 0x40, 0x36, 0x41, 0x4, 0x63,

    /* U+0026 "&" */
    0x47, 0x5, 0x81, 0x68, 0x40, 0x0,

    /* U+0027 "'" */
    0x50,

    /* U+0028 "(" */
    0x30, 0x50, 0x50, 0x40,

    /* U+0029 ")" */
    0x40, 0x31, 0x31, 0x40,

    /* U+002A "*" */
    0x72, 0x0,

    /* U+002B "+" */
    0x4, 0x3, 0x80,

    /* U+002D "-" */
    0x41,

    /* U+002E "." */
    0x20,

    /* U+002F "/" */
    0x40, 0x40, 0x40,

    /* U+0030 "0" */
    0x56, 0x5, 0x50, 0x56, 0x0,

    /* U+0031 "1" */
    0x36, 0x5, 0x5,

    /* U+0032 "2" */
    0x56, 0x0, 0x70, 0x95, 0x0,

    /* U+0033 "3" */
    0x46, 0x0, 0x80, 0x46, 0x0,

    /* U+0034 "4" */
    0x8, 0x5, 0x50, 0x68, 0x0,

    /* U+0035 "5" */
    0x64, 0x6, 0x50, 0x47, 0x0,

    /* U+0036 "6" */
    0x55, 0x7, 0x50, 0x57, 0x0,

    /* U+0037 "7" */
    0x49, 0x1, 0x50, 0x50, 0x0,

    /* U+0038 "8" */
    0x56, 0x7, 0x70, 0x56, 0x0,

    /* U+0039 "9" */
    0x56, 0x4, 0x80, 0x56, 0x0,

    /* U+003A ":" */
    0x22,

    /* U+003B ";" */
    0x22, 0x10,

    /* U+003C "<" */
    0x0, 0x6, 0x50, 0x4, 0x0,

    /* U+003D "=" */
    0x7a, 0x10,

    /* U+003E ">" */
    0x10, 0x3, 0x80, 0x41, 0x0,

    /* U+003F "?" */
    0x56, 0x0, 0x60, 0x3, 0x0,

    /* U+0040 "@" */
    0x25, 0x43, 0x46, 0x84, 0x47, 0x84, 0x34, 0x44,

    /* U+0041 "A" */
    0x19, 0x7, 0x71, 0x96, 0x70,

    /* U+0042 "B" */
    0x76, 0x27, 0x73, 0x75, 0x40,

    /* U+0043 "C" */
    0x44, 0x46, 0x0, 0x55, 0x40,

    /* U+0044 "D" */
    0x75, 0x46, 0x6, 0x75, 0x40,

    /* U+0045 "E" */
    0x75, 0x17, 0x51, 0x75, 0x20,

    /* U+0046 "F" */
    0x75, 0x17, 0x50, 0x60, 0x0,

    /* U+0047 "G" */
    0x44, 0x56, 0x16, 0x45, 0x70,

    /* U+0048 "H" */
    0x60, 0x67, 0x56, 0x60, 0x60,

    /* U+0049 "I" */
    0x66, 0x60,

    /* U+004A "J" */
    0x6, 0x6, 0x55,

    /* U+004B "K" */
    0x65, 0x28, 0x70, 0x63, 0x40,

    /* U+004C "L" */
    0x60, 0x6, 0x0, 0x75, 0x0,

    /* U+004D "M" */
    0xa0, 0x90, 0x65, 0x90, 0x58, 0x50,

    /* U+004E "N" */
    0x91, 0x55, 0x65, 0x52, 0x70,

    /* U+004F "O" */
    0x45, 0x56, 0x6, 0x44, 0x50,

    /* U+0050 "P" */
    0x75, 0x57, 0x52, 0x60, 0x0,

    /* U+0051 "Q" */
    0x44, 0x55, 0x6, 0x46, 0x80, 0x0,

    /* U+0052 "R" */
    0x74, 0x57, 0x73, 0x60, 0x60,

    /* U+0053 "S" */
    0x55, 0x23, 0x72, 0x55, 0x30,

    /* U+0054 "T" */
    0x49, 0x10, 0x60, 0x6, 0x0,

    /* U+0055 "U" */
    0x60, 0x65, 0x5, 0x55, 0x40,

    /* U+0056 "V" */
    0x60, 0x55, 0x41, 0x18, 0x0,

    /* U+0057 "W" */
    0x55, 0x46, 0x55, 0x55, 0x44, 0x71,

    /* U+0058 "X" */
    0x64, 0x31, 0xa0, 0x63, 0x40,

    /* U+0059 "Y" */
    0x72, 0x41, 0x80, 0x6, 0x0,

    /* U+005A "Z" */
    0x39, 0x22, 0x50, 0x95, 0x10,

    /* U+005B "[" */
    0x70, 0x50, 0x50, 0x70,

    /* U+005C "\\" */
    0x40, 0x40, 0x40,

    /* U+005D "]" */
    0x75, 0x57,

    /* U+005E "^" */
    0x21, 0x55,

    /* U+005F "_" */
    0x3, 0x30,

    /* U+0060 "`" */
    0x30,

    /* U+0061 "a" */
    0x49, 0x7, 0x90,

    /* U+0062 "b" */
    0x50, 0x7, 0x70, 0x76, 0x0,

    /* U+0063 "c" */
    0x64, 0x54,

    /* U+0064 "d" */
    0x5, 0x68, 0x68,

    /* U+0065 "e" */
    0x77, 0x6, 0x60,

    /* U+0066 "f" */
    0x61, 0x80, 0x50,

    /* U+0067 "g" */
    0x68, 0x68, 0x46,

    /* U+0068 "h" */
    0x50, 0x77, 0x55,

    /* U+0069 "i" */
    0x25, 0x50,

    /* U+006A "j" */
    0x2, 0x5, 0x5, 0x5,

    /* U+006B "k" */
    0x50, 0x75, 0x66,

    /* U+006C "l" */
    0x55, 0x50,

    /* U+006D "m" */
    0x77, 0x60, 0x55, 0x41,

    /* U+006E "n" */
    0x77, 0x55,

    /* U+006F "o" */
    0x67, 0x6, 0x70,

    /* U+0070 "p" */
    0x76, 0x7, 0x70, 0x50, 0x0,

    /* U+0071 "q" */
    0x68, 0x68, 0x5,

    /* U+0072 "r" */
    0x71, 0x50,

    /* U+0073 "s" */
    0x75, 0x47,

    /* U+0074 "t" */
    0x30, 0x70, 0x60,

    /* U+0075 "u" */
    0x55, 0x68,

    /* U+0076 "v" */
    0x55, 0x44,

    /* U+0077 "w" */
    0x58, 0x56, 0x64,

    /* U+0078 "x" */
    0x65, 0x66,

    /* U+0079 "y" */
    0x55, 0x55, 0x51,

    /* U+007A "z" */
    0x47, 0x84,

    /* U+007B "{" */
    0x41, 0x50, 0x50, 0x51,

    /* U+007C "|" */
    0x44, 0x44,

    /* U+007D "}" */
    0x50, 0x50, 0x41, 0x60,

    /* U+007E "~" */
    0x45, 0x0,

    /* U+F001 "" */
    0x0, 0x2, 0x9, 0xee, 0xa, 0x18, 0x28, 0x4d,
    0x94, 0x2,

    /* U+F008 "" */
    0x97, 0x6a, 0x1c, 0x76, 0xc2, 0x97, 0x6a, 0x10,

    /* U+F00B "" */
    0x0, 0x0, 0xfa, 0xff, 0xb8, 0xbb, 0xfa, 0xfe,
    0x0, 0x0,

    /* U+F00C "" */
    0x0, 0x2b, 0xb5, 0xc2, 0x2c, 0x20,

    /* U+F00D "" */
    0xa4, 0x86, 0xf2, 0x94, 0x80,

    /* U+F011 "" */
    0x0, 0x30, 0x7, 0x38, 0x80, 0xa1, 0x75, 0x49,
    0x30, 0x92, 0x7, 0x93, 0x0,

    /* U+F013 "" */
    0x0, 0x32, 0x0, 0x9e, 0xd6, 0xb, 0x5a, 0x60,
    0x9e, 0xd6, 0x0, 0x32, 0x0,

    /* U+F015 "" */
    0x1, 0x44, 0x2, 0xaa, 0xc0, 0x8e, 0xfa, 0x33,
    0xe6, 0xb0, 0x0, 0x0, 0x0,

    /* U+F019 "" */
    0x0, 0x52, 0x0, 0xb, 0x40, 0x4, 0xfc, 0x2,
    0xcb, 0xb9, 0x18, 0x86, 0x50,

    /* U+F01C "" */
    0x58, 0x89, 0xc, 0x51, 0xa6, 0xff, 0xff, 0x70,

    /* U+F021 "" */
    0x18, 0x87, 0x91, 0x7f, 0x54, 0x3, 0xf6, 0x38,
    0x46, 0x70,

    /* U+F026 "" */
    0x0, 0x7d, 0xff, 0x8,

    /* U+F027 "" */
    0x0, 0x7, 0xd0, 0xff, 0x60, 0x80,

    /* U+F028 "" */
    0x0, 0x2, 0x7, 0xd1, 0x73, 0xff, 0x65, 0x60,
    0x81, 0x73, 0x0, 0x2, 0x0,

    /* U+F03E "" */
    0xbe, 0xff, 0xcb, 0x3b, 0xb8, 0x8b,

    /* U+F048 "" */
    0x30, 0x39, 0x7e, 0x9e, 0xf8, 0x2c, 0x0, 0x0,

    /* U+F04B "" */
    0x50, 0x0, 0xfd, 0x40, 0xff, 0xf5, 0xfd, 0x40,
    0x50, 0x0,

    /* U+F04C "" */
    0x63, 0x63, 0xf8, 0xf8, 0xf8, 0xf8, 0xf7, 0xf7,
    0x0, 0x0,

    /* U+F04D "" */
    0x67, 0x72, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf7,
    0x0, 0x0,

    /* U+F051 "" */
    0x30, 0x38, 0xca, 0x8f, 0xe7, 0x78, 0x0, 0x0,

    /* U+F052 "" */
    0x0, 0x40, 0x0, 0x4f, 0xc0, 0xb, 0xcc, 0x40,
    0xef, 0xf7, 0x0, 0x0, 0x0,

    /* U+F053 "" */
    0x0, 0x1, 0xa1, 0x94, 0x0, 0xa1, 0x0, 0x0,

    /* U+F054 "" */
    0x10, 0x7, 0x60, 0xb, 0x27, 0x50, 0x10, 0x0,

    /* U+F067 "" */
    0x3, 0x0, 0xa, 0x20, 0xbe, 0xc5, 0x9, 0x10,
    0x1, 0x0,

    /* U+F068 "" */
    0xbc, 0xc5,

    /* U+F06E "" */
    0x48, 0x88, 0xd, 0x7c, 0xd3, 0x49, 0x88, 0x0,

    /* U+F070 "" */
    0x4, 0x0, 0x0, 0x4, 0xb8, 0x91, 0x9, 0x5c,
    0xa9, 0x1, 0x96, 0x96, 0x0, 0x0, 0x4,

    /* U+F071 "" */
    0x0, 0x3, 0x0, 0x0, 0x8e, 0x10, 0x2, 0xe6,
    0x90, 0xa, 0xf9, 0xf3, 0x7, 0x88, 0x83,

    /* U+F074 "" */
    0x0, 0x1, 0xa4, 0x9d, 0xb, 0x54, 0xa4, 0x9d,
    0x0, 0x1,

    /* U+F077 "" */
    0x4, 0x10, 0x59, 0xa1, 0x50, 0x23,

    /* U+F078 "" */
    0x50, 0x23, 0x59, 0xa1, 0x4, 0x10,

    /* U+F079 "" */
    0x0, 0x0, 0x0, 0x5c, 0x68, 0x50, 0x18, 0x1,
    0x80, 0x9, 0x76, 0xc0, 0x0, 0x0, 0x0,

    /* U+F07B "" */
    0xfe, 0x87, 0xff, 0xff, 0xff, 0xff,

    /* U+F093 "" */
    0x2, 0x20, 0x1e, 0xe1, 0x8, 0x80, 0xba, 0xab,
    0x78, 0x66,

    /* U+F095 "" */
    0x0, 0x1, 0x60, 0x0, 0x6e, 0x0, 0x5, 0x90,
    0xcc, 0xb0, 0x6, 0x40, 0x0,

    /* U+F0C4 "" */
    0x41, 0x21, 0xaa, 0xc1, 0x5f, 0x70, 0xa5, 0x93,
    0x0, 0x0,

    /* U+F0C5 "" */
    0xa, 0x85, 0x8f, 0xd6, 0xcf, 0xfb, 0xcb, 0xc8,
    0x78, 0x50,

    /* U+F0C7 "" */
    0x67, 0x40, 0x80, 0xb3, 0xfb, 0xf4, 0xfb, 0xf4,
    0x0, 0x0,

    /* U+F0E7 "" */
    0x3, 0x30, 0xd, 0x90, 0xe, 0xf4, 0x0, 0xb0,
    0x2, 0x20,

    /* U+F0EA "" */
    0x34, 0x20, 0xfa, 0x70, 0xfb, 0xb6, 0xfb, 0xfb,
    0x7, 0xb7,

    /* U+F0F3 "" */
    0x3, 0x0, 0x4f, 0xb0, 0x8f, 0xf0, 0xac, 0xc4,
    0x4, 0x10,

    /* U+F11C "" */
    0xbc, 0xaa, 0x7f, 0xab, 0xc8, 0xba, 0x8a, 0x70,

    /* U+F124 "" */
    0x0, 0x1, 0x60, 0x1, 0x8f, 0xb0, 0xa, 0xdf,
    0x40, 0x0, 0x4d, 0x0, 0x0, 0x13, 0x0,

    /* U+F15B "" */
    0x43, 0x1f, 0xc9, 0xff, 0xff, 0xff, 0xbb, 0xb0,

    /* U+F1EB "" */
    0x3, 0x53, 0xa, 0x76, 0x7a, 0xa, 0x8a, 0x0,
    0xa, 0x0, 0x0, 0x0, 0x0,

    /* U+F240 "" */
    0x98, 0x88, 0x8c, 0xff, 0xfa, 0x98, 0x88, 0x80,

    /* U+F241 "" */
    0x98, 0x88, 0x8c, 0xff, 0x4a, 0x98, 0x88, 0x80,

    /* U+F242 "" */
    0x98, 0x88, 0x8c, 0xf8, 0xa, 0x98, 0x88, 0x80,

    /* U+F243 "" */
    0x98, 0x88, 0x8c, 0xc0, 0xa, 0x98, 0x88, 0x80,

    /* U+F244 "" */
    0x98, 0x88, 0x88, 0x0, 0xa, 0x98, 0x88, 0x80,

    /* U+F287 "" */
    0x1, 0x73, 0x0, 0xd6, 0x64, 0x80, 0x0, 0x4b,
    0x0,

    /* U+F293 "" */
    0x3, 0x10, 0xaa, 0xb0, 0xd5, 0xd0, 0xb6, 0xb0,
    0x49, 0x60,

    /* U+F2ED "" */
    0x37, 0x51, 0x9c, 0xc3, 0xaa, 0xc4, 0xaa, 0xc4,
    0x58, 0x71,

    /* U+F304 "" */
    0x0, 0x1, 0x40, 0x2, 0xac, 0x2, 0xee, 0x10,
    0xde, 0x20, 0x7, 0x20, 0x0,

    /* U+F55A "" */
    0x2e, 0xdd, 0xed, 0xf6, 0x6f, 0x2e, 0xdd, 0xe0,

    /* U+F7C2 "" */
    0x4, 0x40, 0xa7, 0xb1, 0xff, 0xf2, 0xff, 0xf2,
    0xab, 0xa0,

    /* U+F8A2 "" */
    0x1, 0x6, 0xcb, 0xad, 0x42, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 18, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 23, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 3, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 36, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 14, .adv_w = 57, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 43, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 26, .adv_w = 12, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 27, .adv_w = 21, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 31, .adv_w = 21, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 35, .adv_w = 25, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 37, .adv_w = 37, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 21, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 18, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 18, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 18, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 18, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 37, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 37, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 103, .adv_w = 37, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 113, .adv_w = 65, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 121, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 39, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 18, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 53, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 50, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 50, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 203, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 39, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 46, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 60, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 43, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 39, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 18, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 253, .adv_w = 18, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 256, .adv_w = 18, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 258, .adv_w = 30, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 260, .adv_w = 36, .box_w = 4, .box_h = 1, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 262, .adv_w = 21, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 263, .adv_w = 36, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 36, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 18, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 14, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 14, .box_w = 2, .box_h = 4, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 294, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 14, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 53, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 36, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 36, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 313, .adv_w = 36, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 316, .adv_w = 21, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 18, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 46, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 335, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 21, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 341, .adv_w = 17, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 343, .adv_w = 21, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 347, .adv_w = 37, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 349, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 359, .adv_w = 64, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 377, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 401, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 414, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 440, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 458, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 481, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 495, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 505, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 515, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 525, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 533, .adv_w = 56, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 546, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 554, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 562, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 572, .adv_w = 56, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 574, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 80, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 597, .adv_w = 72, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 612, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 622, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 80, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 649, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 665, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 678, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 688, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 698, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 708, .adv_w = 40, .box_w = 4, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 718, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 728, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 738, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 64, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 761, .adv_w = 48, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 769, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 782, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 80, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 841, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 851, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 864, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 48, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 882, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x7, 0xa, 0xb, 0xc, 0x10, 0x12, 0x14,
    0x18, 0x1b, 0x20, 0x25, 0x26, 0x27, 0x3d, 0x47,
    0x4a, 0x4b, 0x4c, 0x50, 0x51, 0x52, 0x53, 0x66,
    0x67, 0x6d, 0x6f, 0x70, 0x73, 0x76, 0x77, 0x78,
    0x7a, 0x92, 0x94, 0xc3, 0xc4, 0xc6, 0xe6, 0xe9,
    0xf2, 0x11b, 0x123, 0x15a, 0x1ea, 0x23f, 0x240, 0x241,
    0x242, 0x243, 0x286, 0x292, 0x2ec, 0x303, 0x559, 0x7c1,
    0x8a1
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 33, .range_length = 11, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 45, .range_length = 82, .glyph_id_start = 12,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 61441, .range_length = 2210, .glyph_id_start = 94,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 57, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_arial_4 = {
#else
lv_font_t lv_font_arial_4 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 5,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_ARIAL_4*/

