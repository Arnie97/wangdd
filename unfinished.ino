#include <avr/pgmspace.h>
#include "res.h"
#include "pins_config.h"
#include "ir_buttons.h"
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

        for (int i = sizeof(buttons); i; i--) {
            if (buttons[i] == results.value) {
                lcd_clear();
                digitalWrite(12, HIGH);
                lcd_print_string(messages[i <= 6? 1: i - 5], 20, 4);
                lcd_draw_bitmap(signals[i], 0, 0, 84, 24);
                delay(2000);
            }
        }

        irrecv.resume();  // Receive the next value
        delay(100);
    }
}
