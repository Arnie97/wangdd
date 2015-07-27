#include "res.h"
#include "pins_config.h"
#include "lib5110.h"
#include "IRremote.h"

IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long start_time, elapsed_time;

void
setup(void)
{
    lcd_init();
    lcd_clear();
    pinMode(12, OUTPUT);
    digitalWrite(12, HIGH);
    lcd_draw_bitmap(logo, 8, 0, 68, 24);
    delay(800);
    lcd_print_string("Loading.", 10, 4);
    delay(800);
    lcd_print_string("Loading..", 10, 4);
    delay(800);
    lcd_print_string("Loading...", 10, 4);
    delay(800);
    digitalWrite(12, LOW);
    lcd_clear();

    Serial.begin(9600);
    irrecv.enableIRIn();
    start_time = millis();
}

void
loop(void)
{
    elapsed_time = millis() - start_time;
    if (elapsed_time > 50000) {
        lcd_print_string("naked", 10, 0);
    } else if (elapsed_time > 30000) {
        lcd_print_string("timer", 10, 0);
    }

    if (irrecv.decode(&results)) {
        Serial.println(results.value, HEX);

        int button = 0;
        switch (results.value) {
        case 0xEE886D7F: button++; // mute
        case 0x00511DBB: button++; // mode
        case 0xE318261B: button++; // shutdown
        case 0x0449E79F: button++; // 6#
        case 0x488F3CBB: button++; // 5#
        case 0x8C22657B: button++; // 4#
        case 0x6182021B: button++; // 3#
        case 0x3D9AE3F7: button++; // 2#
        case 0x9716BE3F: button++; // 1#
            lcd_clear();
            digitalWrite(12, HIGH);
            lcd_print_string(messages[button <= 6? 1: button - 5], 20, 4);
            lcd_draw_bitmap(signals[button], 0, 0, 84, 24);
            delay(2000);
        }

        irrecv.resume();  // Receive the next value
        delay(100);
    }
}
