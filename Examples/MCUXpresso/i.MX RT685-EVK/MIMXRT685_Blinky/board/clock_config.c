/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/
/*
 * How to set up clock using clock driver functions:
 *
 * 1. Setup clock sources.
 *
 * 2. Set up all selectors to provide selected clocks.
 *
 * 3. Set up all dividers.
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v13.0
processor: MIMXRT685S
package_id: MIMXRT685SFVKB
mcu_data: ksdk2_0
processor_version: 15.0.1
board: MIMXRT685-EVK
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

#include "fsl_power.h"
#include "fsl_clock.h"
#include "clock_config.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_FlexspiClockSafeConfig
 * Description   : FLEXSPI clock source safe configuration weak function. 
 *                 Called before clock source(Such as PLL, Main clock) configuration.
 * Note          : Users need override this function to change FLEXSPI clock source to stable source when executing
 *                 code on FLEXSPI memory(XIP). If XIP, the function should runs in RAM and move the FLEXSPI clock source
 *                 to an stable clock to avoid instruction/data fetch issue during clock updating.
 *END**************************************************************************/
__attribute__ ((weak)) void BOARD_FlexspiClockSafeConfig(void)
{
}

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_SetFlexspiClock
 * Description   : This function should be overridden if executing code on FLEXSPI memory(XIP).
 *                 To Change FLEXSPI clock, should move to run from RAM and then configure FLEXSPI clock source.
 *                 After the clock is changed and stable,  move back to run on FLEXSPI. 
 * Param src     : FLEXSPI clock source.
 * Param divider : FLEXSPI clock divider.
 *END**************************************************************************/
__attribute__ ((weak)) void BOARD_SetFlexspiClock(uint32_t src, uint32_t divider)
{
     CLKCTL0->FLEXSPIFCLKSEL = CLKCTL0_FLEXSPIFCLKSEL_SEL(src);
     CLKCTL0->FLEXSPIFCLKDIV |= CLKCTL0_FLEXSPIFCLKDIV_RESET_MASK; /* Reset the divider counter */
     CLKCTL0->FLEXSPIFCLKDIV = CLKCTL0_FLEXSPIFCLKDIV_DIV(divider - 1);
     while ((CLKCTL0->FLEXSPIFCLKDIV) & CLKCTL0_FLEXSPIFCLKDIV_REQFLAG_MASK)
     {
     }
}

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/
void BOARD_InitBootClocks(void)
{
    BOARD_BootClockRUN();
}

/*******************************************************************************
 ********************** Configuration BOARD_BootClockRUN ***********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockRUN
called_from_default_init: true
outputs:
- {id: FLEXSPI_clock.outFreq, value: 1056/19 MHz}
- {id: LPOSC1M_clock.outFreq, value: 1 MHz}
- {id: OSTIMER_clock.outFreq, value: 1 MHz}
- {id: System_clock.outFreq, value: 4752/19 MHz}
- {id: TRACE_clock.outFreq, value: 4752/19 MHz}
- {id: WAKE_32K_clock.outFreq, value: 31.25 kHz}
settings:
- {id: AUDIOPLL0_PFD0_CLK_GATE, value: Enabled}
- {id: PFC0DIV_HALT, value: Enable}
- {id: PLL0_PFD0_CLK_GATE, value: Enabled}
- {id: PLL0_PFD2_CLK_GATE, value: Enabled}
- {id: SYSCON.AUDIOPLL0CLKSEL.sel, value: SYSCON.SYSOSCBYPASS}
- {id: SYSCON.AUDIOPLL0_PFD0_DIV.scale, value: '26', locked: true}
- {id: SYSCON.AUDIOPLLCLKDIV.scale, value: '15', locked: true}
- {id: SYSCON.AUDIO_PLL0_PFD0_MUL.scale, value: '18', locked: true}
- {id: SYSCON.FLEXSPIFCLKDIV.scale, value: '9', locked: true}
- {id: SYSCON.FLEXSPIFCLKSEL.sel, value: SYSCON.MAINPLLCLKDIV}
- {id: SYSCON.FRGPLLCLKDIV.scale, value: '12', locked: true}
- {id: SYSCON.MAINCLKSELB.sel, value: SYSCON.MAINPLLCLKDIV}
- {id: SYSCON.PFC0DIV.scale, value: '2', locked: true}
- {id: SYSCON.PFC1DIV.scale, value: '1', locked: true}
- {id: SYSCON.PLL0.denom, value: '1'}
- {id: SYSCON.PLL0.div, value: '22', locked: true}
- {id: SYSCON.PLL0.num, value: '0'}
- {id: SYSCON.PLL0_PFD0_DIV.scale, value: '19', locked: true}
- {id: SYSCON.PLL0_PFD0_MUL.scale, value: '18', locked: true}
- {id: SYSCON.PLL0_PFD2_DIV.scale, value: '24', locked: true}
- {id: SYSCON.PLL0_PFD2_MUL.scale, value: '18', locked: true}
- {id: SYSCON.PLL1.denom, value: '27000', locked: true}
- {id: SYSCON.PLL1.div, value: '22'}
- {id: SYSCON.PLL1.num, value: '5040', locked: true}
- {id: SYSCON.SYSCPUAHBCLKDIV.scale, value: '2'}
- {id: SYSCON.SYSPLL0CLKSEL.sel, value: SYSCON.SYSOSCBYPASS}
- {id: SYSCTL_PDRUNCFG_AUDIOPLL_CFG, value: 'No'}
- {id: SYSCTL_PDRUNCFG_SYSPLL_CFG, value: 'No'}
- {id: SYSCTL_PDRUNCFG_SYSXTAL_CFG, value: Power_up}
- {id: XTAL_LP_Enable, value: LowPowerMode}
sources:
- {id: SYSCON.XTAL.outFreq, value: 24 MHz, enabled: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockRUN configuration
 ******************************************************************************/
const clock_sys_pll_config_t g_sysPllConfig_BOARD_BootClockRUN =
    {
        .sys_pll_src = kCLOCK_SysPllXtalIn,       /* OSC clock */
        .numerator = 0,                           /* Numerator of the SYSPLL0 fractional loop divider isnull */
        .denominator = 1,                         /* Denominator of the SYSPLL0 fractional loop divider isnull */
        .sys_pll_mult = kCLOCK_SysPllMult22       /* Divide by 22 */
    };
const clock_audio_pll_config_t g_audioPllConfig_BOARD_BootClockRUN =
    {
        .audio_pll_src = kCLOCK_AudioPllXtalIn,   /* OSC clock */
        .numerator = 5040,                        /* Numerator of the Audio PLL fractional loop divider is null */
        .denominator = 27000,                     /* Denominator of the Audio PLL fractional loop divider is null */
        .audio_pll_mult = kCLOCK_AudioPllMult22   /* Divide by 22 */
    };
/*******************************************************************************
 * Code for BOARD_BootClockRUN configuration
 ******************************************************************************/
void BOARD_BootClockRUN(void)
{
    /* Configure LPOSC clock*/
    POWER_DisablePD(kPDRUNCFG_PD_LPOSC);                   /* Power on LPOSC (1MHz) */
    /* Configure FFRO clock */
    POWER_DisablePD(kPDRUNCFG_PD_FFRO);                    /* Power on FFRO (48/60MHz) */
    CLOCK_EnableFfroClk(kCLOCK_Ffro48M);                   /* Enable FFRO clock*/
    /* Configure SFRO clock */
    POWER_DisablePD(kPDRUNCFG_PD_SFRO);                    /* Power on SFRO (16MHz) */
    CLOCK_EnableSfroClk();                                 /* Wait until SFRO stable */

    /* Call function BOARD_FlexspiClockSafeConfig() to move FLEXSPI clock to a stable clock source to avoid
       instruction/data fetch issue when updating PLL and Main clock if XIP(execute code on FLEXSPI memory). */
    BOARD_FlexspiClockSafeConfig();

    /* Let CPU run on ffro for safe switching */
    CLOCK_AttachClk(kFFRO_to_MAIN_CLK);

    /* Configure SYSOSC clock source */
    POWER_DisablePD(kPDRUNCFG_PD_SYSXTAL);                 /* Power on SYSXTAL */
    POWER_UpdateOscSettlingTime(BOARD_SYSOSC_SETTLING_US); /* Updated XTAL oscillator settling time */
    CLOCK_EnableSysOscClk(true, true, BOARD_SYSOSC_SETTLING_US); /* Enable system OSC */
    CLOCK_SetXtalFreq(BOARD_XTAL_SYS_CLK_HZ);              /* Sets external XTAL OSC freq */

    /* Configure SysPLL0 clock source */
    CLOCK_InitSysPll(&g_sysPllConfig_BOARD_BootClockRUN);
    CLOCK_InitSysPfd(kCLOCK_Pfd0, 19);                /* Enable MAIN PLL clock */
    CLOCK_InitSysPfd(kCLOCK_Pfd2, 24);                /* Enable AUX0 PLL clock */

    /* Configure Audio PLL clock source */
    CLOCK_InitAudioPll(&g_audioPllConfig_BOARD_BootClockRUN);
    CLOCK_InitAudioPfd(kCLOCK_Pfd0, 26);              /* Enable Audio PLL clock */

    CLOCK_SetClkDiv(kCLOCK_DivSysCpuAhbClk, 2U);         /* Set SYSCPUAHBCLKDIV divider to value 2 */

    /* Set up clock selectors - Attach clocks to the peripheries */
    CLOCK_AttachClk(kMAIN_PLL_to_MAIN_CLK);                 /* Switch MAIN_CLK to MAIN_PLL */

    /* Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAudioPllClk, 15U);         /* Set AUDIOPLLCLKDIV divider to value 15 */
    CLOCK_SetClkDiv(kCLOCK_DivPfc0Clk, 2U);         /* Set PFC0DIV divider to value 2 */
    CLOCK_SetClkDiv(kCLOCK_DivPllFrgClk, 12U);         /* Set FRGPLLCLKDIV divider to value 12 */

    /* Call weak function BOARD_SetFlexspiClock() to set user configured clock source/divider for FLEXSPI. */
    BOARD_SetFlexspiClock(1U, 9U);

    /*!< Set SystemCoreClock variable. */
    SystemCoreClock = BOARD_BOOTCLOCKRUN_CORE_CLOCK;
}

