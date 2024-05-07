/**
 * \file
 * \brief Shell and console interface implementation.
 * \author Erich Styger
 *
 * This module implements the front end to the console/shell functionality.
 */

#include "platform.h"
#if PL_CONFIG_USE_SHELL
#include "Shell.h"
#include "McuShell.h"
#include "McuRTOS.h"
#include "McuRTT.h"
#include "McuArmTools.h"
#include "McuLog.h"
#include "McuShellUart.h"
#include "McuTimeDate.h"
#if PL_CONFIG_USE_LEDS
  #include "leds.h"
#endif
#include "pico/stdlib.h"
#if PL_CONFIG_USE_MININI
  #include "McuMinINI.h"
  #include "minGlue-Flash.h"
#endif
#if PL_CONFIG_USE_INTERNAL_FLASH
  #include "McuFlash.h"
#endif
#if PL_CONFIG_USE_LITTLE_FS
  #include "littleFS/McuLittleFS.h"
#endif
#include "application.h"

typedef struct {
  McuShell_ConstStdIOType *stdio;
  unsigned char *buf;
  size_t bufSize;
} SHELL_IODesc;

#if (PL_CONFIG_BOARD_ID==PL_CONFIG_BOARD_ID_PICO || PL_CONFIG_BOARD_ID==PL_CONFIG_BOARD_ID_PICO_W) && PL_CONFIG_USE_USB_CDC

static void cdc_StdIOReadChar(uint8_t *c) {
  int res;

  res = getchar_timeout_us(500);
  if (res==-1) { /* no character present */
    *c = '\0';
  } else {
    *c = (uint8_t)res; /* return character */
  }
}

bool cdc_StdIOKeyPressed(void) {
  return true; /* hack, don't know if there is any other way? */
}

void cdc_StdIOSendChar(uint8_t ch) {
  putchar_raw(ch);
}

/* default standard I/O struct */
static McuShell_ConstStdIOType cdc_stdio = {
    .stdIn = (McuShell_StdIO_In_FctType)cdc_StdIOReadChar,
    .stdOut = (McuShell_StdIO_OutErr_FctType)cdc_StdIOSendChar,
    .stdErr = (McuShell_StdIO_OutErr_FctType)cdc_StdIOSendChar,
    .keyPressed = cdc_StdIOKeyPressed, /* if input is not empty */
  #if McuShell_CONFIG_ECHO_ENABLED
    .echoEnabled = false,
  #endif
  };
static uint8_t cdc_DefaultShellBuffer[McuShell_DEFAULT_SHELL_BUFFER_SIZE]; /* default buffer which can be used by the application */
#endif

static const SHELL_IODesc ios[] =
{
#if PL_CONFIG_USE_SHELL_UART
  {&McuShellUart_stdio,  McuShellUart_DefaultShellBuffer,  sizeof(McuShellUart_DefaultShellBuffer)},
#endif
#if (PL_CONFIG_BOARD_ID==PL_CONFIG_BOARD_ID_PICO || PL_CONFIG_BOARD_ID==PL_CONFIG_BOARD_ID_PICO_W) && PL_CONFIG_USE_USB_CDC
  {&cdc_stdio,  cdc_DefaultShellBuffer,  sizeof(cdc_DefaultShellBuffer)},
#endif
#if PL_CONFIG_USE_RTT
  {&McuRTT_stdio,  McuRTT_DefaultShellBuffer,  sizeof(McuRTT_DefaultShellBuffer)},
#endif
};

static const McuShell_ParseCommandCallback CmdParserTable[] =
{
  McuShell_ParseCommand, /* McuShell component, is first in list */
  McuRTOS_ParseCommand, /* FreeRTOS shell parser */
#if PL_CONFIG_USE_LEDS
  LEDS_ParseCommand,
#endif
#if McuArmTools_CONFIG_PARSE_COMMAND_ENABLED
  McuArmTools_ParseCommand,
#endif
#if PL_CONFIG_USE_INTERNAL_FLASH
  McuFlash_ParseCommand,
#endif
#if PL_CONFIG_USE_MININI
  McuMinINI_ParseCommand,
#endif
#if PL_CONFIG_USE_MININI && McuMinINI_CONFIG_FS==McuMinINI_CONFIG_FS_TYPE_FLASH_FS
  ini_ParseCommand,
#endif
#if McuLog_CONFIG_IS_ENABLED
  McuLog_ParseCommand,
#endif
#if PL_CONFIG_USE_LITTLE_FS
  McuLFS_ParseCommand,
#endif
  App_ParseCommand,
  NULL /* Sentinel */
};

static void ShellTask(void *pvParameters) {
  int i;

  (void)pvParameters; /* not used */
  McuLog_info("started shell task");
  /* initialize buffers */
  for(i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
    ios[i].buf[0] = '\0';
  }
  for(;;) {
    /* process all I/Os */
    for(i=0;i<sizeof(ios)/sizeof(ios[0]);i++) {
      (void)McuShell_ReadAndParseWithCommandTable(ios[i].buf, ios[i].bufSize, ios[i].stdio, CmdParserTable);
    }
    vTaskDelay(pdMS_TO_TICKS(10));
  } /* for */
}

void SHELL_Init(void) {
  if (xTaskCreate(ShellTask, "Shell", 4096/sizeof(StackType_t), NULL, tskIDLE_PRIORITY+1, NULL) != pdPASS) {
    for(;;){} /* error */
  }
  McuShell_SetStdio(ios[0].stdio);
#if McuLog_CONFIG_IS_ENABLED
  #if PL_CONFIG_USE_RTT && PL_CONFIG_USE_SHELL_UART && McuLog_CONFIG_NOF_CONSOLE_LOGGER==2 /* both */
    McuLog_set_console(McuRTT_GetStdio(), 0);
    McuLog_set_console(&McuShellUart_stdio, 1);
  #elif PL_CONFIG_USE_RTT && PL_CONFIG_USE_USB_CDC && McuLog_CONFIG_NOF_CONSOLE_LOGGER==2 /* both */
    McuLog_set_console(McuRTT_GetStdio(), 0);
    McuLog_set_console(&cdc_stdio, 1);
  #elif PL_CONFIG_USE_RTT /* only RTT */
    McuLog_set_console(McuRTT_GetStdio(), 0);
  #elif PL_CONFIG_USE_SHELL_UART /* only UART */
    McuLog_set_console(&McuShellUart_stdio, 0);
  #endif
#endif
}

void SHELL_Deinit(void) {
  McuShell_SetStdio(NULL);
}

#endif /* PL_CONFIG_USE_SHELL */
