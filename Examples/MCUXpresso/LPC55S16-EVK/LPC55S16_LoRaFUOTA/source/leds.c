/*
 * Copyright (c) 2021, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "leds_config.h"
#include "leds.h"
#include "McuLED.h"

static McuLED_Handle_t ledRed, ledGreen, ledBlue ,ledShieldGreen;

void LEDS_On(LEDS_Leds_e led) {
  switch(led) {
    case LEDS_RED:        	McuLED_On(ledRed); break;
    case LEDS_GREEN:      	McuLED_On(ledGreen); break;
    case LEDS_BLUE:       	McuLED_On(ledBlue); break;
    case LEDS_SHIELD_GREEN:	McuLED_On(ledShieldGreen); break;
    default:
      break; /* error */
  }
}

void LEDS_Off(LEDS_Leds_e led) {
  switch(led) {
    case LEDS_RED:        	McuLED_Off(ledRed); break;
    case LEDS_GREEN:      	McuLED_Off(ledGreen); break;
    case LEDS_BLUE:       	McuLED_Off(ledBlue); break;
    case LEDS_SHIELD_GREEN:	McuLED_Off(ledShieldGreen); break;
    default:
      break; /* error */
  }
}

void LEDS_Neg(LEDS_Leds_e led) {
  switch(led) {
    case LEDS_RED:        	McuLED_Toggle(ledRed); break;
    case LEDS_GREEN:      	McuLED_Toggle(ledGreen); break;
    case LEDS_BLUE:       	McuLED_Toggle(ledBlue); break;
    case LEDS_SHIELD_GREEN:	McuLED_Toggle(ledShieldGreen); break;
    default:
      break; /* error */
  }
}

#include "fsl_iocon.h"
#include "pin_mux.h"

void LEDS_Init(void) {
  McuLED_Config_t config;

  McuLED_GetDefaultConfig(&config);
  config.isOnInit = false;
  config.isLowActive = false;
  config.hw.gpio = LEDS_LED_RED_GPIO;
  config.hw.port = LEDS_LED_RED_PORT;
  config.hw.pin = LEDS_LED_RED_PIN;
  ledRed = McuLED_InitLed(&config);
  if (ledRed==NULL) {
    for(;;) {}
  }

  config.isOnInit = false;
  config.isLowActive = false;
  config.hw.gpio = LEDS_LED_GREEN_GPIO;
  config.hw.port = LEDS_LED_GREEN_PORT;
  config.hw.pin = LEDS_LED_GREEN_PIN;
  ledGreen = McuLED_InitLed(&config);
  if (ledGreen==NULL) {
    for(;;) {}
  }

  config.isOnInit = false;
  config.isLowActive = false;
  config.hw.gpio = LEDS_LED_BLUE_GPIO;
  config.hw.port = LEDS_LED_BLUE_PORT;
  config.hw.pin = LEDS_LED_BLUE_PIN;
  ledBlue = McuLED_InitLed(&config);

  if (ledBlue==NULL) {
    for(;;) {}
  }

  config.isOnInit = false;
  config.isLowActive = true;
  config.hw.gpio = LEDS_SHIELD_GREEN_GPIO;
  config.hw.port = LEDS_SHIELD_GREEN_PORT;
  config.hw.pin = LEDS_SHIELD_GREEN_PIN;
  ledShieldGreen = McuLED_InitLed(&config);

  if (ledShieldGreen==NULL) {
    for(;;) {}
  }
}

void LED_Deinit(void) {
  ledRed = McuLED_DeinitLed(ledRed);
  ledGreen = McuLED_DeinitLed(ledGreen);
  ledBlue = McuLED_DeinitLed(ledBlue);
  ledShieldGreen = McuLED_DeinitLed(ledShieldGreen);
}
