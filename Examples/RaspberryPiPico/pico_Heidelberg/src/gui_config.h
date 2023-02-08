/*
 * Copyright (c) 2022, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef GUI_CONFIG_H_
#define GUI_CONFIG_H_

#define GUI_CONFIG_USE_SCREENSAVER         (0)
  /*!< if using a screensaver or not */

#if GUI_CONFIG_USE_SCREENSAVER
  #define GUI_CONFIG_TIMEOUT_USER_ACTION_SEC      (10*60)
    /*!< Time in seconds with no user (button) interaction after which it will do screen cycling (or screen saving). */
#endif

#define GUI_CONFIG_SCREEN_CYLCING_INTERVAL_SEC  (5)
  /*!< Time in seconds between the screen cycling (logos, energy status, ...) */

#if GUI_CONFIG_USE_SCREENSAVER
  #define GUI_CONFIG_NOF_SCREEN_CYCLING_UNTIL_DISPLAY_OFF  (3)
    /*!< Number of complete screen cycling until it enters low power mode with the display turning off */
#endif

#endif /* GUI_CONFIG_H_ */
