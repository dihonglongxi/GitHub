/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: OneEighthOff
* Dimensions:  72 * 65
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsOneEighthOff[] = {
     0xF2F0EF,0xF8F7F8,0xE8E8E9,0x040404
    ,0x171717,0x272726,0xDBDADB,0x494947
    ,0x595854,0x373736,0xC8C8C9,0xDEDDE0
    ,0x6B6A65,0x64625B,0xB7B6B8,0x11110E
    ,0xDAFFFF,0x403E39,0x878686,0xA9A9A9
    ,0xE0DFE1,0xEFEEF0,0x383529,0x474339
    ,0xF0EEF0,0x979797,0x55534A,0x777675
    ,0xC0BFC0,0x191C21,0x2C3335,0x28251A
    ,0x1D2123,0x0B03CF,0x363B44,0x3B4348
    ,0x787569,0x272C32,0x454C54,0x332A1B
    ,0x413929,0xBEBEC0,0x342E22,0x726C64
    ,0x0D0E10,0x0E1012,0x221E19,0x1D221B
    ,0x5B7303,0x280DE7,0xD3D2CC,0xCCCDD0
    ,0xE1DCDB,0x504D46,0x4A5456,0x615B4C
    ,0x615D56,0x85827C,0x7B7C82,0x7373AE
    ,0x2A0DDA,0x4429D6,0x969589,0xABAAB4
    ,0x576500,0x3C4752,0x5436E8,0xA4A297
    ,0xC7C3BD,0x0E110B,0x524838,0x757958
    ,0x555B62,0x2C26B6,0x3526CE,0x05A6E9
    ,0x7AB3C9,0x39C7F9,0x15E6FC,0x928D82
    ,0x9A9CA9,0xACB1AE,0xD0CED1,0x110B09
    ,0x3A4504,0x59661A,0x637507,0x5B523D
    ,0x1A2A41,0x403F40,0x385656,0x5B6264
    ,0x979878,0x0402BB,0x637B88,0x524CB6
    ,0x1801E6,0x6650CF,0x807E88,0x039BE8
    ,0x19B8E8,0x00A6F5,0x28B3EB,0x03C7F8
    ,0x26C0E3,0x03E6FF,0x35EBFB,0x44CDFB
    ,0x78EAFA,0x8B8C92,0xB4B3A6,0xA6BBC5
    ,0xA7C3C9,0xB9C5C7,0xA9C9D2,0xD4CBC8
    ,0x3E4039,0x4A6B00,0x566227,0x6A7428
    ,0x0D0F7A,0x284453,0x165C7A,0x5F655E
    ,0x626D48,0x4A5565,0x5B7377,0x626B72
    ,0x768422,0x7A8479,0x2E2D94,0x1C769C
    ,0x0777AD,0x67649B,0x5643D4,0x55829B
    ,0x6D868D,0x0096DA,0x1698D7,0x17BCFD
    ,0x26ACE2,0x5ABACD,0x19D5ED,0x1BDBFB
    ,0x23C6FB,0x38F2FA,0x56C7DC,0x65C7D8
    ,0x68F5F8,0x908F90,0x86989A,0x9DA098
    ,0xB2A394,0x8381B0,0xB6ADA9,0xC2BBB8
    ,0x82BDC9,0x96C3C8,0x88DDF2,0x110F14
    ,0x201A06,0x333B00,0x031721,0x241F23
    ,0x162536,0x3C4C10,0x444800,0x4D5C00
    ,0x57711A,0x636C02,0x67791C,0x4E432D
    ,0x5C6D38,0x2F3840,0x223854,0x2B396A
    ,0x24454D,0x2A5D6E,0x38686E,0x6D7E45
    ,0x405871,0x605F60,0x6E706C,0x688F00
    ,0x74810F,0x6F9400,0x708213,0x7F8A36
    ,0x7E806E,0x8E981D,0x9A9C2C,0x859232
    ,0x909753,0x95A341,0x898C6B,0x9E9C6E
    ,0x8F9079,0x2018BC,0x365785,0x256988
    ,0x3F6390,0x007CBF,0x5E7889,0x7A6CC5
    ,0x6E5CE1,0x8277BF,0x1982A5,0x3F91B8
    ,0x5D858A,0x48849E,0x72A4B7,0x0A8AC6
    ,0x178AC4,0x008ED7,0x2B9ED1,0x08A4CF
    ,0x0BA3DA,0x1FBBDA,0x27AFDD,0x35ABD7
    ,0x3AB6DC,0x0099F0,0x14A5E6,0x0ABDE7
    ,0x14AEF2,0x30ABE0,0x4993C4,0x40A2CE
    ,0x5DA7C0,0x55BFD8,0x6FA6C5,0x0FDFFF
    ,0x24E2FF,0x26F1FF,0x52D2ED,0x46D4F6
    ,0x5ADDFF,0x64D5F9,0x56F3F6,0xA39F8D
    ,0xA2A18C,0x9F9FB4,0xA29FB9,0x9BA2A7
    ,0x98AAB7,0x91B4BE,0xA8B7B9,0x8FC1CB
    ,0xB2D1DF,0xA3CAE6,0x8AEEF9,0xCFD0D4
    ,0xE1E0DB,0xC0D8E9,0xDAFFFF,0xF2F0EF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalOneEighthOff = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsOneEighthOff[0]
};

static GUI_CONST_STORAGE unsigned char acOneEighthOff[] = {
  0x04, 0x04, 0x1D, 0x1D, 0x04, 0x2D, 0x04, 0x2F, 0x05, 0x05, 0x20, 0x20, 0xA3, 0x20, 0x20, 0x1D, 0x20, 0x20, 0x25, 0x25, 0x25, 0x1E, 0x1E, 0x20, 0x20, 0x20, 0x25, 0x1E, 0x1E, 0x59, 0x59, 0x09, 0x1E, 0x25, 0x20, 0x25, 0x22, 0x22, 0xAD, 0x1E, 0x22, 0x22, 
        0x1E, 0xAD, 0x26, 0x41, 0xAD, 0x22, 0x23, 0x23, 0x23, 0xAD, 0x41, 0x26, 0x41, 0x36, 0x23, 0x1E, 0x09, 0x23, 0x26, 0x36, 0x22, 0x25, 0x1E, 0x22, 0x41, 0x36, 0x7D, 0x26, 0x09, 0x05,
  0x04, 0x04, 0x20, 0x20, 0x1D, 0x2D, 0x9F, 0x04, 0x20, 0x20, 0x20, 0x20, 0xA3, 0x1D, 0x1D, 0x20, 0x1D, 0x1D, 0x25, 0x1E, 0x25, 0x25, 0x05, 0x25, 0x25, 0x25, 0x05, 0x25, 0x25, 0x09, 0x59, 0x09, 0x1E, 0x25, 0x20, 0x25, 0xAD, 0xAD, 0x1E, 0x1E, 0x22, 0x22, 
        0xAD, 0x23, 0x26, 0x23, 0xAD, 0xAD, 0x22, 0x22, 0x41, 0x41, 0x36, 0x26, 0x22, 0x26, 0x23, 0x22, 0x23, 0xAD, 0x1E, 0x23, 0x23, 0x1E, 0x1E, 0x41, 0x48, 0x36, 0x48, 0x22, 0x20, 0x2F,
  0x04, 0x20, 0x05, 0x05, 0x20, 0x9F, 0x2C, 0x04, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0x05, 0x05, 0xA3, 0xA3, 0x05, 0x05, 0x05, 0xA3, 0xA3, 0xA3, 0x05, 0x05, 0x05, 0x05, 0x05, 0xA3, 0xA3, 0xA3, 0x05, 0xA3, 0xA3, 0x05, 0x05, 
        0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0xA3, 0x05, 0x05, 0x05, 0xA3, 0x20, 0x1E, 0x59, 0x09, 0x2F, 0x04, 0x1D,
  0x20, 0x05, 0x05, 0x20, 0x2C, 0x2F, 0x35, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 
        0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x38, 0x09, 0x04, 0x1D, 0x1D, 0x1D, 0x04,
  0x05, 0x05, 0x05, 0x2C, 0x25, 0x0D, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
        0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x38, 0x38, 0x08, 0x08, 0x38, 0x0D, 0x0D, 0x0C, 0x1A, 0x04, 0x1D, 0xA3, 0x04,
  0x20, 0x20, 0x2C, 0xA3, 0x0D, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 
        0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x08, 0x08, 0x1A, 0x35, 0x35, 0x17, 0x11, 0x16, 0x11, 0x1A, 0x38, 0x38, 0x0D, 0x35, 0x0F, 0x04, 0x04,
  0x04, 0x2D, 0x03, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
        0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1A, 0x1A, 0x1A, 0x35, 0x07, 0x59, 0x11, 0x07, 0x35, 0x16, 0x2A, 0x27, 0x1F, 0x1F, 0x07, 0x1A, 0x08, 0x08, 0x08, 0x05, 0x2C, 0x04,
  0x2C, 0x03, 0x0F, 0x35, 0x1A, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 
        0x35, 0x35, 0x35, 0x35, 0x35, 0x35, 0x07, 0x07, 0x59, 0x11, 0x11, 0x11, 0x35, 0x0D, 0xB6, 0x1B, 0x2B, 0x2A, 0x2E, 0x05, 0x2F, 0x03, 0x11, 0x07, 0x35, 0x35, 0x1A, 0x09, 0x53, 0x04,
  0x2C, 0x03, 0x04, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x59, 0x11, 0x09, 0x16, 0x28, 0x0D, 0x81, 0x2B, 0x37, 0x1A, 0x16, 0x04, 0x45, 0x25, 0x03, 0x20, 0x59, 0x03, 0x16, 0x59, 0x07, 0x07, 0x07, 0x11, 0x03, 0x9F,
  0x03, 0x03, 0x04, 0x59, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
        0x11, 0x11, 0x11, 0x11, 0x09, 0x17, 0xAB, 0xAB, 0x46, 0x1A, 0x16, 0x04, 0x03, 0x03, 0x03, 0x03, 0x2C, 0x2B, 0x2E, 0x35, 0x98, 0x2A, 0x05, 0x09, 0x11, 0x11, 0x59, 0x09, 0x03, 0x04,
  0x2C, 0x2C, 0x9F, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
        0x09, 0x09, 0x09, 0x09, 0x16, 0x28, 0x16, 0x1E, 0x2D, 0xAE, 0x2C, 0x03, 0x0F, 0x2E, 0x27, 0x03, 0x09, 0x43, 0x17, 0x17, 0x46, 0x27, 0x1F, 0x1E, 0x09, 0x09, 0x09, 0x25, 0x2C, 0x04,
  0x04, 0x04, 0x0F, 0x1E, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 
        0x25, 0x25, 0x25, 0x05, 0x05, 0x53, 0x58, 0xC8, 0x1D, 0xF9, 0xB4, 0x05, 0x28, 0x16, 0x17, 0x17, 0x2A, 0x27, 0x27, 0x27, 0x27, 0x2A, 0x2E, 0x05, 0x25, 0x25, 0x1E, 0x05, 0x2C, 0x1D,
  0x2C, 0x2D, 0x2C, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
        0x05, 0x05, 0x05, 0x05, 0x2F, 0x2C, 0x50, 0xF8, 0x7D, 0xF6, 0x7F, 0x08, 0x2B, 0x39, 0x12, 0x2B, 0x27, 0x27, 0x2E, 0x0F, 0x09, 0x20, 0x03, 0x2F, 0x05, 0x05, 0x05, 0x2F, 0x53, 0x1D,
  0x9F, 0x04, 0x2C, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 0x2F, 
        0x2F, 0x2F, 0x2F, 0x2E, 0x04, 0x2A, 0xB6, 0x7B, 0x46, 0x2A, 0x46, 0x24, 0x35, 0x74, 0x2F, 0x45, 0x03, 0x1E, 0xB0, 0x03, 0x17, 0x1A, 0x0F, 0x04, 0x2F, 0x2F, 0x2F, 0x04, 0x53, 0x04,
  0x1D, 0x04, 0x53, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x0F, 0x1F, 0x57, 0x46, 0x28, 0x28, 0x09, 0x05, 0x45, 0x03, 0x03, 0x03, 0x03, 0xB1, 0x8C, 0x4B, 0xC9, 0x88, 0x98, 0x16, 0x0F, 0x04, 0x04, 0x04, 0x0F, 0x03, 0x04,
  0x1D, 0x04, 0x03, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 
        0x0F, 0x0F, 0x0F, 0x2C, 0x1F, 0x27, 0x05, 0x79, 0x03, 0xC6, 0x58, 0x0F, 0x27, 0x16, 0x28, 0x5A, 0x6B, 0x66, 0x89, 0xDD, 0x8A, 0x1A, 0x04, 0x2C, 0x0F, 0x0F, 0x0F, 0x2C, 0x03, 0x04,
  0x05, 0xA3, 0x03, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 
        0x53, 0x53, 0x53, 0x03, 0x53, 0x2C, 0xD1, 0x66, 0x7A, 0xFD, 0xCA, 0x04, 0x46, 0x16, 0x27, 0x5A, 0x4D, 0xE1, 0x4B, 0x65, 0x84, 0x53, 0x03, 0x53, 0x53, 0x53, 0x53, 0x03, 0x2C, 0x1D,
  0x25, 0x05, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x7E, 0x6C, 0x4D, 0x66, 0x10, 0x96, 0x03, 0x17, 0x12, 0x2B, 0x1F, 0x7A, 0xD4, 0xD8, 0x84, 0xA2, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x2C, 0x20,
  0x05, 0xA3, 0x53, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x04, 0x1D, 0x93, 0xEC, 0x90, 0x83, 0x48, 0x1E, 0x04, 0x38, 0x51, 0x39, 0x1F, 0x53, 0x41, 0x79, 0x04, 0x0F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x9F, 0x03, 0x05,
  0x05, 0x1D, 0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x15, 0x33, 0xEA, 0x90, 0x8A, 0x41, 0x39, 0x29, 0x19, 0x46, 0x1A, 0x17, 0x16, 0x2B, 0xB5, 0x11, 0x43, 0x32, 0x02, 0x00, 0x01, 0x01, 0x01, 0x01, 0xFB, 0x2C, 0x09,
  0xA3, 0x04, 0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x02, 0x72, 0xD2, 0x96, 0x48, 0x22, 0xF3, 0x97, 0x28, 0x19, 0x4F, 0x2A, 0x0C, 0x7E, 0xCE, 0xE3, 0xE6, 0x33, 0x00, 0x01, 0x01, 0x01, 0x01, 0x06, 0x04, 0x07,
  0x05, 0x2D, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x00, 0xFC, 0x44, 0x0E, 0x13, 0x7F, 0x08, 0x0C, 0x17, 0x12, 0x1B, 0x28, 0x23, 0xDC, 0x8B, 0x65, 0xDD, 0xE2, 0x06, 0x01, 0x01, 0x01, 0x01, 0x06, 0x2D, 0x48,
  0x0F, 0x03, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x15, 0x0A, 0xF7, 0xE5, 0xF5, 0x44, 0x13, 0x1A, 0x1F, 0x37, 0x0D, 0x16, 0xB2, 0x6B, 0xE0, 0x63, 0x89, 0x63, 0x71, 0x00, 0x01, 0x01, 0x01, 0x06, 0x20, 0x7F,
  0x04, 0x03, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x00, 0x32, 0x72, 0x9E, 0x6B, 0xDB, 0x44, 0x33, 0x1B, 0x16, 0x24, 0x1A, 0x28, 0x5A, 0x8C, 0xDE, 0x4B, 0x65, 0x64, 0x0A, 0x00, 0x01, 0x01, 0x01, 0x06, 0x20, 0x07,
  0x25, 0x1D, 0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x97, 0x59, 0x59, 0x0A, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x29, 0x59, 0x19, 0x01, 0x97, 0x08, 0x09, 0x59, 0xB6, 0x0A, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x02, 0x71, 0x9E, 0xED, 0x4D, 0xD6, 0x9A, 0x0A, 0x19, 0x16, 0x35, 0x37, 0x27, 0x17, 0x87, 0xD3, 0xD5, 0x4B, 0x4C, 0xFC, 0x01, 0x01, 0x01, 0x01, 0x06, 0x2D, 0x59,
  0x05, 0x20, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1B, 0x03, 0x03, 0x03, 0x51, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x35, 0x03, 0x0A, 0x1B, 0x03, 0x03, 0x04, 0x2C, 0x03, 0x0F, 0x51, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x02, 0x72, 0xEB, 0x4D, 0x8B, 0xC7, 0x1B, 0x19, 0x12, 0x11, 0x37, 0x2B, 0x27, 0x17, 0x4F, 0x5E, 0x87, 0xF4, 0x06, 0x00, 0x01, 0x01, 0x01, 0x01, 0x06, 0x04, 0x07,
  0x2F, 0x04, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x14, 0x1A, 0x03, 0x03, 0x03, 0x03, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1C, 0x03, 0xB5, 0x06, 0x03, 0x03, 0x08, 0x02, 0x52, 0x20, 0x03, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x15, 0x33, 0xE5, 0xDA, 0xCF, 0x26, 0x1D, 0x26, 0x5E, 0x17, 0x3E, 0x39, 0x2A, 0x1F, 0x81, 0x44, 0x73, 0x34, 0x02, 0x00, 0x01, 0x01, 0x01, 0x01, 0xFB, 0x2F, 0x1E,
  0x2E, 0x53, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x13, 0x03, 0x03, 0x25, 0x03, 0x03, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x03, 0x06, 0x0E, 0x03, 0x03, 0x51, 0x01, 0x01, 0x07, 0x03, 0x1E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x02, 0x52, 0x0E, 0x9B, 0x13, 0xB6, 0x74, 0x1A, 0x16, 0x0D, 0x08, 0x17, 0x2A, 0x12, 0x9B, 0x6F, 0x9C, 0x70, 0x34, 0x15, 0x01, 0x01, 0x01, 0xFB, 0x1D, 0x59,
  0x04, 0x03, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x95, 0x51, 0x03, 0x03, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1C, 0x03, 0x08, 0x01, 0x06, 0x2C, 0x03, 0x09, 0x52, 0x1C, 0x04, 0x03, 0x1B, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x00, 0x02, 0x06, 0x32, 0x06, 0x33, 0x51, 0xB6, 0x2E, 0x16, 0x2B, 0x11, 0x11, 0x12, 0x8D, 0x8E, 0x4E, 0x8E, 0x4C, 0x06, 0x00, 0x01, 0x01, 0xFB, 0x1D, 0x59,
  0x05, 0x1D, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x51, 0x03, 0x03, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1A, 0x03, 0x33, 0x01, 0x01, 0x51, 0x04, 0x03, 0x2C, 0x0F, 0x03, 0x08, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x02, 0x0A, 0x9D, 0x9C, 0x0A, 0x14, 0x06, 0x97, 0x1F, 0x0D, 0x73, 0x37, 0x27, 0x88, 0x8F, 0x69, 0x91, 0x91, 0x67, 0x6F, 0x02, 0x01, 0x01, 0xFB, 0x2C, 0x2E,
  0x2F, 0x04, 0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x51, 0x03, 0x03, 0x0E, 0x01, 0x01, 0x01, 0x01, 0x33, 0x03, 0x1A, 0x01, 0x01, 0x01, 0x06, 0x25, 0x03, 0x03, 0x03, 0x03, 0x07, 0x06, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x02, 0x0A, 0x72, 0x6C, 0xE8, 0x8D, 0x73, 0x14, 0x51, 0x16, 0x4F, 0x3E, 0x13, 0x27, 0xD0, 0x8F, 0x6A, 0xEE, 0x4E, 0x67, 0x4C, 0x02, 0x01, 0x01, 0xFB, 0x03, 0x0F,
  0x2D, 0x2C, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x51, 0x03, 0x03, 0x51, 0x01, 0x01, 0x01, 0x01, 0xB5, 0x03, 0x0E, 0x01, 0x01, 0x14, 0x05, 0x03, 0x1D, 0x6D, 0x08, 0x03, 0x03, 0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x00, 0x06, 0x9D, 0xFA, 0x6C, 0x6A, 0x68, 0x9A, 0x33, 0xF3, 0x38, 0x6E, 0xBC, 0x9B, 0x37, 0x0C, 0x68, 0x4E, 0x6A, 0x69, 0x67, 0x6F, 0x02, 0x01, 0x01, 0xFB, 0x03, 0x04,
  0x05, 0x2D, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x51, 0x03, 0x03, 0x51, 0x01, 0x00, 0x01, 0x33, 0x03, 0x07, 0x01, 0x01, 0x01, 0x19, 0x03, 0x03, 0x13, 0x01, 0x01, 0x08, 0x03, 0x53, 0x0A, 0x01, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x01, 0x00, 0x52, 0x92, 0xE9, 0x94, 0x94, 0xD9, 0x3A, 0x13, 0x97, 0x24, 0x37, 0xA0, 0x28, 0x28, 0x37, 0x5E, 0xD7, 0xDF, 0x64, 0x4C, 0xFB, 0x15, 0x00, 0x01, 0x52, 0x1D, 0x41,
  0x1D, 0x2C, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x51, 0x03, 0x03, 0x51, 0x01, 0x00, 0x01, 0xB5, 0x03, 0x0E, 0x01, 0x00, 0x01, 0x95, 0x03, 0x03, 0x1C, 0x01, 0x01, 0x95, 0x03, 0x03, 0x1C, 0x01, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x18, 0x32, 0x93, 0x69, 0x4E, 0xE7, 0x83, 0x58, 0x74, 0x39, 0x35, 0x38, 0x1A, 0x0D, 0x2A, 0x09, 0x0C, 0x12, 0xF3, 0x1C, 0x06, 0x02, 0x00, 0x00, 0x01, 0xFB, 0x45, 0x05,
  0x2C, 0x03, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x13, 0x03, 0x03, 0x51, 0x01, 0x01, 0x33, 0x53, 0x07, 0x01, 0x00, 0x00, 0x01, 0x33, 0x03, 0x03, 0x07, 0x0A, 0x0E, 0x05, 0x03, 0x05, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x14, 0x70, 0x68, 0x64, 0xE4, 0x6D, 0x7F, 0x36, 0x7B, 0x16, 0x97, 0x51, 0x1C, 0x11, 0x1A, 0x0E, 0x06, 0x06, 0x0B, 0x02, 0x02, 0x18, 0x00, 0x01, 0xFB, 0x03, 0x9F,
  0x2C, 0x03, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x13, 0x03, 0x03, 0x13, 0x01, 0x01, 0xB6, 0x03, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x01, 0x95, 0x9F, 0x03, 0x03, 0x03, 0x03, 0x2F, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x15, 0x14, 0x0A, 0x29, 0x73, 0x52, 0x0A, 0x1C, 0x13, 0x17, 0x0D, 0xF3, 0x19, 0x17, 0x0C, 0x33, 0xFB, 0x0E, 0x43, 0x13, 0xFB, 0x02, 0x15, 0x01, 0xFB, 0x03, 0x22,
  0x20, 0x03, 0x07, 0x01, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x01, 0x0A, 0xB6, 0xB6, 0x33, 0x01, 0x52, 0x03, 0x59, 0x01, 0x00, 0x18, 0x18, 0x18, 0x00, 0x01, 0x33, 0x95, 0x0C, 0xB6, 0x95, 0x06, 0x01, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
        0x18, 0x18, 0x18, 0x18, 0x15, 0x02, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x0A, 0x1A, 0x2A, 0x46, 0x17, 0x28, 0xB5, 0x0E, 0x5C, 0xAA, 0xA7, 0x54, 0xBC, 0x52, 0x02, 0x01, 0x52, 0x04, 0x1E,
  0x0F, 0x2C, 0x07, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x00, 0x01, 0x01, 0x00, 0x01, 0x97, 0x59, 0x0E, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 
        0x15, 0x15, 0x15, 0x15, 0x14, 0x52, 0x6E, 0x6E, 0x33, 0x06, 0x14, 0x0A, 0x08, 0x28, 0xEF, 0x0C, 0x27, 0x1A, 0xEF, 0x80, 0xB9, 0xA7, 0xA6, 0x54, 0x3E, 0x0B, 0x01, 0x52, 0x04, 0xA3,
  0x2C, 0x04, 0x07, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x02, 0x15, 0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 
        0x15, 0x15, 0x15, 0x02, 0x0A, 0x5C, 0xBB, 0x80, 0xC2, 0x0A, 0x06, 0x0A, 0x38, 0x17, 0x43, 0x0D, 0x28, 0x17, 0xC3, 0xBF, 0x56, 0x40, 0x40, 0xA1, 0x7C, 0x52, 0x18, 0x33, 0x04, 0x05,
  0x1D, 0x1D, 0x07, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x18, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 
        0x15, 0x15, 0x15, 0x06, 0xF0, 0xC0, 0xC1, 0xBA, 0x56, 0x97, 0x33, 0x1C, 0x0C, 0x16, 0x24, 0x0D, 0x28, 0x11, 0x47, 0xB8, 0xA9, 0x40, 0x40, 0x54, 0x76, 0x0A, 0x18, 0x33, 0x04, 0x05,
  0x20, 0x04, 0x07, 0x01, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 
        0x15, 0x15, 0x02, 0x33, 0xC4, 0xBE, 0xBD, 0x55, 0x30, 0x7C, 0x19, 0x13, 0x0D, 0x28, 0x0D, 0x0C, 0x28, 0x28, 0x0C, 0x55, 0x30, 0x30, 0xB7, 0x75, 0x47, 0xFB, 0x18, 0x33, 0x0F, 0x04,
  0x05, 0x05, 0x07, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x15, 0x15, 0x02, 0x02, 0x15, 0x15, 0x15, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x15, 0x02, 0x33, 0xBC, 0x77, 0xAA, 0x56, 0x30, 0x2F, 0x25, 0x08, 0x17, 0x35, 0x51, 0x43, 0x1A, 0x16, 0x07, 0x1A, 0xA5, 0x75, 0x30, 0xB3, 0x0E, 0x14, 0x00, 0x33, 0x03, 0x04,
  0x20, 0x20, 0x07, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x00, 0x00, 0x15, 0x02, 0x15, 0x00, 0x00, 0x15, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x06, 0x4F, 0x76, 0x56, 0x30, 0xA8, 0x47, 0x5B, 0x36, 0x2F, 0x17, 0x13, 0x97, 0x2B, 0x16, 0x1B, 0xF3, 0x1B, 0x7B, 0x81, 0x51, 0x06, 0x02, 0x00, 0x33, 0x03, 0x53,
  0x2F, 0x04, 0x07, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x15, 0x0E, 0x1B, 0x1B, 0xFB, 0x01, 0x0E, 0x1B, 0x1B, 0x06, 0x15, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x14, 0x1C, 0x47, 0x55, 0xAC, 0x81, 0x5C, 0x19, 0x12, 0x59, 0x2A, 0x1A, 0x35, 0x0D, 0x17, 0x39, 0x33, 0x52, 0x33, 0xFB, 0x0B, 0x02, 0x02, 0x18, 0x33, 0x03, 0x2C,
  0x04, 0x1D, 0x07, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x3A, 0x03, 0x03, 0x0E, 0x01, 0x3A, 0x03, 0x03, 0x0A, 0x18, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x0B, 0x33, 0x0E, 0x1C, 0x33, 0x33, 0x52, 0x29, 0x7B, 0x27, 0x17, 0x0C, 0x46, 0x1A, 0x12, 0x06, 0x02, 0x14, 0x14, 0x02, 0x02, 0x02, 0x18, 0x0A, 0x03, 0x45,
  0x04, 0x53, 0x07, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x18, 0x18, 0x02, 0x00, 0x15, 0x15, 0x00, 0x02, 0x15, 0x18, 0x02, 0x18, 0x15, 0x02, 0x15, 0x1C, 0x6D, 0x95, 0x06, 0x01, 0x12, 0x03, 0x03, 0x0A, 0x15, 0x02, 0x02, 0x01, 0x15, 0x02, 0x18, 0x00, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x14, 0x14, 0x14, 0x14, 0x02, 0x02, 0xFB, 0x1B, 0x2A, 0x1A, 0x4F, 0x57, 0x37, 0x12, 0x52, 0x06, 0x32, 0x32, 0xFC, 0x02, 0x02, 0x15, 0x0A, 0x03, 0x03,
  0x20, 0x1D, 0x07, 0x01, 0x02, 0x02, 0x02, 0x15, 0x52, 0x1B, 0x1B, 0x06, 0x13, 0xB5, 0x08, 0x95, 0x18, 0x0A, 0x1B, 0x1A, 0x1B, 0x06, 0x02, 0x15, 0x29, 0x12, 0x12, 0xFB, 0x01, 0x62, 0x03, 0x03, 0x0A, 0x15, 0x15, 0x14, 0x19, 0xB5, 0x07, 0xB6, 0x0E, 0x15, 
        0x02, 0x02, 0x02, 0x02, 0x06, 0x0A, 0x3F, 0x0E, 0x32, 0x14, 0x02, 0xFB, 0x12, 0x16, 0x35, 0x3E, 0x37, 0x2B, 0x1B, 0xF3, 0xCD, 0x5F, 0x3B, 0x3F, 0x06, 0x14, 0x15, 0x0A, 0x53, 0xA3,
  0x1E, 0x1D, 0x07, 0x01, 0x02, 0x02, 0x02, 0x18, 0x0E, 0x03, 0x03, 0x07, 0x03, 0x03, 0x03, 0x03, 0xB6, 0x2F, 0x03, 0x03, 0x03, 0x07, 0x02, 0x00, 0x3A, 0x03, 0x03, 0x0E, 0x01, 0x39, 0x03, 0x03, 0x0A, 0x18, 0x06, 0x07, 0x03, 0x03, 0x1D, 0x03, 0x03, 0x12, 
        0x18, 0x02, 0x02, 0x06, 0x0E, 0xCB, 0x86, 0x4A, 0x3B, 0x44, 0xFB, 0x0A, 0x1B, 0x11, 0x17, 0x37, 0x37, 0x24, 0xB5, 0x5F, 0x4A, 0x60, 0x21, 0xC5, 0xF1, 0x06, 0x02, 0x0A, 0x03, 0x59,
  0x05, 0x03, 0x59, 0x01, 0x02, 0x02, 0x02, 0x15, 0x0E, 0x03, 0x03, 0x04, 0x95, 0x12, 0x2D, 0x03, 0x03, 0x08, 0x97, 0x09, 0x03, 0x03, 0x29, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x62, 0x03, 0x03, 0x0A, 0x01, 0xB6, 0x03, 0x04, 0x0A, 0x18, 0x1B, 0x03, 0x9F, 
        0x33, 0x15, 0x14, 0x0A, 0xCD, 0x42, 0x42, 0x3D, 0xC5, 0x62, 0x0E, 0x51, 0xB5, 0x16, 0x1A, 0x4F, 0xBC, 0x24, 0x85, 0xCC, 0x3D, 0x3C, 0x21, 0x21, 0x49, 0x0E, 0x14, 0x0A, 0x03, 0x0F,
  0x1D, 0x04, 0x07, 0x00, 0x02, 0x02, 0x02, 0x15, 0x0E, 0x03, 0x03, 0x62, 0x01, 0x00, 0x59, 0x03, 0x1E, 0x14, 0x01, 0x95, 0x03, 0x03, 0x13, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x39, 0x03, 0x03, 0x33, 0x0B, 0x05, 0x03, 0xB6, 0x01, 0x01, 0x06, 0x2C, 0x03, 
        0x19, 0x00, 0x0B, 0x0E, 0x61, 0x42, 0x42, 0x3D, 0x31, 0x82, 0x0D, 0x3A, 0x0D, 0x2A, 0x97, 0x24, 0x24, 0x2B, 0x61, 0x61, 0x3D, 0x60, 0x21, 0x21, 0x5D, 0x3B, 0xFC, 0x0A, 0x03, 0x2C,
  0x0F, 0x04, 0x07, 0x00, 0x14, 0x14, 0x14, 0x15, 0x0E, 0x03, 0x03, 0x12, 0x15, 0x02, 0x59, 0x03, 0x11, 0x0B, 0x00, 0x95, 0x03, 0x03, 0x13, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x39, 0x03, 0x03, 0x33, 0x52, 0x03, 0x03, 0x1D, 0x1E, 0x25, 0x05, 0x03, 0x03, 
        0x1B, 0x15, 0x06, 0xF2, 0x86, 0x31, 0x31, 0x4A, 0x31, 0x78, 0x0F, 0x07, 0x07, 0x05, 0xF3, 0x0D, 0x2B, 0x0D, 0x4A, 0x3D, 0x3C, 0x60, 0x5D, 0x21, 0x5D, 0x85, 0x06, 0x0A, 0x04, 0x05,
  0x04, 0x04, 0x07, 0x18, 0x14, 0x14, 0x14, 0x15, 0x0E, 0x03, 0x03, 0x12, 0x15, 0x02, 0x59, 0x03, 0x09, 0x0B, 0x00, 0x95, 0x03, 0x03, 0x13, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x3A, 0x03, 0x03, 0x33, 0x33, 0x03, 0x03, 0x1E, 0x08, 0x1A, 0x08, 0xB5, 0xB5, 
        0x13, 0x02, 0x06, 0xF2, 0x3D, 0x60, 0x3C, 0x3D, 0x60, 0x78, 0x36, 0x41, 0x25, 0x2E, 0x38, 0x13, 0x39, 0x57, 0x82, 0x60, 0x3C, 0x21, 0x5D, 0x5D, 0x5D, 0x99, 0x34, 0x0A, 0x2C, 0x04,
  0x0F, 0x04, 0x07, 0x18, 0x14, 0x14, 0x14, 0x15, 0x0E, 0x03, 0x03, 0x12, 0x15, 0x02, 0x59, 0x03, 0x09, 0x06, 0x18, 0x95, 0x03, 0x03, 0x13, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x3A, 0x03, 0x03, 0x33, 0xFB, 0x04, 0x03, 0xB6, 0x01, 0x15, 0x15, 0x15, 0x15, 
        0x02, 0x14, 0x0B, 0x0E, 0x3D, 0x31, 0x31, 0x31, 0x5D, 0x3A, 0x13, 0x6D, 0x23, 0x2E, 0x05, 0x17, 0x11, 0x57, 0x22, 0x21, 0x21, 0x21, 0x21, 0x5D, 0x49, 0x0E, 0x14, 0x0A, 0x03, 0x0F,
  0x53, 0x03, 0x59, 0x18, 0x14, 0x14, 0x14, 0x15, 0x0E, 0x03, 0x03, 0x12, 0x15, 0x02, 0x59, 0x03, 0x09, 0x06, 0x18, 0x95, 0x03, 0x03, 0x13, 0x01, 0x12, 0x03, 0x03, 0x0E, 0x01, 0x3A, 0x03, 0x03, 0x0A, 0x02, 0x36, 0x03, 0x04, 0x51, 0x0B, 0x06, 0x1C, 0x29, 
        0x02, 0x14, 0x14, 0x32, 0x99, 0x3C, 0x60, 0x21, 0x85, 0x44, 0x52, 0x29, 0x48, 0x04, 0x2E, 0x51, 0xB6, 0x11, 0x28, 0xAF, 0x49, 0xC5, 0xC5, 0x5F, 0xF1, 0x32, 0x02, 0x0A, 0x03, 0x1D,
  0x53, 0x03, 0x07, 0x15, 0x14, 0x14, 0x14, 0x02, 0x51, 0x03, 0x03, 0x3A, 0x15, 0x02, 0x09, 0x03, 0x1E, 0x06, 0x18, 0x12, 0x03, 0x03, 0x13, 0x01, 0x3A, 0x03, 0x03, 0x51, 0x01, 0x3A, 0x03, 0x03, 0x0A, 0x15, 0x1C, 0x05, 0x03, 0x03, 0x05, 0xA3, 0x03, 0x09, 
        0x02, 0x14, 0x14, 0x06, 0x73, 0x3F, 0x99, 0x50, 0x0A, 0x06, 0x0B, 0x0A, 0x5B, 0x45, 0x16, 0xEF, 0x39, 0x2A, 0x2A, 0x36, 0x19, 0x3F, 0x0E, 0x44, 0x32, 0x0B, 0x02, 0x1C, 0x03, 0x9F,
  0x04, 0x1D, 0x07, 0x15, 0x14, 0x14, 0x14, 0x02, 0x29, 0x09, 0x1E, 0x19, 0x02, 0x14, 0xB5, 0x1E, 0xB5, 0x06, 0x15, 0x97, 0x1E, 0x09, 0x0E, 0x15, 0x19, 0x1E, 0x09, 0x29, 0x15, 0x19, 0x1E, 0x1E, 0x0A, 0x02, 0x02, 0x0A, 0x0C, 0x09, 0x05, 0x09, 0xB5, 0x51, 
        0x14, 0x14, 0x14, 0x14, 0x06, 0x06, 0x32, 0x06, 0x06, 0x14, 0x0B, 0x0A, 0x48, 0x0F, 0x08, 0x4F, 0x3E, 0x11, 0x04, 0x48, 0x29, 0x06, 0x06, 0x06, 0x14, 0x14, 0x02, 0x1C, 0x03, 0x45,
  0x04, 0x20, 0x07, 0x15, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x06, 0x06, 0x0B, 0x14, 0x14, 0x0B, 0x06, 0x0B, 0x14, 0x14, 0x0B, 0x06, 0x06, 0x0B, 0x14, 0x0B, 0x06, 0x06, 0x0B, 0x14, 0x0B, 0x06, 0x06, 0x14, 0x14, 0x14, 0x02, 0x15, 0x14, 0x06, 0x14, 0x15, 0x02, 
        0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x0B, 0x14, 0x14, 0x0B, 0x0A, 0xB6, 0x2F, 0x16, 0x2E, 0x05, 0x16, 0x04, 0x36, 0x1C, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x02, 0x1C, 0x2C, 0x25,
  0x1D, 0x03, 0x09, 0x02, 0x14, 0x0B, 0x0B, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x14, 0x14, 0x14, 0x14, 0x0B, 0x0B, 0x0B, 0x0B, 0x14, 0x14, 0x14, 0x0B, 0x0B, 
        0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x14, 0x14, 0x0B, 0x0A, 0xB6, 0x2F, 0x04, 0x04, 0x0F, 0x04, 0x0F, 0x36, 0x1C, 0x0B, 0x14, 0x0B, 0x0B, 0x0B, 0x02, 0x0E, 0x03, 0x9F,
  0x9F, 0x2C, 0x05, 0x52, 0x02, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
        0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x14, 0x0B, 0x0A, 0x0C, 0x2F, 0x2F, 0x0F, 0x04, 0x04, 0x45, 0x26, 0x29, 0x06, 0x14, 0x0B, 0x0B, 0x0B, 0x02, 0x95, 0x03, 0x53,
  0x1D, 0x25, 0x04, 0x95, 0x15, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
        0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0xB5, 0x04, 0x2F, 0x04, 0x0F, 0x0F, 0x45, 0x23, 0x0E, 0x06, 0x0B, 0x0B, 0x0B, 0x14, 0x02, 0x59, 0x03, 0x2E,
  0xA4, 0x58, 0x20, 0x05, 0x0A, 0x02, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 
        0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x06, 0x0A, 0xB5, 0x0F, 0x04, 0x04, 0x45, 0x45, 0x45, 0x05, 0x51, 0x06, 0x0B, 0x0B, 0x14, 0x15, 0x6D, 0x03, 0x9F, 0x05,
  0x1E, 0x1E, 0x04, 0x03, 0x1E, 0x51, 0x02, 0x02, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 
        0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xFB, 0xB6, 0x04, 0x04, 0x2F, 0x04, 0x0F, 0x03, 0xA3, 0x51, 0x0B, 0x02, 0x02, 0x06, 0x3A, 0x04, 0x45, 0x53, 0x09,
  0x05, 0x20, 0x9F, 0x9F, 0x03, 0x2C, 0xB5, 0xF3, 0x29, 0x1C, 0x29, 0x29, 0x29, 0x29, 0x29, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x29, 0x29, 0x1C, 0x1C, 0x1C, 0x1C, 0x29, 0x29, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x29, 
        0x29, 0x1C, 0x1C, 0x1C, 0x29, 0x1C, 0x1C, 0x1C, 0x29, 0x1C, 0x29, 0x0E, 0xB5, 0x45, 0x0F, 0x04, 0x04, 0x0F, 0x45, 0x04, 0x19, 0x29, 0x0E, 0x95, 0x09, 0x03, 0x03, 0x53, 0x05, 0x07,
  0x03, 0x03, 0x2C, 0x1D, 0x05, 0x2C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x2C, 0x03, 0x2C, 0x2C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x2D, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x53, 0x03, 0x03, 0x03, 0x9F, 0x03, 0x03, 0x03, 0x2C, 0x03, 0x2C, 0x0F, 0x45, 0x04, 0x9F, 0x2D, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0F, 0x2E, 0x0F, 0x04, 0x38,
  0x2C, 0x53, 0x1D, 0x1E, 0x09, 0x20, 0x9F, 0x04, 0x1D, 0x03, 0x2C, 0x1D, 0x04, 0x1D, 0x1D, 0x9F, 0x03, 0x03, 0x2C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x53, 0x45, 0x03, 0x03, 0x03, 0x03, 0x03, 0x53, 0x2C, 0x04, 0x2C, 0x1D, 0x1D, 0x9F, 0x2C, 
        0x03, 0x03, 0x53, 0x09, 0x09, 0x03, 0x03, 0x03, 0x0F, 0x2C, 0x2C, 0x04, 0x9F, 0x20, 0x25, 0x23, 0x2F, 0x03, 0x04, 0x04, 0x9F, 0x2E, 0x1E, 0x1D, 0x0F, 0x2E, 0x05, 0x0F, 0x0F, 0x2F
};

GUI_CONST_STORAGE GUI_BITMAP bmOneEighthOff = {
  72, /* XSize */
  65, /* YSize */
  72, /* BytesPerLine */
  8, /* BitsPerPixel */
  acOneEighthOff,  /* Pointer to picture data (indices) */
  &PalOneEighthOff  /* Pointer to palette */
};

/* *** End of file *** */