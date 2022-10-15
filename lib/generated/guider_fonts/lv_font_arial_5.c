/*******************************************************************************
 * Size: 5 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_FONT_ARIAL_5
#define LV_FONT_ARIAL_5 1
#endif

#if LV_FONT_ARIAL_5

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0021 "!" */
    0x87, 0x54,

    /* U+0022 "\"" */
    0x77, 0x22,

    /* U+0023 "#" */
    0x14, 0x59, 0x86, 0x99, 0x45, 0x50,

    /* U+0024 "$" */
    0x4, 0x7, 0x73, 0x68, 0x1, 0x57, 0x79, 0x40,
    0x20,

    /* U+0025 "%" */
    0x56, 0x32, 0x4, 0x45, 0x0, 0x3, 0x46, 0x0,
    0x53, 0x70,

    /* U+0026 "&" */
    0x28, 0x30, 0x2a, 0x10, 0x76, 0x90, 0x67, 0xa0,
    0x0, 0x0,

    /* U+0027 "'" */
    0x72,

    /* U+0028 "(" */
    0x13, 0x60, 0x70, 0x60, 0x23,

    /* U+0029 ")" */
    0x40, 0x14, 0x6, 0x24, 0x50,

    /* U+002A "*" */
    0x65, 0x33,

    /* U+002B "+" */
    0x4, 0x5, 0xa4, 0x6, 0x0,

    /* U+002D "-" */
    0x64,

    /* U+002E "." */
    0x40,

    /* U+002F "/" */
    0x14, 0x50, 0x50, 0x50,

    /* U+0030 "0" */
    0x57, 0x37, 0x7, 0x70, 0x75, 0x73,

    /* U+0031 "1" */
    0x1a, 0x27, 0x7, 0x7,

    /* U+0032 "2" */
    0x67, 0x41, 0x16, 0x18, 0xa, 0x83,

    /* U+0033 "3" */
    0x57, 0x30, 0x83, 0x20, 0x76, 0x73,

    /* U+0034 "4" */
    0x9, 0x14, 0x81, 0x8a, 0x40, 0x61,

    /* U+0035 "5" */
    0x67, 0x38, 0x72, 0x10, 0x86, 0x74,

    /* U+0036 "6" */
    0x57, 0x38, 0x72, 0x80, 0x75, 0x73,

    /* U+0037 "7" */
    0x58, 0x60, 0x70, 0x7, 0x3, 0x40,

    /* U+0038 "8" */
    0x57, 0x46, 0x93, 0x60, 0x76, 0x74,

    /* U+0039 "9" */
    0x67, 0x37, 0x8, 0x47, 0x75, 0x72,

    /* U+003A ":" */
    0x40, 0x40,

    /* U+003B ";" */
    0x40, 0x43,

    /* U+003C "<" */
    0x0, 0x24, 0x72, 0x47, 0x20, 0x2,

    /* U+003D "=" */
    0x57, 0x45, 0x74,

    /* U+003E ">" */
    0x20, 0x3, 0x73, 0x37, 0x32, 0x0,

    /* U+003F "?" */
    0x67, 0x41, 0x25, 0x7, 0x0, 0x40,

    /* U+0040 "@" */
    0x7, 0x67, 0x25, 0x57, 0x86, 0x57, 0x6, 0x66,
    0x78, 0xa3, 0x17, 0x66, 0x40,

    /* U+0041 "A" */
    0xa, 0x10, 0x25, 0x60, 0x77, 0x90, 0x70, 0x52,

    /* U+0042 "B" */
    0x87, 0x80, 0x87, 0x80, 0x70, 0x70, 0x87, 0x80,

    /* U+0043 "C" */
    0x37, 0x90, 0x70, 0x0, 0x70, 0x12, 0x37, 0x91,

    /* U+0044 "D" */
    0x87, 0x90, 0x70, 0x34, 0x70, 0x34, 0x87, 0x90,

    /* U+0045 "E" */
    0x87, 0x70, 0x87, 0x60, 0x70, 0x0, 0x87, 0x70,

    /* U+0046 "F" */
    0x87, 0x68, 0x74, 0x70, 0x7, 0x0,

    /* U+0047 "G" */
    0x27, 0x82, 0x70, 0x2, 0x70, 0x76, 0x28, 0x75,

    /* U+0048 "H" */
    0x70, 0x43, 0x87, 0x93, 0x70, 0x43, 0x70, 0x43,

    /* U+0049 "I" */
    0x77, 0x77,

    /* U+004A "J" */
    0x5, 0x10, 0x51, 0x15, 0x17, 0x90,

    /* U+004B "K" */
    0x70, 0x80, 0x8a, 0x10, 0x95, 0x50, 0x70, 0x81,

    /* U+004C "L" */
    0x70, 0x7, 0x0, 0x70, 0x8, 0x74,

    /* U+004D "M" */
    0x93, 0xb, 0x76, 0x48, 0x76, 0x57, 0x74, 0x67,

    /* U+004E "N" */
    0x92, 0x43, 0x78, 0x43, 0x73, 0x93, 0x70, 0x93,

    /* U+004F "O" */
    0x37, 0x82, 0x80, 0x7, 0x70, 0x7, 0x38, 0x72,

    /* U+0050 "P" */
    0x87, 0x90, 0x70, 0x71, 0x87, 0x60, 0x70, 0x0,

    /* U+0051 "Q" */
    0x37, 0x81, 0x70, 0x7, 0x70, 0x7, 0x37, 0xb5,
    0x0, 0x0,

    /* U+0052 "R" */
    0x87, 0x91, 0x88, 0x90, 0x70, 0x90, 0x70, 0x45,

    /* U+0053 "S" */
    0x57, 0x70, 0x66, 0x20, 0x21, 0x90, 0x57, 0x80,

    /* U+0054 "T" */
    0x6b, 0x70, 0x70, 0x7, 0x0, 0x70,

    /* U+0055 "U" */
    0x70, 0x43, 0x70, 0x43, 0x70, 0x42, 0x47, 0x80,

    /* U+0056 "V" */
    0x80, 0x52, 0x60, 0x70, 0x16, 0x60, 0xa, 0x10,

    /* U+0057 "W" */
    0x70, 0xb0, 0x77, 0x47, 0x34, 0x57, 0x29, 0x1,
    0x90, 0xa0,

    /* U+0058 "X" */
    0x71, 0x70, 0xa, 0x30, 0x1a, 0x50, 0x80, 0x81,

    /* U+0059 "Y" */
    0x80, 0x71, 0x29, 0x50, 0x8, 0x0, 0x7, 0x0,

    /* U+005A "Z" */
    0x57, 0xb0, 0x62, 0x35, 0xb, 0x77,

    /* U+005B "[" */
    0x82, 0x70, 0x70, 0x70, 0x82,

    /* U+005C "\\" */
    0x50, 0x50, 0x50, 0x14,

    /* U+005D "]" */
    0x91, 0x61, 0x61, 0x61, 0x91,

    /* U+005E "^" */
    0x37, 0x6, 0x60,

    /* U+005F "_" */
    0x5, 0x54,

    /* U+0060 "`" */
    0x50,

    /* U+0061 "a" */
    0x67, 0x45, 0x66, 0x77, 0x60,

    /* U+0062 "b" */
    0x70, 0x9, 0x74, 0x70, 0x78, 0x64,

    /* U+0063 "c" */
    0x57, 0x26, 0x0, 0x68, 0x30,

    /* U+0064 "d" */
    0x0, 0x66, 0x76, 0x60, 0x66, 0x76,

    /* U+0065 "e" */
    0x67, 0x49, 0x65, 0x67, 0x40,

    /* U+0066 "f" */
    0x63, 0xa2, 0x70, 0x70,

    /* U+0067 "g" */
    0x67, 0x67, 0x7, 0x67, 0x75, 0x73,

    /* U+0068 "h" */
    0x70, 0x8, 0x74, 0x70, 0x67, 0x7,

    /* U+0069 "i" */
    0x47, 0x77,

    /* U+006A "j" */
    0x4, 0x7, 0x7, 0x7, 0x17,

    /* U+006B "k" */
    0x70, 0x7, 0x71, 0x98, 0x7, 0x53,

    /* U+006C "l" */
    0x77, 0x77,

    /* U+006D "m" */
    0x87, 0x77, 0x72, 0x57, 0x72, 0x57,

    /* U+006E "n" */
    0x86, 0x47, 0x6, 0x70, 0x70,

    /* U+006F "o" */
    0x67, 0x47, 0x7, 0x66, 0x40,

    /* U+0070 "p" */
    0x85, 0x46, 0x6, 0x97, 0x37, 0x0,

    /* U+0071 "q" */
    0x66, 0x67, 0x6, 0x67, 0x60, 0x6,

    /* U+0072 "r" */
    0x84, 0x70, 0x70,

    /* U+0073 "s" */
    0x77, 0x15, 0x81, 0x68, 0x20,

    /* U+0074 "t" */
    0x0, 0x60, 0x91, 0x70, 0x72,

    /* U+0075 "u" */
    0x70, 0x67, 0x6, 0x67, 0x60,

    /* U+0076 "v" */
    0x72, 0x46, 0x70, 0x19, 0x0,

    /* U+0077 "w" */
    0x68, 0x26, 0x66, 0x92, 0x55, 0xa0,

    /* U+0078 "x" */
    0x76, 0x12, 0xa0, 0x75, 0x20,

    /* U+0079 "y" */
    0x72, 0x46, 0x70, 0x19, 0x5, 0x30,

    /* U+007A "z" */
    0x4a, 0x22, 0x60, 0xb6, 0x20,

    /* U+007B "{" */
    0x44, 0x60, 0x80, 0x60, 0x34,

    /* U+007C "|" */
    0x66, 0x66, 0x60,

    /* U+007D "}" */
    0x80, 0x60, 0x25, 0x50, 0x80,

    /* U+007E "~" */
    0x68, 0x50,

    /* U+F001 "" */
    0x0, 0x0, 0x10, 0x28, 0xdf, 0xb, 0xc7, 0xb0,
    0xa0, 0xa, 0x4b, 0xb, 0xfb, 0x90, 0x11,

    /* U+F008 "" */
    0x79, 0x79, 0x79, 0x71, 0x88, 0x99, 0x5a, 0x89,
    0xa7, 0xb8,

    /* U+F00B "" */
    0x0, 0x11, 0xf, 0xaf, 0xff, 0xa6, 0xbb, 0xab,
    0x7b, 0xbb, 0xe9, 0xff, 0xe4, 0x24, 0x44,

    /* U+F00C "" */
    0x0, 0x1, 0x84, 0x1, 0xd7, 0xba, 0xd7, 0x0,
    0xa7, 0x0,

    /* U+F00D "" */
    0x60, 0x42, 0x9c, 0xd1, 0x5f, 0xb0, 0xa2, 0x84,

    /* U+F011 "" */
    0x0, 0x10, 0x2, 0x5c, 0x51, 0xb2, 0xc2, 0xbc,
    0x7, 0xc, 0x96, 0x16, 0x90, 0x8b, 0x70,

    /* U+F013 "" */
    0x0, 0x30, 0x3, 0x7f, 0x83, 0x8f, 0x7e, 0xa7,
    0xe3, 0xd9, 0x5b, 0xfb, 0x60, 0x7, 0x10,

    /* U+F015 "" */
    0x0, 0x0, 0x0, 0x2, 0xb9, 0xc0, 0x4b, 0xca,
    0xc1, 0x6d, 0xff, 0x94, 0x1f, 0x6b, 0xb0, 0x4,
    0x13, 0x30,

    /* U+F019 "" */
    0x0, 0x50, 0x0, 0x2f, 0x20, 0x8, 0xf8, 0x0,
    0x7f, 0x70, 0xee, 0x9e, 0xe9, 0x99, 0x87,

    /* U+F01C "" */
    0xa, 0xaa, 0x70, 0x92, 0x0, 0x83, 0xfd, 0x58,
    0xe9, 0xef, 0xff, 0xf8,

    /* U+F021 "" */
    0x1, 0x41, 0x34, 0xb7, 0xcd, 0x90, 0x1b, 0xc8,
    0x81, 0x5, 0xfa, 0x17, 0x86, 0x6a, 0x60,

    /* U+F026 "" */
    0x2, 0x5c, 0xf8, 0xff, 0x80, 0x57, 0x0, 0x0,

    /* U+F027 "" */
    0x2, 0x50, 0xdf, 0x85, 0xff, 0x87, 0x5, 0x70,
    0x0, 0x0,

    /* U+F028 "" */
    0x0, 0x0, 0x10, 0x2, 0x52, 0x81, 0xcf, 0x86,
    0x77, 0xff, 0x87, 0x77, 0x5, 0x73, 0x73, 0x0,
    0x0, 0x40,

    /* U+F03E "" */
    0xab, 0xcc, 0xab, 0x8f, 0x9f, 0xe6, 0x40, 0xac,
    0xaa, 0xac,

    /* U+F048 "" */
    0x0, 0x0, 0x91, 0x88, 0x9a, 0xf8, 0x9d, 0xf8,
    0x92, 0xb8, 0x20, 0x1,

    /* U+F04B "" */
    0x30, 0x0, 0xf, 0xd4, 0x0, 0xff, 0xfa, 0x1f,
    0xff, 0xd2, 0xff, 0x80, 0x7, 0x20, 0x0,

    /* U+F04C "" */
    0x0, 0x1, 0xf, 0xd7, 0xf5, 0xfe, 0x8f, 0x6f,
    0xe8, 0xf6, 0xfd, 0x7f, 0x53, 0x31, 0x40,

    /* U+F04D "" */
    0x1, 0x10, 0xf, 0xff, 0xf5, 0xff, 0xff, 0x6f,
    0xff, 0xf6, 0xff, 0xff, 0x54, 0x55, 0x40,

    /* U+F051 "" */
    0x0, 0x0, 0x5a, 0xb, 0x6f, 0xbb, 0x6f, 0xdb,
    0x6d, 0x1b, 0x11, 0x3,

    /* U+F052 "" */
    0x0, 0x0, 0x0, 0x0, 0x8d, 0x10, 0x7, 0xff,
    0xc0, 0xa, 0xbb, 0xb3, 0xe, 0xff, 0xf5, 0x4,
    0x44, 0x41,

    /* U+F053 "" */
    0x3, 0xa3, 0xc1, 0x6a, 0x0, 0x79, 0x0, 0x10,

    /* U+F054 "" */
    0x85, 0x0, 0xb5, 0x8, 0x87, 0x90, 0x10, 0x0,

    /* U+F067 "" */
    0x0, 0x0, 0x0, 0x4a, 0x0, 0x58, 0xc5, 0x19,
    0xbd, 0x93, 0x4, 0xa0, 0x0, 0x2, 0x0,

    /* U+F068 "" */
    0x12, 0x22, 0xc, 0xdd, 0xd4,

    /* U+F06E "" */
    0x6, 0x88, 0x30, 0x99, 0x67, 0xe4, 0xc8, 0xe9,
    0xd6, 0x19, 0x89, 0x70,

    /* U+F070 "" */
    0x30, 0x0, 0x0, 0x7, 0x98, 0x85, 0x0, 0x35,
    0xba, 0xa8, 0x7, 0xc1, 0xcb, 0xb0, 0x7, 0x95,
    0x97, 0x0, 0x0, 0x0, 0x51,

    /* U+F071 "" */
    0x0, 0x5, 0x10, 0x0, 0x1, 0xfa, 0x0, 0x0,
    0x97, 0xc3, 0x0, 0x2f, 0x8d, 0xc0, 0xb, 0xf8,
    0xdf, 0x50, 0x8a, 0xaa, 0xa5,

    /* U+F074 "" */
    0x0, 0x0, 0xa, 0x51, 0xbc, 0x17, 0xb6, 0x50,
    0xa8, 0x43, 0xc7, 0x3d, 0xd0, 0x0, 0x11,

    /* U+F077 "" */
    0x0, 0x0, 0x0, 0x9d, 0x10, 0x98, 0x3c, 0x13,
    0x0, 0x21,

    /* U+F078 "" */
    0x0, 0x0, 0xb, 0x41, 0xc2, 0xc, 0xd3, 0x0,
    0x3, 0x0,

    /* U+F079 "" */
    0x39, 0x19, 0xa5, 0x6, 0xc4, 0x0, 0x90, 0xa,
    0x0, 0x6b, 0x30, 0xaa, 0x74, 0xa0,

    /* U+F07B "" */
    0xac, 0x52, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0xff, 0xfe,

    /* U+F093 "" */
    0x0, 0x30, 0x0, 0x7f, 0x70, 0x8, 0xf8, 0x0,
    0x2f, 0x20, 0xec, 0xbc, 0xe9, 0x99, 0x87,

    /* U+F095 "" */
    0x0, 0x0, 0x22, 0x0, 0x0, 0xcf, 0x0, 0x0,
    0x8c, 0x0, 0x21, 0xd4, 0xe, 0xfe, 0x60, 0x7,
    0x72, 0x0,

    /* U+F0C4 "" */
    0x0, 0x0, 0xb, 0xa1, 0xb2, 0x9e, 0xd4, 0x6,
    0xde, 0x40, 0xba, 0x2c, 0x20, 0x0, 0x0,

    /* U+F0C5 "" */
    0x1, 0x20, 0x6, 0xcf, 0xa0, 0xfc, 0xff, 0x2f,
    0xcf, 0xf2, 0xf9, 0xba, 0x19, 0xa9, 0x0,

    /* U+F0C7 "" */
    0xca, 0xab, 0xa, 0x0, 0xe5, 0xfe, 0xcf, 0x5f,
    0xdb, 0xf4, 0x1, 0x11, 0x0,

    /* U+F0E7 "" */
    0x1, 0x20, 0x0, 0xbf, 0x10, 0xe, 0xe9, 0x0,
    0xae, 0xa0, 0x0, 0xc1, 0x0, 0x7, 0x0,

    /* U+F0EA "" */
    0x4, 0x0, 0xf, 0xdd, 0x0, 0xfa, 0xb5, 0xf,
    0xbf, 0x91, 0xeb, 0xff, 0x20, 0x6d, 0xd1,

    /* U+F0F3 "" */
    0x0, 0x20, 0x0, 0xbd, 0x30, 0x5f, 0xfb, 0x8,
    0xff, 0xe0, 0xab, 0xbb, 0x30, 0x26, 0x0,

    /* U+F11C "" */
    0xaa, 0xaa, 0xa6, 0xd9, 0x98, 0x9a, 0xe9, 0x77,
    0x9a, 0xcc, 0xaa, 0xc8,

    /* U+F124 "" */
    0x0, 0x0, 0x4, 0x0, 0x1, 0x7e, 0xd0, 0x8,
    0xff, 0xf6, 0x0, 0x67, 0xee, 0x0, 0x0, 0xd,
    0x70, 0x0, 0x0, 0x61, 0x0,

    /* U+F15B "" */
    0x78, 0x40, 0xff, 0x86, 0xff, 0xfb, 0xff, 0xfc,
    0xff, 0xfc, 0x77, 0x75,

    /* U+F1EB "" */
    0x0, 0x0, 0x0, 0x3, 0xbc, 0xcc, 0x50, 0x83,
    0x66, 0x38, 0x10, 0x96, 0x5a, 0x0, 0x0, 0x58,
    0x0, 0x0, 0x1, 0x20, 0x0,

    /* U+F240 "" */
    0x8a, 0xaa, 0xa8, 0xa, 0x99, 0x97, 0xc0, 0xac,
    0xcc, 0x9c, 0x9, 0xaa, 0xaa, 0x90,

    /* U+F241 "" */
    0x8a, 0xaa, 0xa8, 0xa, 0x99, 0x80, 0xc0, 0xac,
    0xca, 0xc, 0x9, 0xaa, 0xaa, 0x90,

    /* U+F242 "" */
    0x8a, 0xaa, 0xa8, 0xa, 0x99, 0x0, 0xc0, 0xac,
    0xc0, 0xc, 0x9, 0xaa, 0xaa, 0x90,

    /* U+F243 "" */
    0x8a, 0xaa, 0xa8, 0xa, 0x91, 0x0, 0xc0, 0xac,
    0x10, 0xc, 0x9, 0xaa, 0xaa, 0x90,

    /* U+F244 "" */
    0x8a, 0xaa, 0xa8, 0xa, 0x0, 0x0, 0xc0, 0xa0,
    0x0, 0xc, 0x9, 0xaa, 0xaa, 0x90,

    /* U+F287 "" */
    0x0, 0x3b, 0x10, 0x6, 0x36, 0x20, 0x30, 0xa6,
    0x85, 0x48, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+F293 "" */
    0x0, 0x10, 0x3, 0xfb, 0x90, 0x9a, 0x4d, 0xa,
    0xb4, 0xf0, 0x8c, 0x5d, 0x1, 0xab, 0x50,

    /* U+F2ED "" */
    0x3, 0x50, 0xa, 0xaa, 0xa3, 0xbe, 0xee, 0x1b,
    0xba, 0xb1, 0xbb, 0xab, 0x15, 0xaa, 0x90,

    /* U+F304 "" */
    0x0, 0x0, 0x21, 0x0, 0x2, 0xbd, 0x0, 0x3e,
    0xc4, 0x3, 0xef, 0x60, 0xe, 0xf6, 0x0, 0x9,
    0x50, 0x0,

    /* U+F55A "" */
    0x7, 0xcc, 0xcb, 0x17, 0xfd, 0x67, 0xf4, 0xbf,
    0xe4, 0x7f, 0x40, 0xbf, 0xfe, 0xf2,

    /* U+F7C2 "" */
    0x7, 0x84, 0xb7, 0x6a, 0xff, 0xfb, 0xff, 0xfc,
    0xff, 0xfb, 0x57, 0x74,

    /* U+F8A2 "" */
    0x0, 0x0, 0x23, 0x60, 0xc, 0xde, 0xcc, 0xc1,
    0x50, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 22, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 28, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 4, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 44, .box_w = 3, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 19, .adv_w = 71, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 53, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 39, .adv_w = 15, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 40, .adv_w = 27, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 45, .adv_w = 27, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 31, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 52, .adv_w = 47, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 57, .adv_w = 27, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 58, .adv_w = 22, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 22, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 22, .box_w = 1, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 22, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 125, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 47, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 134, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 81, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 159, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 22, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 40, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 67, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 62, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 62, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 293, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 58, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 76, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 53, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 49, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 22, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 360, .adv_w = 22, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 22, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 369, .adv_w = 38, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 372, .adv_w = 44, .box_w = 4, .box_h = 1, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 374, .adv_w = 27, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 375, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 22, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 412, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 18, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 18, .box_w = 2, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 425, .adv_w = 40, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 18, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 67, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 455, .adv_w = 44, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 461, .adv_w = 27, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 22, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 58, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 40, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 501, .adv_w = 40, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 27, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 511, .adv_w = 21, .box_w = 1, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 514, .adv_w = 27, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 519, .adv_w = 47, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 521, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 536, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 561, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 55, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 594, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 609, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 627, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 642, .adv_w = 90, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 669, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 677, .adv_w = 60, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 687, .adv_w = 90, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 705, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 727, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 742, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 757, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 772, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 784, .adv_w = 70, .box_w = 6, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 802, .adv_w = 50, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 810, .adv_w = 50, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 818, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 833, .adv_w = 70, .box_w = 5, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 838, .adv_w = 90, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 100, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 871, .adv_w = 90, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 892, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 907, .adv_w = 70, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 70, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 927, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 80, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 966, .adv_w = 80, .box_w = 6, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 984, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 999, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1014, .adv_w = 70, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1027, .adv_w = 50, .box_w = 5, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1042, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1057, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1072, .adv_w = 90, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1084, .adv_w = 80, .box_w = 7, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1105, .adv_w = 60, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1117, .adv_w = 100, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1138, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1166, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1180, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1208, .adv_w = 100, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1226, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1241, .adv_w = 70, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1256, .adv_w = 80, .box_w = 6, .box_h = 6, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 1274, .adv_w = 100, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 60, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1300, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 0}
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
const lv_font_t lv_font_arial_5 = {
#else
lv_font_t lv_font_arial_5 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 6,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_ARIAL_5*/

