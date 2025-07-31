#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB4
#define DELAY_MS 100

int main(void) {
    // Настраиваем PB0 как выход
    DDRB |= (1 << LED_PIN);

    while (1) {
        // Включить светодиод
        PORTB |= (1 << LED_PIN);
        _delay_ms(DELAY_MS);

        // Выключить светодиод
        PORTB &= ~(1 << LED_PIN);
        _delay_ms(DELAY_MS);
    }
}
