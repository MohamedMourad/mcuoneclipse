/**
 * \file
 * \brief Implementation Platform initialization of the PRG_G board.
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the hardware dependent initialization of board and drivers.
 */

#include "platform.h"
#include "McuWait.h"
#include "McuRTT.h"
#include "McuUtility.h"
#if PL_CONFIG_USE_FREERTOS
  #include "McuRTOS.h"
  #include "RTOS.h"
#endif
#if PL_CONFIG_USE_SEGGER_SYSVIEW
  #include "McuSystemView.h"
#endif
#include "Board.h"
#include "McuShell.h"
#include "McuArmTools.h"
#include "McuLog.h"
#include "McuXFormat.h"
#include "McuTimeDate.h"

void PL_Init(void) {
#if McuLib_CONFIG_SDK_USE_FREERTOS
  McuRTOS_Init(); /* must be first to disable the interrupts */
#endif
  BOARD_Init();
  McuLib_Init();
  McuArmTools_Init();
  McuLog_Init();
  McuXFormat_Init();
  McuTimeDate_Init();
  McuWait_Init();
  McuRTT_Init();
  McuUtility_Init();
  McuShell_Init();
  McuShell_SetStdio(&McuRTT_stdio); /* use RTT for standard I/O */
#if PL_CONFIG_USE_SEGGER_SYSVIEW
  McuSystemView_Init();
#endif
#if McuLib_CONFIG_SDK_USE_FREERTOS
  McuRTOS_Init();
#endif
}
