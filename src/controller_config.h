#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

//for now LED_GPIO_SIZE needs to be 1, otherwise HID LED addressing is broken
#define SW_GPIO_SIZE 12               // Number of switches
#define LED_GPIO_SIZE 10              // Number of switch LEDs
#define SW_DEBOUNCE_TIME_US 4000      // Switch debounce delay in us
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us
#define WS2812B_LED_SIZE 6            // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 1           // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE \
  WS2812B_LED_SIZE / WS2812B_LED_ZONES  // Number of LEDs per zone

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_Z, HID_KEY_Q, HID_KEY_S, HID_KEY_E,
                              HID_KEY_C, HID_KEY_1, HID_KEY_7, HID_KEY_5,
                              HID_KEY_9, HID_KEY_3,
                              HID_KEY_SCROLL_LOCK, HID_KEY_F1};

const uint8_t SW_GPIO[] = {
    21, 19, 10, 6, 8, 17, 27, 2, 0, 4, 15, 14
};

const uint8_t LED_GPIO[] = {
  20, 18, 11, 7, 9, 16, 26, 3, 1, 5
};

const uint8_t WS2812B_GPIO = 22;

#endif

extern bool joy_mode_check;

#endif
