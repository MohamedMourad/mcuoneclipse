/*
 * Copyright (c) 2022, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "app_platform.h"
#if PL_CONFIG_USE_BUTTONS
#include "application.h"
#include "debounce.h"
#include "McuDebounce.h"
#include "McuRTOS.h"
#include "buttons.h"
#if configUSE_SEGGER_SYSTEM_VIEWER_HOOKS
  #include "McuSystemView.h"
#endif

static void OnDebounceEvent(McuDbnc_EventKinds event, uint32_t buttons);

#define TIMER_PERIOD_MS  20 /* frequency of debouncing timer */

static McuDbnc_Desc_t data =
{
  .state = MCUDBMC_STATE_IDLE,  /* state of state machine */
  .timerPeriodMs = TIMER_PERIOD_MS, /* timer period for debouncing */
  .timer = NULL, /* FreeRTOS timer handle */
  .debounceTimeMs = 200, /* debouncing time */
  .repeatTimeMs   = 150, /* time for repeated button events */
  .longKeyTimeMs  = 3000, /* time for a long key press */
  .getButtons = BTN_GetButtons, /* callback to get bitset of buttons */
  .onDebounceEvent = OnDebounceEvent, /* debounce event handler */
};

static BTN_Buttons_e RotateButton(BTN_Buttons_e button) {
#if BTN_CONFIG_ROTATION==0
  return button;
#elif BTN_CONFIG_ROTATION==180
  if (button == BTN_NAV_LEFT) {
    return BTN_NAV_RIGHT;
  } else if (button == BTN_NAV_RIGHT) {
    return BTN_NAV_LEFT;
  } else if (button == BTN_NAV_UP) {
    return BTN_NAV_DOWN;
  } else if (button == BTN_NAV_DOWN) {
    return BTN_NAV_UP;
  }
  return button;
#endif
}

static void OnDebounceEvent(McuDbnc_EventKinds event, uint32_t buttons) {
  BTN_Buttons_e button = BTN_NOF_BUTTONS;

  if (buttons&BTN_BIT_NAV_LEFT) {
    button = BTN_NAV_LEFT;
  } else if (buttons&BTN_BIT_NAV_RIGHT) {
    button = BTN_NAV_RIGHT;
  } else if (buttons&BTN_BIT_NAV_UP) {
    button = BTN_NAV_UP;
  } else if (buttons&BTN_BIT_NAV_DOWN) {
    button = BTN_NAV_DOWN;
  } else if (buttons&BTN_BIT_NAV_CENTER) {
    button = BTN_NAV_CENTER;
  } else if (buttons&BTN_BIT_NAV_SET) {
    button = BTN_NAV_SET;
  } else if (buttons&BTN_BIT_NAV_RESET) {
    button = BTN_NAV_RESET;
  }

  switch(event) {
    case MCUDBNC_EVENT_PRESSED:
    case MCUDBNC_EVENT_PRESSED_REPEAT:
    case MCUDBNC_EVENT_LONG_PRESSED:
    case MCUDBNC_EVENT_LONG_PRESSED_REPEAT:
    case MCUDBNC_EVENT_RELEASED:
    case MCUDBNC_EVENT_LONG_RELEASED:
      button = RotateButton(button);
      APP_OnButtonEvent(button, event);
      break;

    case MCUDBNC_EVENT_END:
      (void)xTimerStop(data.timer, pdMS_TO_TICKS(100)); /* stop timer */
      break;

    default:
      break;
  }
}

static void vTimerCallbackDebounce(TimerHandle_t pxTimer) {
  /* called with TIMER_PERIOD_MS during debouncing */
  McuDbnc_Process(&data);
}

void Debounce_StartDebounce(uint32_t buttons) {
  if (data.state==MCUDBMC_STATE_IDLE) {
    data.scanValue = buttons;
    data.state = MCUDBMC_STATE_START;
    McuDbnc_Process(&data);
    (void)xTimerStart(data.timer, pdMS_TO_TICKS(100));
  }
}

void Debounce_StartDebounceFromISR(uint32_t buttons, BaseType_t *pxHigherPriorityTaskWoken) {
  if (data.state==MCUDBMC_STATE_IDLE) {
    data.scanValue = buttons;
    data.state = MCUDBMC_STATE_START;
    McuDbnc_Process(&data);
    (void)xTimerStartFromISR(data.timer, pxHigherPriorityTaskWoken);
  }
}

void Debounce_Deinit(void) {
  /* nothing needed */
}

void Debounce_Init(void) {
  data.timer = xTimerCreate(
        "tmrDbnc", /* name */
        pdMS_TO_TICKS(TIMER_PERIOD_MS), /* period/time */
        pdTRUE, /* auto reload */
        (void*)0, /* timer ID */
        vTimerCallbackDebounce); /* callback */
  if (data.timer==NULL) {
    for(;;); /* failure! */
  }
}
#endif /* PL_CONFIG_USE_BUTTONS */
