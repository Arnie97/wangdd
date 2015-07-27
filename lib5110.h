#ifndef _LIB5110_INCLUDED_
#define _LIB5110_INCLUDED_

#include "Arduino.h"

#define DATA HIGH
#define COMMAND LOW

void lcd_init(void);
void lcd_clear(void);
void lcd_set_position(const unsigned char, const unsigned char);
void lcd_write_byte(const char, const unsigned char);
const char *lcd_draw_bitmap(const char *, char, char, const char, const char);
const char lcd_print_char(const char *array, const char c);
const char *lcd_print_string(const char *, const unsigned char, const unsigned char);

#endif /* _LIB5110_INCLUDED_ */
