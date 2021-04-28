#include <Arduino.h>
#include <unity.h>

void test_led_builtin_pin_number(void) {
    TEST_ASSERT_EQUAL(2, LED_BUILTIN);
}

void test_led_state_high(void) {
    digitalWrite(LED_BUILTIN, HIGH);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
}

void test_led_state_low(void) {
    digitalWrite(LED_BUILTIN, LOW);
    TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
}

int main(){
    uint8_t i = 0;
    uint8_t max_blinks = 5;
    delay(2000);

    UNITY_BEGIN();    // IMPORTANT LINE!
    RUN_TEST(test_led_builtin_pin_number);

    pinMode(LED_BUILTIN, OUTPUT);

    while (1)
    {
        if (i < max_blinks)
        {
            RUN_TEST(test_led_state_high);
            delay(1000);
            RUN_TEST(test_led_state_low);
            delay(1000);
            i++;
        }
        else if (i == max_blinks)
        {
            UNITY_END(); // stop unit testing
        }
    }
    return 0;
}