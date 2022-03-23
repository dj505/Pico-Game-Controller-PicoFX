#ifndef CONTROLLER_CONFIG_H
#define CONTROLLER_CONFIG_H

//for now LED_GPIO_SIZE needs to be 1, otherwise HID LED addressing is broken
#define SW_GPIO_SIZE 9               // Number of switches
#define LED_GPIO_SIZE 1              // Number of switch LEDs
#define SW_DEBOUNCE_TIME_US 4000      // Switch debounce delay in us
#define REACTIVE_TIMEOUT_MAX 1000000  // HID to reactive timeout in us
#define WS2812B_LED_SIZE 18           // Number of WS2812B LEDs
#define WS2812B_LED_ZONES 9           // Number of WS2812B LED Zones
#define WS2812B_LEDS_PER_ZONE \
  WS2812B_LED_SIZE / WS2812B_LED_ZONES  // Number of LEDs per zone

#ifdef PICO_GAME_CONTROLLER_C

// MODIFY KEYBINDS HERE, MAKE SURE LENGTHS MATCH SW_GPIO_SIZE
const uint8_t SW_KEYCODE[] = {HID_KEY_D, HID_KEY_F, HID_KEY_J, HID_KEY_K,
                              HID_KEY_C, HID_KEY_M, HID_KEY_A, HID_KEY_B,
                              HID_KEY_1,};

const uint8_t SW_GPIO[] = {
    17, 18, 16, 19, 14, 10, 13, 11, 12,
};

const uint8_t LED_GPIO[] = {
  4,
};

const uint8_t WS2812B_GPIO = 0;

#endif

extern bool joy_mode_check;

#endif