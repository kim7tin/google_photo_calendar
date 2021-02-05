#ifndef AMLICH
#define AMLICH


String dayInVietNam[] = {"CHU NHAT", "THU HAI", "THU BA", "THU TU", "THU NAM", "THU SAU", "THU BAY"};

String can[] = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
String chi[] = {"Than", "Dau", "Tuat", "Hoi", "Ti", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

const uint8_t PROGMEM congiap_bmp[][144] = {
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xBC, 0x00, 0x00, 0x07, 0xFB, 0x00, 0x00, 0x03, 0xFB, 0x00,
    0x00, 0x03, 0xFF, 0x80, 0x00, 0x03, 0xFE, 0x80, 0x00, 0x05, 0xFF, 0x80, 0x06, 0x1F, 0xFF, 0x80,
    0x0F, 0x9F, 0xFF, 0x80, 0x1B, 0xCF, 0xFF, 0x00, 0x16, 0x4F, 0xFF, 0x10, 0x12, 0x47, 0xFE, 0x28,
    0x1F, 0xC3, 0xFE, 0x78, 0x17, 0x40, 0xBC, 0x50, 0x0F, 0xE0, 0xFC, 0x60, 0x07, 0xB1, 0xBC, 0xA0,
    0x00, 0x6F, 0xDC, 0xE0, 0x00, 0x3D, 0xFC, 0xE0, 0x00, 0x3F, 0xFC, 0xE0, 0x00, 0x07, 0xFE, 0x20,
    0x00, 0x00, 0xFF, 0x70, 0x00, 0x03, 0xFF, 0x70, 0x00, 0x07, 0x77, 0xB0, 0x00, 0x0F, 0xFF, 0x90,
    0x00, 0x0F, 0xF4, 0xD8, 0x00, 0x0D, 0x7B, 0xD8, 0x00, 0x07, 0xDF, 0xE0, 0x00, 0x07, 0xDF, 0xF0,
    0x00, 0xE1, 0xF7, 0xF0, 0x01, 0x3F, 0xEC, 0xE0, 0x01, 0x6F, 0xFF, 0xC0, 0x01, 0x7F, 0xE4, 0x00
  },
  {
    0x01, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x1F, 0x80, 0x3F, 0x00,
    0x1F, 0xC0, 0x77, 0xC0, 0x1B, 0xC1, 0xBE, 0xE0, 0x0F, 0x61, 0xFF, 0xB0, 0x0F, 0xE3, 0xFF, 0xF0,
    0x1E, 0xE3, 0xFB, 0xF8, 0x0B, 0xE3, 0xFA, 0xF8, 0x02, 0xE2, 0xFF, 0xC8, 0x03, 0xE3, 0xFF, 0xE8,
    0x07, 0xE1, 0xEF, 0xE0, 0x0F, 0xE1, 0xFD, 0xE0, 0x1F, 0xE0, 0x3F, 0x70, 0x13, 0xE1, 0xEF, 0xF0,
    0x1D, 0xB3, 0xFF, 0xC0, 0x0F, 0xFF, 0xFF, 0xC0, 0x1F, 0x7A, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xE0,
    0x05, 0xFF, 0xFF, 0x48, 0x03, 0xDF, 0xFF, 0x40, 0x01, 0xF0, 0x02, 0x00, 0x00, 0x7F, 0xE0, 0x00,
    0x00, 0x3D, 0x80, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00
  },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x1F, 0xDF, 0xBC, 0x00,
    0x0B, 0xFB, 0xBD, 0x80, 0x0D, 0xFB, 0x3D, 0xC6, 0x07, 0xFF, 0xFD, 0xF6, 0x0F, 0xFE, 0x4F, 0xDE,
    0x0F, 0xDE, 0xF7, 0x90, 0x03, 0xDF, 0xFF, 0xF8, 0x1F, 0xCE, 0xF7, 0xF8, 0x0D, 0xCD, 0xE3, 0xF8,
    0xFF, 0xFF, 0xFF, 0xC8, 0xFF, 0xCF, 0x9F, 0xD8, 0x7F, 0xEF, 0xFB, 0xF8, 0x7F, 0xFF, 0xFF, 0x90,
    0x1F, 0xFF, 0xFE, 0xE0, 0x00, 0xEF, 0xFF, 0xE0, 0x00, 0x7E, 0xDF, 0xE0, 0x00, 0x7C, 0xD3, 0xE0,
    0x00, 0x74, 0x03, 0xE0, 0x00, 0x48, 0x03, 0x40, 0x00, 0x78, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 0x00, 0xC0, 0x00, 0x00, 0x01, 0x7C, 0x00, 0x00, 0x01, 0xEE, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
    0x2C, 0xFC, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x1F, 0xFC, 0xDD, 0xC0,
    0x07, 0xE7, 0xB9, 0xA0, 0x01, 0xFD, 0xEF, 0xB0, 0x00, 0x17, 0xEE, 0xF8, 0x00, 0x1F, 0xF8, 0xE8,
    0x00, 0x08, 0xF7, 0xE8, 0x00, 0x1F, 0xFF, 0x68, 0x00, 0xFF, 0xFD, 0xF8, 0x00, 0xFE, 0xE7, 0xF8,
    0x00, 0x03, 0xEE, 0xC8, 0x00, 0x03, 0xEF, 0x70, 0x00, 0x04, 0x7F, 0xF0, 0x00, 0x03, 0xFB, 0xE0,
    0x00, 0x01, 0x7F, 0x20, 0x00, 0x1D, 0xFF, 0xE0, 0x00, 0x2F, 0xF6, 0xE0, 0x00, 0x1E, 0x01, 0xD0,
    0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x07, 0xFF, 0xC0,
    0x00, 0x38, 0xFF, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 0x00, 0xC0, 0x00, 0x00, 0x01, 0x7C, 0x00, 0x00, 0x01, 0xEE, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
    0x2C, 0xFC, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x1F, 0xFC, 0xDD, 0xC0,
    0x07, 0xE7, 0xB9, 0xA0, 0x01, 0xFD, 0xEF, 0xB0, 0x00, 0x17, 0xEE, 0xF8, 0x00, 0x1F, 0xF8, 0xE8,
    0x00, 0x08, 0xF7, 0xE8, 0x00, 0x1F, 0xFF, 0x68, 0x00, 0xFF, 0xFD, 0xF8, 0x00, 0xFE, 0xE7, 0xF8,
    0x00, 0x03, 0xEE, 0xC8, 0x00, 0x03, 0xEF, 0x70, 0x00, 0x04, 0x7F, 0xF0, 0x00, 0x03, 0xFB, 0xE0,
    0x00, 0x01, 0x7F, 0x20, 0x00, 0x1D, 0xFF, 0xE0, 0x00, 0x2F, 0xF6, 0xE0, 0x00, 0x1E, 0x01, 0xD0,
    0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x07, 0xFF, 0xC0,
    0x00, 0x38, 0xFF, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00,
    0x07, 0x71, 0x80, 0x00, 0x02, 0xFF, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
    0x07, 0xFC, 0x00, 0x00, 0x06, 0xF9, 0x00, 0x0C, 0x0F, 0xFF, 0x80, 0x1E, 0x0F, 0xBF, 0x80, 0x7C,
    0x1F, 0xEF, 0x80, 0x40, 0x13, 0xF0, 0x00, 0x40, 0x1F, 0x98, 0x00, 0x70, 0x17, 0xFE, 0x3E, 0x08,
    0x1F, 0xF3, 0xED, 0x8C, 0x1F, 0x4E, 0xBB, 0xF8, 0x1F, 0xEF, 0xEF, 0xF0, 0x3F, 0xFE, 0xFF, 0x80,
    0x6B, 0xFF, 0xFF, 0x00, 0x6D, 0xFB, 0xEF, 0x00, 0xB6, 0xBF, 0xFF, 0x00, 0xF3, 0xFE, 0xFF, 0x80,
    0x79, 0xFF, 0xBF, 0x80, 0x7C, 0xFE, 0x1F, 0x80, 0x38, 0xF0, 0x07, 0x80, 0x10, 0xE0, 0x03, 0xC0,
    0x01, 0xF0, 0x03, 0xC0, 0x01, 0xE0, 0x07, 0x80, 0x01, 0xE0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x80, 0x00, 0x01, 0xDF, 0x00, 0x00,
    0x03, 0xD7, 0x80, 0x00, 0x01, 0x21, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x07, 0x03, 0xB9, 0x80, 0x0E,
    0x03, 0xFF, 0x80, 0x0E, 0x03, 0xFF, 0x80, 0x0C, 0x01, 0xEB, 0x00, 0x0E, 0x01, 0xF7, 0x00, 0x04,
    0x00, 0xFF, 0x0F, 0xC7, 0x00, 0x7F, 0xFE, 0xD0, 0x00, 0x7E, 0xEF, 0xDC, 0x48, 0x7F, 0xCF, 0xFE,
    0xBC, 0x7B, 0xFE, 0xEC, 0x24, 0xBE, 0xFF, 0xEC, 0x6E, 0x7E, 0xFD, 0xBC, 0x3F, 0x7F, 0xBD, 0xFC,
    0x0F, 0x7F, 0xFF, 0x68, 0x05, 0x7F, 0xFB, 0xB8, 0x03, 0xBF, 0xFF, 0xF8, 0x00, 0x7E, 0x01, 0xF8,
    0x00, 0x7C, 0x00, 0xE8, 0x00, 0x74, 0x00, 0xE0, 0x01, 0xF8, 0x01, 0xF8, 0x02, 0xF8, 0x03, 0x58,
    0x03, 0xC0, 0x02, 0x70, 0x03, 0xF0, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  { 0x00, 0x18, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x01, 0xB0, 0x00, 0x00,
    0x05, 0x80, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0C, 0x01, 0x82, 0x00, 0x38, 0x01, 0xBC, 0x00,
    0x70, 0x03, 0xE1, 0x00, 0x60, 0x03, 0xF1, 0x00, 0x60, 0x16, 0x3E, 0x00, 0x13, 0x8F, 0x1F, 0x00,
    0x17, 0x27, 0xFB, 0x00, 0x1F, 0xF7, 0xFA, 0x80, 0x3F, 0x71, 0xFF, 0x80, 0x5B, 0xDE, 0x78, 0x80,
    0x57, 0xEB, 0xFE, 0x80, 0x7B, 0xFF, 0xE5, 0x80, 0x6E, 0xFF, 0x33, 0x80, 0x3D, 0xED, 0x9E, 0xE0,
    0x1F, 0xFF, 0xC3, 0xD0, 0x19, 0xEB, 0xFB, 0xF8, 0x06, 0xFD, 0x31, 0x74, 0x00, 0x0F, 0xF0, 0xFE,
    0x00, 0x03, 0xF4, 0xF2, 0x00, 0x00, 0x2C, 0xBC, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x10
  }, {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x0C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
    0x3B, 0xFC, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x17, 0xFC, 0x24, 0x00, 0x0F, 0xFC, 0x3F, 0x00,
    0x08, 0x69, 0xFD, 0x80, 0x00, 0x2D, 0xFF, 0x80, 0x31, 0x7B, 0xEB, 0x49, 0x63, 0xF1, 0xE7, 0x5B,
    0x67, 0xF3, 0xC7, 0x9E, 0x73, 0xE3, 0xC7, 0x59, 0x2E, 0xC3, 0xC7, 0x88, 0x07, 0xC3, 0xCE, 0x26,
    0x0F, 0xFD, 0xCF, 0x60, 0x0F, 0xFF, 0x8D, 0x60, 0x0F, 0xFF, 0x8F, 0xE0, 0x07, 0xFF, 0x0F, 0xE0,
    0x03, 0xF6, 0x06, 0xC0, 0x01, 0xF0, 0x03, 0x00, 0x1B, 0x80, 0x17, 0x00, 0x1E, 0x00, 0x3C, 0x00,
    0x0C, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  }, {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x3F, 0x00, 0x7E, 0x00, 0x3F, 0x80, 0xEF, 0x00, 0x35, 0x03, 0x7E, 0x80, 0x37, 0x83, 0xFD, 0xC0,
    0x3F, 0x85, 0xFF, 0xC0, 0x1F, 0x05, 0xC3, 0x20, 0x4B, 0x0F, 0xC3, 0xE0, 0x1F, 0x0F, 0x83, 0xE0,
    0x1A, 0x05, 0x83, 0x20, 0x3C, 0x0F, 0x83, 0xE0, 0x6C, 0x0F, 0x83, 0xC2, 0x60, 0x03, 0x86, 0xC0,
    0x78, 0x1F, 0x07, 0x81, 0xF8, 0x1F, 0x07, 0x81, 0xE8, 0x2F, 0x0D, 0x03, 0xFC, 0x3F, 0x0F, 0x03,
    0x7F, 0xFE, 0x0F, 0x02, 0x73, 0xBC, 0x05, 0x06, 0x7F, 0xFC, 0x04, 0x8E, 0x1F, 0xF0, 0x03, 0xF4,
    0x0E, 0xE0, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
    0x07, 0xF0, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x3F, 0xF6, 0x00, 0x00, 0x7F, 0xF7, 0x80, 0x00,
    0x7F, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x7B, 0xFC, 0x00, 0x00,
    0xFF, 0x80, 0x10, 0x70, 0xCD, 0xC0, 0xFE, 0x7C, 0x7F, 0xFF, 0x6F, 0xB6, 0x7F, 0xEF, 0x5F, 0xFE,
    0x67, 0x6F, 0xFB, 0x9F, 0x67, 0x76, 0x79, 0xDF, 0x3D, 0xDB, 0xEF, 0x5A, 0x0D, 0x7F, 0x7F, 0xDE,
    0x0F, 0xDF, 0xF2, 0xDE, 0x17, 0xFF, 0xD2, 0x9C, 0x3B, 0x7F, 0xFF, 0x98, 0x79, 0xF0, 0xFE, 0x00,
    0x69, 0xF0, 0x76, 0x00, 0x7E, 0xE0, 0x3F, 0x00, 0x3E, 0xE0, 0x1E, 0x80, 0x1E, 0xE0, 0x07, 0x80,
    0x06, 0xE0, 0x0F, 0x00, 0x01, 0xE0, 0x0E, 0x00, 0x01, 0xE0, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00,
    0x00, 0xF0, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x05, 0xD8, 0x00, 0x00,
    0x03, 0xEC, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x06, 0xFE, 0x00, 0x00,
    0x07, 0x84, 0x00, 0x30, 0x07, 0xC4, 0x00, 0x38, 0x07, 0xE0, 0x7B, 0xB8, 0x05, 0xE0, 0xDE, 0xB0,
    0x06, 0xFE, 0xFF, 0xE0, 0x07, 0xFF, 0xFE, 0xC0, 0x02, 0xFF, 0xEF, 0xC0, 0x03, 0xEB, 0xFB, 0xC0,
    0x05, 0xED, 0xFE, 0x80, 0x05, 0xFF, 0xFF, 0x80, 0x0E, 0xDF, 0xDF, 0x80, 0x1E, 0x67, 0x13, 0x00,
    0x1E, 0x36, 0x0F, 0x80, 0x0E, 0x3C, 0x0B, 0x80, 0x0B, 0x3C, 0x03, 0x80, 0x07, 0x3C, 0x07, 0x80,
    0x06, 0x38, 0x07, 0x80, 0x00, 0x3C, 0x07, 0x80, 0x00, 0x3C, 0x07, 0x00, 0x00, 0x10, 0x02, 0x00
  }
};


//=============================================================
//doi ngay duong am
long getJulius(int intNgay, int intThang, int intNam)
{
  int a, y, m, jd;
  a = (int)((14 - intThang) / 12);
  y = intNam + 4800 - a;
  m = intThang + 12 * a - 3;
  jd = intNgay + (int)((153 * m + 2) / 5) + 365 * y + (int)(y / 4) - (int)(y / 100) + (int)(y / 400) - 32045;
  if (jd < 2299161)
  {
    jd = intNgay + (int)((153 * m + 2) / 5) + 365 * y + (int)(y / 4) - 32083;
  }
  return jd;
}

// Tinh ngay Soc
int getNewMoonDay(int k)
{
  double T, T2, T3, dr, Jd1, M, Mpr, F, C1, deltat, JdNew;
  T = k / 1236.85;
  T2 = T * T;
  T3 = T2 * T;
  dr = PI / 180;
  double timeZone = 7.0;
  Jd1 = 2415020.75933 + 29.53058868 * k + 0.0001178 * T2 - 0.000000155 * T3;
  // Mean new moon
  Jd1 = Jd1 + 0.00033 * sin((166.56 + 132.87 * T - 0.009173 * T2) * dr);
  // Sun's mean anomaly
  M = 359.2242 + 29.10535608 * k - 0.0000333 * T2 - 0.00000347 * T3;
  // Moon's mean anomaly
  Mpr = 306.0253 + 385.81691806 * k + 0.0107306 * T2 + 0.00001236 * T3;
  // Moon's argument of latitude
  F = 21.2964 + 390.67050646 * k - 0.0016528 * T2 - 0.00000239 * T3;
  C1 = (0.1734 - 0.000393 * T) * sin(M * dr) + 0.0021 * sin(2 * dr * M);
  C1 = C1 - 0.4068 * sin(Mpr * dr) + 0.0161 * sin(dr * 2 * Mpr);
  C1 = C1 - 0.0004 * sin(dr * 3 * Mpr);
  C1 = C1 + 0.0104 * sin(dr * 2 * F) - 0.0051 * sin(dr * (M + Mpr));
  C1 = C1 - 0.0074 * sin(dr * (M - Mpr)) + 0.0004 * sin(dr * (2 * F + M));
  C1 = C1 - 0.0004 * sin(dr * (2 * F - M)) - 0.0006 * sin(dr * (2 * F + Mpr));
  C1 = C1 + 0.0010 * sin(dr * (2 * F - Mpr)) + 0.0005 * sin(dr * (2 * Mpr + M));
  if (T < -11)
  {
    deltat = 0.001 + 0.000839 * T + 0.0002261 * T2 - 0.00000845 * T3 - 0.000000081 * T * T3;
  }
  else
  {
    deltat = -0.000278 + 0.000265 * T + 0.000262 * T2;
  }
  JdNew = Jd1 + C1 - deltat;
  return (int)(JdNew + 0.5 + timeZone / 24);
}
//Tính toa do mat troi
int getSunLongitude(int jdn)
{
  double timeZone = 7.0;

  double T, T2, dr, M, L0, DL, L;
  // Time in Julian centuries from 2000-01-01 12:00:00 GMT
  T = (jdn - 2451545.5 - timeZone / 24) / 36525;
  T2 = T * T;
  // degree to radian
  dr = PI / 180;
  // mean anomaly, degree
  M = 357.52910 + 35999.05030 * T - 0.0001559 * T2 - 0.00000048 * T * T2;
  // mean longitude, degree
  L0 = 280.46645 + 36000.76983 * T + 0.0003032 * T2;
  DL = (1.914600 - 0.004817 * T - 0.000014 * T2) * sin(dr * M);
  DL = DL + (0.019993 - 0.000101 * T) * sin(dr * 2 * M) + 0.000290 * sin(dr * 3 * M);
  L = L0 + DL; // true longitude, degree
  L = L * dr;
  // Normalize to (0, 2*PI)
  L = L - PI * 2 * (int)(L / (PI * 2));
  return (int)(L / PI * 6);
}
// Tìm ngày bat dau tháng 11 am lich
int getLunarMonthll(int intNam)
{
  double k, off, nm, sunLong;
  off = getJulius(31, 12, intNam) - 2415021;
  k = (int)(off / 29.530588853);
  nm = getNewMoonDay((int)k);
  // sun longitude at local midnight
  sunLong = getSunLongitude((int)nm);
  if (sunLong >= 9)
  {
    nm = getNewMoonDay((int)k - 1);
  }
  return (int)nm;
}
//Xác dinh thang nhuan
int getLeapMonthOffset(double a11)
{
  double last, arc;
  int k, i;
  k = (int)((a11 - 2415021.076998695) / 29.530588853 + 0.5);
  last = 0;
  // We start with the month following lunar month 11
  i = 1;
  arc = getSunLongitude((int)getNewMoonDay((int)(k + i)));
  do
  {
    last = arc;
    i++;
    arc = getSunLongitude((int)getNewMoonDay((int)(k + i)));
  } while (arc != last && i < 14);
  return i - 1;
}

//Doi ra ngay am-duong
int convertSolar2Lunar(int intNgay, int intThang, int intNam, int *ngayAm, int *thangAm, int *namAm)
{
  double dayNumber, monthStart, a11, b11, lunarDay, lunarMonth, lunarYear;
  //double lunarLeap;
  int k, diff;
  dayNumber = getJulius(intNgay, intThang, intNam);
  k = (int)((dayNumber - 2415021.076998695) / 29.530588853);
  monthStart = getNewMoonDay(k + 1);
  if (monthStart > dayNumber)
  {
    monthStart = getNewMoonDay(k);
  }
  a11 = getLunarMonthll(intNam);
  b11 = a11;
  if (a11 >= monthStart)
  {
    lunarYear = intNam;
    a11 = getLunarMonthll(intNam - 1);
  }
  else
  {
    lunarYear = intNam + 1;
    b11 = getLunarMonthll(intNam + 1);
  }
  lunarDay = dayNumber - monthStart + 1;
  diff = (int)((monthStart - a11) / 29);
  //lunarLeap = 0;
  lunarMonth = diff + 11;
  if (b11 - a11 > 365)
  {
    int leapMonthDiff = getLeapMonthOffset(a11);
    if (diff >= leapMonthDiff)
    {
      lunarMonth = diff + 10;
      if (diff == leapMonthDiff)
      {
        //lunarLeap = 1;
      }
    }
  }
  if (lunarMonth > 12)
  {
    lunarMonth = lunarMonth - 12;
  }
  if (lunarMonth >= 11 && diff < 4)
  {
    lunarYear -= 1;
  }
  *ngayAm = int(lunarDay);
  *thangAm = int(lunarMonth);
  *namAm = int(lunarYear);
}

//=============================================================

#endif /* AMLICH */