/*
 * Copyright (c) 2021, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "platform.h"
#include "McuLib.h"
#include "McuGPIO.h"
#include "McuLED.h"
#include "McuWait.h"
#include "McuArmTools.h"
#include "leds.h"
#include "NeoPixel.h"
#include "ws2812b.h"

static McuGPIO_Handle_t WS_lane;

static void WSPinInit(void) {
  McuGPIO_Config_t config;

  McuGPIO_GetDefaultConfig(&config);
  /* PIO0_8 */
  config.hw.gpio = GPIO;
  config.hw.iocon = IOCON_INDEX_PIO0_8;
  config.hw.pin =  8;
  config.hw.port = 0;
  config.hw.pull = McuGPIO_PULL_DISABLE ;
  config.isHighOnInit = false;
  config.isInput = false;
  WS_lane = McuGPIO_InitGPIO(&config);
  if (WS_lane==NULL) {
    for(;;) {} /* error */
  }
}

void PL_Init(void) {
  CLOCK_EnableClock(kCLOCK_Iocon);

  /* McuLib modules */
  McuLib_Init();
  McuGPIO_Init();
  McuLED_Init();
  McuWait_Init();
  McuArmTools_Init();

  /* application modules */
  LEDS_Init();
  NEO_Init();
#if PL_CONFIG_USE_WS2812B
  WSPinInit();
  WS2812B_Init();
#endif
}
