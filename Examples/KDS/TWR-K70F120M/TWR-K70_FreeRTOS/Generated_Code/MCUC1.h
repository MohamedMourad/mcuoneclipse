/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : MCUC1.h
**     Project     : TWR-K70_FreeRTOS
**     Processor   : MK70FN1M0VMJ12
**     Component   : McuLibConfig
**     Version     : Component 01.016, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-06-02, 10:26, # CodeGen: 4
**     Abstract    :
**          Configures the drivers for various SDKs and APIs used.
**     Settings    :
**          Component name                                 : MCUC1
**          SDK                                            : Processor Expert
**     Contents    :
**         Init   - void MCUC1_Init(void);
**         Deinit - void MCUC1_Deinit(void);
**
** * Copyright (c) 2016-2021, Erich Styger
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file MCUC1.h
** @version 01.00
** @brief
**          Configures the drivers for various SDKs and APIs used.
*/         
/*!
**  @addtogroup MCUC1_module MCUC1 module documentation
**  @{
*/         

#ifndef __MCUC1_H
#define __MCUC1_H

/* MODULE MCUC1. */
#include "MCUC1config.h" /* include configuration header file */

#ifdef __cplusplus
extern "C" {
#endif

#if MCUC1_CONFIG_SDK_VERSION_USED == MCUC1_CONFIG_SDK_PROCESSOR_EXPERT
  #ifndef __IASMARM__ /* not including standard header files if using IAR assembler */
  /* Include shared modules, which are used for whole project */
    #include "PE_Types.h"
    #include "PE_Error.h"
    #include "PE_Const.h"
    #include "IO_Map.h"
    #include "Cpu.h" /* include CPU related interfaces and defines */
  #endif
#else /* use non-Processor Expert SDK: generic or silicon vendor SDK */
  /* defines of common types used by Processor Expert, which might not be provided by the SDK */
  #if !(defined(__ICCARM__) || defined(__HIWARE__)) /* Hiware compiler (S08, S12) only supports C89 */
    #include <stdint.h> /* uint8_t, int16_t, ... */
    #include <stdbool.h> /* bool, true, false, ... */
  #endif

  /* boolean values */
  #ifndef FALSE
    #define  FALSE  0x00u
  #endif
  #ifndef TRUE
    #define  TRUE   0x01u
  #endif

  /* error codes */
  #define ERR_OK                          0x00U /*!< OK */
  #define ERR_SPEED                       0x01U /*!< This device does not work in the active speed mode. */
  #define ERR_RANGE                       0x02U /*!< Parameter out of range. */
  #define ERR_VALUE                       0x03U /*!< Parameter of incorrect value. */
  #define ERR_OVERFLOW                    0x04U /*!< Timer overflow. */
  #define ERR_MATH                        0x05U /*!< Overflow during evaluation. */
  #define ERR_ENABLED                     0x06U /*!< Device is enabled. */
  #define ERR_DISABLED                    0x07U /*!< Device is disabled. */
  #define ERR_BUSY                        0x08U /*!< Device is busy. */
  #define ERR_NOTAVAIL                    0x09U /*!< Requested value or method not available. */
  #define ERR_RXEMPTY                     0x0AU /*!< No data in receiver. */
  #define ERR_TXFULL                      0x0BU /*!< Transmitter is full. */
  #define ERR_BUSOFF                      0x0CU /*!< Bus not available. */
  #define ERR_OVERRUN                     0x0DU /*!< Overrun error is detected. */
  #define ERR_FRAMING                     0x0EU /*!< Framing error is detected. */
  #define ERR_PARITY                      0x0FU /*!< Parity error is detected. */
  #define ERR_NOISE                       0x10U /*!< Noise error is detected. */
  #define ERR_IDLE                        0x11U /*!< Idle error is detected. */
  #define ERR_FAULT                       0x12U /*!< Fault error is detected. */
  #define ERR_BREAK                       0x13U /*!< Break char is received during communication. */
  #define ERR_CRC                         0x14U /*!< CRC error is detected. */
  #define ERR_ARBITR                      0x15U /*!< A node losts arbitration. This error occurs if two nodes start transmission at the same time. */
  #define ERR_PROTECT                     0x16U /*!< Protection error is detected. */
  #define ERR_UNDERFLOW                   0x17U /*!< Underflow error is detected. */
  #define ERR_UNDERRUN                    0x18U /*!< Underrun error is detected. */
  #define ERR_COMMON                      0x19U /*!< Common error of a device. */
  #define ERR_LINSYNC                     0x1AU /*!< LIN synchronization error is detected. */
  #define ERR_FAILED                      0x1BU /*!< Requested functionality or process failed. */
  #define ERR_QFULL                       0x1CU /*!< Queue is full. */
  #define ERR_PARAM_MASK                  0x80U /*!< Invalid mask. */
  #define ERR_PARAM_MODE                  0x81U /*!< Invalid mode. */
  #define ERR_PARAM_INDEX                 0x82U /*!< Invalid index. */
  #define ERR_PARAM_DATA                  0x83U /*!< Invalid data. */
  #define ERR_PARAM_SIZE                  0x84U /*!< Invalid size. */
  #define ERR_PARAM_VALUE                 0x85U /*!< Invalid value. */
  #define ERR_PARAM_RANGE                 0x86U /*!< Invalid parameter's range or parameters' combination. */
  #define ERR_PARAM_LOW_VALUE             0x87U /*!< Invalid value (LOW part). */
  #define ERR_PARAM_HIGH_VALUE            0x88U /*!< Invalid value (HIGH part). */
  #define ERR_PARAM_ADDRESS               0x89U /*!< Invalid address. */
  #define ERR_PARAM_PARITY                0x8AU /*!< Invalid parity. */
  #define ERR_PARAM_WIDTH                 0x8BU /*!< Invalid width. */
  #define ERR_PARAM_LENGTH                0x8CU /*!< Invalid length. */
  #define ERR_PARAM_ADDRESS_TYPE          0x8DU /*!< Invalid address type. */
  #define ERR_PARAM_COMMAND_TYPE          0x8EU /*!< Invalid command type. */
  #define ERR_PARAM_COMMAND               0x8FU /*!< Invalid command. */
  #define ERR_PARAM_RECIPIENT             0x90U /*!< Invalid recipient. */
  #define ERR_PARAM_BUFFER_COUNT          0x91U /*!< Invalid buffer count. */
  #define ERR_PARAM_ID                    0x92U /*!< Invalid ID. */
  #define ERR_PARAM_GROUP                 0x93U /*!< Invalid group. */
  #define ERR_PARAM_CHIP_SELECT           0x94U /*!< Invalid chip select. */
  #define ERR_PARAM_ATTRIBUTE_SET         0x95U /*!< Invalid set of attributes. */
  #define ERR_PARAM_SAMPLE_COUNT          0x96U /*!< Invalid sample count. */
  #define ERR_PARAM_CONDITION             0x97U /*!< Invalid condition. */
  #define ERR_PARAM_TICKS                 0x98U /*!< Invalid ticks parameter. */

  /* Other basic data types */
  typedef signed char             int8;
  typedef signed short int        int16;
  typedef signed long int         int32;

  typedef unsigned char           uint8;
  typedef unsigned short int      uint16;
  typedef unsigned long int       uint32;
#endif





void MCUC1_Init(void);
/*
** ===================================================================
**     Method      :  Init (component McuLibConfig)
**
**     Description :
**         Driver initialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void MCUC1_Deinit(void);
/*
** ===================================================================
**     Method      :  Deinit (component McuLibConfig)
**
**     Description :
**         Driver deinitialization method
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END MCUC1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif
/* ifndef __MCUC1_H */
/*!
** @}
*/
