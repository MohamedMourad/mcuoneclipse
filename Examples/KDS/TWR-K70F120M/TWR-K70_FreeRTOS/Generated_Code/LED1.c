/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LED1.h
**     Project     : TWR-K70_FreeRTOS
**     Processor   : MK70FN1M0VMJ12
**     Component   : LED
**     Version     : Component 01.078, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2021-06-02, 10:26, # CodeGen: 4
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LED1
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         On         - void LED1_On(void);
**         Off        - void LED1_Off(void);
**         Neg        - void LED1_Neg(void);
**         Get        - uint8_t LED1_Get(void);
**         Put        - void LED1_Put(uint8_t val);
**         SetRatio16 - void LED1_SetRatio16(uint16_t ratio);
**         Deinit     - void LED1_Deinit(void);
**         Init       - void LED1_Init(void);
**
** * Copyright (c) 2013-2020, Erich Styger
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
** @file LED1.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LED1_module LED1 module documentation
**  @{
*/         

/* MODULE LED1. */

#include "LED1.h"

/*
** ===================================================================
**     Method      :  On (component LED)
**
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_On(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  Off (component LED)
**
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_Off(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  Neg (component LED)
**
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_Neg(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  Get (component LED)
**
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/
/*
uint8_t LED1_Get(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  Put (component LED)
**
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/
/*
void LED1_Put(uint8_t val)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  Init (component LED)
**
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void LED1_Init(void)
{
#if MCUC1_CONFIG_SDK_VERSION_USED != MCUC1_CONFIG_SDK_PROCESSOR_EXPERT
  LEDpin1_Init();
#endif
  LED1_Off();
}

/*
** ===================================================================
**     Method      :  Deinit (component LED)
**
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void LED1_Deinit(void)
{
#if MCUC1_CONFIG_SDK_VERSION_USED != MCUC1_CONFIG_SDK_PROCESSOR_EXPERT
  LEDpin1_Deinit();
#endif
}

/*
** ===================================================================
**     Method      :  SetRatio16 (component LED)
**
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/
void LED1_SetRatio16(uint16_t ratio)
{
  /* on/off LED: binary on or off */
  if (ratio<(0xffff/2)) {
    LED1_Off();
  } else {
    LED1_On();
  }
}

/* END LED1. */

/*!
** @}
*/
