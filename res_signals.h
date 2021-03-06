#ifndef _SIGNALS_INCLUDED_
#define _SIGNALS_INCLUDED_

const char signal_train[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x56, 0x55, 0xF5, 0xFF, 0xFF, 0xA5, 0xA5, 0xA5, 0xFF, 0xEF,
    0xEF, 0xEF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF, 0xBF, 0xFE, 0xFC, 0xF8, 0xF8, 0xF0, 0xE0, 0xC0, 0xC0,
    0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0xE6, 0xFE, 0xFE, 0xDE, 0xC6, 0xC6, 0xC6,
    0xC6, 0xC6, 0x06, 0x06, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x18, 0x18,
    0x18, 0x18, 0xD8, 0xF8, 0x7E, 0x1F, 0x1F, 0x19, 0x18, 0xD8, 0xD8, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xF2, 0x92, 0x9F, 0x9F, 0x9F, 0x92,
    0x92, 0xF2, 0xFF, 0xFF, 0xFB, 0xFB, 0xFB, 0x3B, 0x3B, 0x9B, 0x9B, 0xDB, 0xCB, 0xEB, 0xEB, 0xFB,
    0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0x30, 0x78, 0x3E, 0x1F, 0x1F, 0x19, 0x38,
    0xF0, 0xE0, 0xF8, 0x7F, 0x1F, 0x03, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x0F, 0x0F, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFF, 0xFF, 0x0C,
    0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0xBF, 0xFD, 0xD8, 0xFE,
    0xEF, 0xF9, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x20, 0x30,
    0x38, 0x1C, 0x0E, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x31, 0x30, 0x30,
    0x30, 0x3F, 0x3F, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x7F, 0x7F, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03
};

const char signal_hospital[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x20, 0x20, 0x20, 0xE0, 0xE0, 0xFE, 0xFE, 0xFE, 0xFE,
    0xFE, 0x3E, 0x3E, 0x3E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3E, 0x3E, 0x3E, 0xFE, 0xFE, 0xFE, 0xFE,
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x0C, 0x0C, 0x8C, 0xEC, 0xFC, 0xFC, 0xCC,
    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x0C, 0x00, 0x00, 0xFC, 0xFC, 0xFC,
    0x0C, 0xEC, 0xFC, 0x7C, 0x70, 0x70, 0x70, 0x30, 0x30, 0x32, 0x3F, 0x3F, 0x3C, 0x30, 0x30, 0x30,
    0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFF, 0xFD, 0x7C, 0x7C, 0x7C, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8, 0xF8, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x78, 0x78,
    0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x34, 0x3E, 0x3F,
    0x33, 0x30, 0xB0, 0xF0, 0xF8, 0xFF, 0xBF, 0xB0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00,
    0x00, 0xFF, 0xFF, 0xFF, 0x07, 0x1F, 0xFD, 0xF0, 0x30, 0x33, 0x33, 0x33, 0xF3, 0xF3, 0x33, 0x33,
    0xF3, 0xF3, 0xF3, 0x33, 0x33, 0x33, 0x30, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x3E, 0x7F, 0x7F,
    0x7F, 0x7F, 0x3E, 0x1D, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x3F,
    0x3F, 0x34, 0x3C, 0x3E, 0x36, 0x37, 0x37, 0x33, 0x31, 0x31, 0x31, 0x33, 0x33, 0x33, 0x37, 0x36,
    0x3E, 0x3C, 0x30, 0x30, 0x00, 0xFF, 0xFF, 0xFF, 0x06, 0x07, 0x47, 0xC3, 0xE0, 0x70, 0x78, 0x3E,
    0x1F, 0x07, 0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x60, 0x60, 0x7E, 0x7E, 0x1C
};

const char signal_ban[] PROGMEM = {
    0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0x78, 0xFC, 0xEC, 0xCC, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x06, 0x04, 0x0C, 0x1C, 0x18, 0x78, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x18, 0x98, 0xD8, 0xD8,
    0xFF, 0xFF, 0xFF, 0xD8, 0xD8, 0x98, 0x18, 0x18, 0x98, 0xD8, 0x78, 0xFF, 0xFF, 0x78, 0xD8, 0x98,
    0x98, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
    0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0xFF, 0x01, 0x00, 0x00, 0x01, 0x01, 0x07, 0x0E, 0x0E, 0x1C, 0x70, 0x70, 0xE0, 0xC0, 0x80, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x3C, 0x83, 0x83, 0x83, 0x99, 0x98, 0x9B, 0x9B, 0x9B, 0x98,
    0x99, 0x99, 0x9B, 0x9B, 0x99, 0x98, 0x98, 0x9B, 0x9B, 0x98, 0x98, 0x99, 0x83, 0x83, 0x81, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0F, 0x18, 0x38,
    0x30, 0x30, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x61, 0x23, 0x37, 0x3E, 0x1C, 0x1E, 0x07,
    0x03, 0x00, 0x00, 0x21, 0x21, 0x31, 0x19, 0x1D, 0x0D, 0x07, 0x67, 0x61, 0x61, 0x61, 0x7F, 0x7F,
    0x3F, 0x01, 0x03, 0x07, 0x07, 0x0D, 0x1D, 0x19, 0x39, 0x11, 0x01, 0x30, 0x30, 0x30, 0x30, 0x3F,
    0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3F, 0x3F, 0x3F, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x00
};

const char signal_bike[] PROGMEM = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0xE8, 0x48, 0x40, 0x40, 0x40, 0x40, 0x40, 0x78,
    0xE8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0,
    0x40, 0x40, 0x60, 0x78, 0x78, 0x48, 0x40, 0x40, 0x40, 0x40, 0x40, 0xC0, 0xC0, 0xC0, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0xE0, 0x78, 0x18, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x00, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xF0, 0xF0, 0x90, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0xF0, 0x1C, 0x04, 0x06, 0x02, 0x62, 0x7A, 0x4E, 0xCD, 0xFF, 0xE0, 0xE0,
    0x30, 0x98, 0xFC, 0x1E, 0x0F, 0x0F, 0x3E, 0x62, 0x06, 0x04, 0x1C, 0xF8, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xFF,
    0xFF, 0xFF, 0x00, 0x00, 0x02, 0xC3, 0xF1, 0xFC, 0xFE, 0x07, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x08, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x38, 0x2F, 0x23, 0x20, 0x20, 0x20, 0xFE,
    0xFE, 0xFE, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x03, 0x0E, 0x08, 0x18, 0x10, 0x10, 0x10, 0x18,
    0x0E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0E, 0x08, 0x18, 0x10, 0x10, 0x18, 0x08, 0x0E, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21,
    0x21, 0x21, 0x21, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x01, 0x01, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00,
    0x40, 0x40, 0x40, 0x40, 0x60, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04,
    0x04, 0x04, 0x04, 0xFF, 0xFF, 0xFF, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04
};

const char signal_highway[] PROGMEM =
{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFE, 0x72, 0x73, 0x73, 0x72, 0x72, 0x52, 0x72, 0x52, 0x72, 0x72, 0x73, 0x73, 0x72,
    0xFE, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0xEC, 0xEC, 0xEC, 0x6C, 0x6C, 0x6C, 0x6F, 0x6F, 0x6F,
    0x6E, 0x6C, 0x6C, 0x6C, 0x6C, 0xEC, 0xEC, 0x0C, 0x0C, 0x0C, 0x0C, 0x00, 0x02, 0x0F, 0x3E, 0x7C,
    0x70, 0x00, 0x18, 0x98, 0x98, 0x98, 0x98, 0x98, 0x98, 0xFF, 0xFF, 0x98, 0x98, 0x98, 0x98, 0x98,
    0x98, 0x18, 0x18, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x7C, 0x3C, 0x1C, 0xAC, 0xA4, 0x8C, 0x1D, 0x7D, 0x5F, 0xFF, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
    0xFD, 0xDF, 0xFF, 0xFD, 0xFD, 0xFC, 0xFC, 0x00, 0xF0, 0xF0, 0xF0, 0x37, 0x37, 0xB7, 0xB3, 0xB3,
    0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0xB3, 0x37, 0x37, 0xF0, 0xF0, 0xF0, 0x00, 0x06,
    0x06, 0x06, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0x3F, 0xBF, 0x99, 0xD9, 0xF9, 0xFF, 0xFF, 0xD9,
    0xD9, 0xD9, 0x99, 0x3F, 0x3F, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07,
    0x03, 0x01, 0x00, 0x00, 0x00, 0xE0, 0xF2, 0xF3, 0xF3, 0xF3, 0xF0, 0xE0, 0x00, 0x00, 0x01, 0x03,
    0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0x7F, 0x7F, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0F, 0x6F, 0x6F, 0x60, 0x60, 0x7F,
    0x7F, 0x3F, 0x00, 0x30, 0x70, 0x38, 0x1F, 0x1F, 0x38, 0x34, 0x7E, 0x6E, 0x67, 0x63, 0x63, 0x61,
    0x60, 0x6F, 0x6F, 0x60, 0x60, 0x61, 0x63, 0x63, 0x67, 0x66, 0x62, 0x00
};

#endif /* _SIGNALS_INCLUDED_ */
