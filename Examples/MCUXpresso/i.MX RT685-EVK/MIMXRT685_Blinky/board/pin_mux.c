/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v15.0
processor: MIMXRT685S
package_id: MIMXRT685SFVKB
mcu_data: ksdk2_0
processor_version: 15.0.1
board: MIMXRT685-EVK
pin_labels:
- {pin_num: B1, pin_signal: PIO1_9/FC5_SSEL3/SCT0_GPI7/UTICK_CAP1/CTIMER1_MAT3/ADC0_12, label: WL_REG_ON, identifier: BOARD_INITPINS_WL_REG_ON;WL_REG_ON}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iopctl.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33, enableClock: 'true'}
- pin_list:
  - {pin_num: G4, peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI_DATA, pin_signal: PIO0_2/FC0_RXD_SDA_MOSI_DATA/CTIMER0_MAT2/I2S_BRIDGE_DATA_IN/SEC_PIO0_2, pupdena: disabled,
    pupdsel: pullDown, ibena: enabled, slew_rate: normal, drive: normal, amena: disabled, odena: disabled, iiena: disabled}
  - {pin_num: G2, peripheral: FLEXCOMM0, signal: TXD_SCL_MISO_WS, pin_signal: PIO0_1/FC0_TXD_SCL_MISO_WS/CTIMER0_MAT1/I2S_BRIDGE_WS_IN/SEC_PIO0_1, pupdena: disabled,
    pupdsel: pullDown, ibena: disabled, slew_rate: normal, drive: normal, amena: disabled, odena: disabled, iiena: disabled}
  - {pin_num: A2, peripheral: GPIO, signal: 'PIO0, 26', pin_signal: PIO0_26/FC3_SSEL2/SCT0_GPI6/SCT0_OUT6/CTIMER_INP7/SEC_PIO0_26/ADC0_3, pupdena: disabled, pupdsel: pullDown,
    ibena: disabled, slew_rate: normal, drive: normal, amena: disabled, odena: disabled, iiena: disabled}
  - {pin_num: J3, peripheral: GPIO, signal: 'PIO0, 10', pin_signal: PIO0_10/FC1_CTS_SDA_SSEL0/SCT0_GPI7/SCT0_OUT7/CTIMER1_MAT3/FC0_SSEL2/SEC_PIO0_10, pupdena: disabled,
    pupdsel: pullDown, ibena: enabled, slew_rate: normal, drive: normal, amena: disabled, odena: disabled, iiena: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M33 */
void BOARD_InitPins(void)
{

    const uint32_t port0_pin1_config = (/* Pin is configured as FC0_TXD_SCL_MISO_WS */
                                        IOPCTL_PIO_FUNC1 |
                                        /* Disable pull-up / pull-down function */
                                        IOPCTL_PIO_PUPD_DI |
                                        /* Enable pull-down function */
                                        IOPCTL_PIO_PULLDOWN_EN |
                                        /* Disable input buffer function */
                                        IOPCTL_PIO_INBUF_DI |
                                        /* Normal mode */
                                        IOPCTL_PIO_SLEW_RATE_NORMAL |
                                        /* Normal drive */
                                        IOPCTL_PIO_FULLDRIVE_DI |
                                        /* Analog mux is disabled */
                                        IOPCTL_PIO_ANAMUX_DI |
                                        /* Pseudo Output Drain is disabled */
                                        IOPCTL_PIO_PSEDRAIN_DI |
                                        /* Input function is not inverted */
                                        IOPCTL_PIO_INV_DI);
    /* PORT0 PIN1 (coords: G2) is configured as FC0_TXD_SCL_MISO_WS */
    IOPCTL_PinMuxSet(IOPCTL, 0U, 1U, port0_pin1_config);

    const uint32_t SW2 = (/* Pin is configured as PIO0_10 */
                          IOPCTL_PIO_FUNC0 |
                          /* Disable pull-up / pull-down function */
                          IOPCTL_PIO_PUPD_DI |
                          /* Enable pull-down function */
                          IOPCTL_PIO_PULLDOWN_EN |
                          /* Enables input buffer function */
                          IOPCTL_PIO_INBUF_EN |
                          /* Normal mode */
                          IOPCTL_PIO_SLEW_RATE_NORMAL |
                          /* Normal drive */
                          IOPCTL_PIO_FULLDRIVE_DI |
                          /* Analog mux is disabled */
                          IOPCTL_PIO_ANAMUX_DI |
                          /* Pseudo Output Drain is disabled */
                          IOPCTL_PIO_PSEDRAIN_DI |
                          /* Input function is not inverted */
                          IOPCTL_PIO_INV_DI);
    /* PORT0 PIN10 (coords: J3) is configured as PIO0_10 */
    IOPCTL_PinMuxSet(IOPCTL, BOARD_INITPINS_SW2_PORT, BOARD_INITPINS_SW2_PIN, SW2);

    const uint32_t port0_pin2_config = (/* Pin is configured as FC0_RXD_SDA_MOSI_DATA */
                                        IOPCTL_PIO_FUNC1 |
                                        /* Disable pull-up / pull-down function */
                                        IOPCTL_PIO_PUPD_DI |
                                        /* Enable pull-down function */
                                        IOPCTL_PIO_PULLDOWN_EN |
                                        /* Enables input buffer function */
                                        IOPCTL_PIO_INBUF_EN |
                                        /* Normal mode */
                                        IOPCTL_PIO_SLEW_RATE_NORMAL |
                                        /* Normal drive */
                                        IOPCTL_PIO_FULLDRIVE_DI |
                                        /* Analog mux is disabled */
                                        IOPCTL_PIO_ANAMUX_DI |
                                        /* Pseudo Output Drain is disabled */
                                        IOPCTL_PIO_PSEDRAIN_DI |
                                        /* Input function is not inverted */
                                        IOPCTL_PIO_INV_DI);
    /* PORT0 PIN2 (coords: G4) is configured as FC0_RXD_SDA_MOSI_DATA */
    IOPCTL_PinMuxSet(IOPCTL, 0U, 2U, port0_pin2_config);

    const uint32_t LED_BLUE = (/* Pin is configured as PIO0_26 */
                               IOPCTL_PIO_FUNC0 |
                               /* Disable pull-up / pull-down function */
                               IOPCTL_PIO_PUPD_DI |
                               /* Enable pull-down function */
                               IOPCTL_PIO_PULLDOWN_EN |
                               /* Disable input buffer function */
                               IOPCTL_PIO_INBUF_DI |
                               /* Normal mode */
                               IOPCTL_PIO_SLEW_RATE_NORMAL |
                               /* Normal drive */
                               IOPCTL_PIO_FULLDRIVE_DI |
                               /* Analog mux is disabled */
                               IOPCTL_PIO_ANAMUX_DI |
                               /* Pseudo Output Drain is disabled */
                               IOPCTL_PIO_PSEDRAIN_DI |
                               /* Input function is not inverted */
                               IOPCTL_PIO_INV_DI);
    /* PORT0 PIN26 (coords: A2) is configured as PIO0_26 */
    IOPCTL_PinMuxSet(IOPCTL, BOARD_INITPINS_LED_BLUE_PORT, BOARD_INITPINS_LED_BLUE_PIN, LED_BLUE);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
