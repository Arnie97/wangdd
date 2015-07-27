#include "lib5110.h"
#include "res_font.h"

void
lcd_init(void)
{
    pinMode(LCD_RST, OUTPUT);
    pinMode(LCD_CE,  OUTPUT);
    pinMode(LCD_DC,  OUTPUT);
    pinMode(SDIN,    OUTPUT);
    pinMode(SCLK,    OUTPUT);

    digitalWrite(LCD_RST, LOW);  // Negetive pulse triggers a reset
    digitalWrite(LCD_CE, LOW);
    delayMicroseconds(1);
    digitalWrite(LCD_RST, HIGH);
    digitalWrite(LCD_CE, HIGH);
    delayMicroseconds(1);

    lcd_write_byte(COMMAND, 0x21);  // Enter extended command mode
    lcd_write_byte(COMMAND, 0xc8);  // Set the bias voltage
    lcd_write_byte(COMMAND, 0x06);  // Temperature calibration
    lcd_write_byte(COMMAND, 0x13);  // Set display contrast
    lcd_write_byte(COMMAND, 0x20);  // Enter basic command mode
    lcd_clear();
    lcd_write_byte(COMMAND, 0x0c);  // Set display mode to normal
    digitalWrite(LCD_CE, LOW);
}

inline void
lcd_clear(void)
{
    lcd_write_byte(COMMAND, 0x0c);
    lcd_write_byte(COMMAND, 0x80);
    for (char x = 0; x < 84; x++) {
        for (char y_byte = 0; y_byte < 6; y_byte++) {
            lcd_write_byte(DATA, 0x00);
        }
    }
}

inline void
lcd_set_position(const unsigned char x, const unsigned char y_byte)
{
    lcd_write_byte(COMMAND, 0x80 | x);
    lcd_write_byte(COMMAND, 0x40 | y_byte);
}

inline void
lcd_write_byte(const char operation_type, const unsigned char data)
{
    digitalWrite(LCD_CE, LOW);  // Enables the display controller
    digitalWrite(LCD_DC, operation_type);  // Trasmits data or command?
    shiftOut(SDIN, SCLK, MSBFIRST, data);  // Serial output
    digitalWrite(LCD_CE, HIGH);
}

const char *
lcd_draw_bitmap(const char *map, char x0, char y0, const char x_size, const char y_size)
{
    char bytes = (y_size + 7) >> 3;
    for (char current_byte = 0; current_byte < bytes; current_byte++) {
        lcd_set_position(x0, y0);
        for (char i = 0; i < x_size; i++) {
            lcd_write_byte(DATA, map[i + current_byte * x_size]);
        }
        y0++;
    }
    return map;
}

inline const char
lcd_print_char(const char c)
{
    int i = c - 32;
    for (int line = 0; line < 6; line++) {
        lcd_write_byte(DATA, font[i][line]);
    }
    return c;
}

inline const char *
lcd_print_string(const char *src, const unsigned char x, const unsigned char y_byte)
{
    lcd_set_position(x, y_byte);
    for (char *ptr = (char *)src; *ptr; lcd_print_char(*ptr++));
    return src;
}

