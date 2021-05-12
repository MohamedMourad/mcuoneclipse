/*
 * Copyright (c) 2019, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "platform.h"
#if PL_CONFIG_USE_SHELL
#include "McuShell.h"
#include "McuRTOS.h"
#include "McuRTT.h"
#include "McuArmTools.h"
#include "McuLog.h"
#include "McuTimeDate.h"
#include "McuShellUart.h"
#include "McuFatFS.h"
#if PL_CONFIG_USE_MININI
  #include "McuMinINI.h"
#endif
#include "disk.h"

static const McuShell_ParseCommandCallback CmdParserTable[] =
{
  McuShell_ParseCommand,
  McuRTOS_ParseCommand,
#if McuArmTools_CONFIG_PARSE_COMMAND_ENABLED
  McuArmTools_ParseCommand,
#endif
#if McuLog_CONFIG_IS_ENABLED && McuLog_CONFIG_PARSE_COMMAND_ENABLED
  McuLog_ParseCommand,
#endif
  McuTimeDate_ParseCommand,
#if PL_CONFIG_USE_SD_CARD
  McuFatFS_ParseCommand,
  DISK_ParseCommand,
#endif
  NULL /* Sentinel */
};

typedef struct {
  McuShell_ConstStdIOType *stdio;
  unsigned char *buf;
  size_t bufSize;
} SHELL_IODesc;

static const SHELL_IODesc ios[] =
{
#if PL_CONFIG_USE_SHELL_UART
  {&McuShellUart_stdio,  McuShellUart_DefaultShellBuffer,  sizeof(McuShellUart_DefaultShellBuffer)},
#endif
#if PL_CONFIG_USE_RTT
  {&McuRTT_stdio,  McuRTT_DefaultShellBuffer,  sizeof(McuRTT_DefaultShellBuffer)},
#endif
#if PL_CONFIG_USE_USB_CDC
  {&USB_CdcStdio,  USB_CdcDefaultShellBuffer,  sizeof(USB_CdcDefaultShellBuffer)},
#endif
};

void SHELL_SendChar(unsigned char ch) {
  for(int i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
    McuShell_SendCh(ch, ios[i].stdio->stdOut);
  }
}

void SHELL_SendString(unsigned char *str) {
  for(int i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
    McuShell_SendStr(str, ios[i].stdio->stdOut);
  }
}

static void ShellTask(void *pv) {
  int i;
#if PL_CONFIG_USE_SD_CARD
  bool cardMounted = false;
  static McuFatFS_FATFS fileSystemObject;
#endif

  McuShell_SendStr((uint8_t*)"Shell task started.\r\n", McuShell_GetStdio()->stdOut);
  for(i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
    ios[i].buf[0] = '\0';
  }
  for(;;) {
#if PL_CONFIG_USE_SD_CARD
    (void)McuFatFS_CheckCardPresence(&cardMounted, (uint8_t*)DISK_DRIVE_SD_CARD, &fileSystemObject, McuShell_GetStdio());
#endif
   /* process all I/Os */
    for(i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
      (void)McuShell_ReadAndParseWithCommandTable(ios[i].buf, ios[i].bufSize, ios[i].stdio, CmdParserTable);
    }
    vTaskDelay(pdMS_TO_TICKS(20));
  }
}

void SHELL_Init(void) {
  if (xTaskCreate(
      ShellTask,  /* pointer to the task */
      "Shell", /* task name for kernel awareness debugging */
      3000/sizeof(StackType_t), /* task stack size */
      (void*)NULL, /* optional task startup argument */
      tskIDLE_PRIORITY+2,  /* initial priority */
      (TaskHandle_t*)NULL /* optional task handle to create */
    ) != pdPASS) {
     for(;;){} /* error! probably out of memory */
  }
  McuShell_SetStdio(ios[0].stdio);
#if McuLog_CONFIG_IS_ENABLED
  McuLog_set_console(ios[0].stdio, 0);
#endif
}

void SHELL_Deinit(void) {}

#endif /* PL_CONFIG_USE_SHELL */
