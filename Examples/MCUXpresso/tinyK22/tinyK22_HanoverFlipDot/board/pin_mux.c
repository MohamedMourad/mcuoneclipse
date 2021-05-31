/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MK22FN512xxx12
package_id: MK22FN512VLH12
mcu_data: ksdk2_0
processor_version: 9.0.0
pin_labels:
- {pin_num: '45', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS/LPUART0_CTS_b, label: LED_BLUE, identifier: LED_BLUE}
- {pin_num: '57', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b/LPUART0_RTS_b, label: LANE0, identifier: DMA0;LANE0}
- {pin_num: '58', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b/LPUART0_CTS_b, label: LANE1, identifier: DMA1;LANE1}
- {pin_num: '59', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/LPUART0_RX/I2C0_SCL, label: LANEq, identifier: LANE2}
- {pin_num: '64', pin_signal: PTD7/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, label: BLE_MISO, identifier: LANE7;BLE_MISO}
- {pin_num: '63', pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, label: BLE_MOSI, identifier: LANE6;BLE_MOSI}
- {pin_num: '62', pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, label: BLE_CLK, identifier: LANE5;BLE_CLK}
- {pin_num: '61', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, label: LANE4, identifier: LANE5;LANE4}
- {pin_num: '60', pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/LPUART0_TX/I2C0_SDA, label: LANE3, identifier: LANE3}
- {pin_num: '37', pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/FTM0_FLT3, label: RS458_RTS, identifier: RS458_RTS}
- {pin_num: '40', pin_signal: PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/EWM_OUT_b, label: RS485_TX, identifier: RS485_TX}
- {pin_num: '39', pin_signal: PTB16/SPI1_SOUT/UART0_RX/FTM_CLKIN0/FB_AD17/EWM_IN, label: RS485_RX, identifier: RS485_RX}
- {pin_num: '49', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FB_AD11/CMP1_OUT/LPUART0_TX, label: LPUART_TX, identifier: LPUART_TX}
- {pin_num: '46', pin_signal: CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT/I2S0_TX_BCLK/LPUART0_RX, label: LPUART_RX, identifier: LPUART_RX}
- {pin_num: '56', pin_signal: ADC1_SE7b/PTC11/LLWU_P11/I2C1_SDA/FTM3_CH7/FB_RW_b, label: BLE_CS, identifier: BLE_CS}
- {pin_num: '55', pin_signal: ADC1_SE6b/PTC10/I2C1_SCL/FTM3_CH6/I2S0_RX_FS/FB_AD5, label: BLE_IRQ, identifier: BLE_IRQ}
- {pin_num: '2', pin_signal: ADC1_SE5a/PTE1/LLWU_P0/SPI1_SOUT/UART1_RX/I2C1_SCL/SPI1_SIN, label: ESP32_RX}
- {pin_num: '1', pin_signal: ADC1_SE4a/PTE0/CLKOUT32K/SPI1_PCS1/UART1_TX/I2C1_SDA/RTC_CLKOUT, label: ESP32_TX}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
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
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '45', peripheral: GPIOC, signal: 'GPIO, 2', pin_signal: ADC0_SE4b/CMP1_IN0/PTC2/SPI0_PCS2/UART1_CTS_b/FTM0_CH1/FB_AD12/I2S0_TX_FS/LPUART0_CTS_b, direction: OUTPUT,
    gpio_init_state: 'true'}
  - {pin_num: '57', peripheral: GPIOD, signal: 'GPIO, 0', pin_signal: PTD0/LLWU_P12/SPI0_PCS0/UART2_RTS_b/FTM3_CH0/FB_ALE/FB_CS1_b/FB_TS_b/LPUART0_RTS_b, identifier: LANE0,
    direction: OUTPUT}
  - {pin_num: '58', peripheral: GPIOD, signal: 'GPIO, 1', pin_signal: ADC0_SE5b/PTD1/SPI0_SCK/UART2_CTS_b/FTM3_CH1/FB_CS0_b/LPUART0_CTS_b, identifier: LANE1, direction: OUTPUT}
  - {pin_num: '59', peripheral: GPIOD, signal: 'GPIO, 2', pin_signal: PTD2/LLWU_P13/SPI0_SOUT/UART2_RX/FTM3_CH2/FB_AD4/LPUART0_RX/I2C0_SCL, direction: OUTPUT}
  - {pin_num: '60', peripheral: GPIOD, signal: 'GPIO, 3', pin_signal: PTD3/SPI0_SIN/UART2_TX/FTM3_CH3/FB_AD3/LPUART0_TX/I2C0_SDA, direction: OUTPUT}
  - {pin_num: '61', peripheral: GPIOD, signal: 'GPIO, 4', pin_signal: PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FB_AD2/EWM_IN/SPI1_PCS0, identifier: LANE4, direction: OUTPUT}
  - {pin_num: '49', peripheral: LPUART0, signal: TX, pin_signal: PTC4/LLWU_P8/SPI0_PCS0/UART1_TX/FTM0_CH3/FB_AD11/CMP1_OUT/LPUART0_TX, pull_select: up, pull_enable: enable}
  - {pin_num: '46', peripheral: LPUART0, signal: RX, pin_signal: CMP1_IN1/PTC3/LLWU_P7/SPI0_PCS1/UART1_RX/FTM0_CH2/CLKOUT/I2S0_TX_BCLK/LPUART0_RX, pull_select: up,
    pull_enable: enable}
  - {pin_num: '40', peripheral: UART0, signal: TX, pin_signal: PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/EWM_OUT_b, direction: OUTPUT, pull_select: up, pull_enable: enable}
  - {pin_num: '39', peripheral: UART0, signal: RX, pin_signal: PTB16/SPI1_SOUT/UART0_RX/FTM_CLKIN0/FB_AD17/EWM_IN, pull_select: up, pull_enable: enable}
  - {pin_num: '37', peripheral: UART0, signal: RTS, pin_signal: ADC0_SE12/PTB2/I2C0_SCL/UART0_RTS_b/FTM0_FLT3, pull_select: up, pull_enable: enable}
  - {pin_num: '64', peripheral: SPI1, signal: SIN, pin_signal: PTD7/UART0_TX/FTM0_CH7/FTM0_FLT1/SPI1_SIN, identifier: BLE_MISO}
  - {pin_num: '63', peripheral: SPI1, signal: SOUT, pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI0_PCS3/UART0_RX/FTM0_CH6/FB_AD0/FTM0_FLT0/SPI1_SOUT, identifier: BLE_MOSI}
  - {pin_num: '62', peripheral: SPI1, signal: SCK, pin_signal: ADC0_SE6b/PTD5/SPI0_PCS2/UART0_CTS_b/FTM0_CH5/FB_AD1/EWM_OUT_b/SPI1_SCK, identifier: BLE_CLK, direction: OUTPUT}
  - {pin_num: '56', peripheral: GPIOC, signal: 'GPIO, 11', pin_signal: ADC1_SE7b/PTC11/LLWU_P11/I2C1_SDA/FTM3_CH7/FB_RW_b, direction: OUTPUT}
  - {pin_num: '55', peripheral: GPIOC, signal: 'GPIO, 10', pin_signal: ADC1_SE6b/PTC10/I2C1_SCL/FTM3_CH6/I2S0_RX_FS/FB_AD5, direction: INPUT}
  - {pin_num: '2', peripheral: UART1, signal: RX, pin_signal: ADC1_SE5a/PTE1/LLWU_P0/SPI1_SOUT/UART1_RX/I2C1_SCL/SPI1_SIN, pull_select: up, pull_enable: enable}
  - {pin_num: '1', peripheral: UART1, signal: TX, pin_signal: ADC1_SE4a/PTE0/CLKOUT32K/SPI1_PCS1/UART1_TX/I2C1_SDA/RTC_CLKOUT, pull_select: up, pull_enable: enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t LED_BLUE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 1U
    };
    /* Initialize GPIO functionality on pin PTC2 (pin 45)  */
    GPIO_PinInit(BOARD_INITPINS_LED_BLUE_GPIO, BOARD_INITPINS_LED_BLUE_PIN, &LED_BLUE_config);

    gpio_pin_config_t BLE_IRQ_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC10 (pin 55)  */
    GPIO_PinInit(BOARD_INITPINS_BLE_IRQ_GPIO, BOARD_INITPINS_BLE_IRQ_PIN, &BLE_IRQ_config);

    gpio_pin_config_t BLE_CS_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC11 (pin 56)  */
    GPIO_PinInit(BOARD_INITPINS_BLE_CS_GPIO, BOARD_INITPINS_BLE_CS_PIN, &BLE_CS_config);

    gpio_pin_config_t LANE0_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD0 (pin 57)  */
    GPIO_PinInit(BOARD_INITPINS_LANE0_GPIO, BOARD_INITPINS_LANE0_PIN, &LANE0_config);

    gpio_pin_config_t LANE1_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD1 (pin 58)  */
    GPIO_PinInit(BOARD_INITPINS_LANE1_GPIO, BOARD_INITPINS_LANE1_PIN, &LANE1_config);

    gpio_pin_config_t LANE2_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD2 (pin 59)  */
    GPIO_PinInit(BOARD_INITPINS_LANE2_GPIO, BOARD_INITPINS_LANE2_PIN, &LANE2_config);

    gpio_pin_config_t LANE3_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD3 (pin 60)  */
    GPIO_PinInit(BOARD_INITPINS_LANE3_GPIO, BOARD_INITPINS_LANE3_PIN, &LANE3_config);

    gpio_pin_config_t LANE4_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTD4 (pin 61)  */
    GPIO_PinInit(BOARD_INITPINS_LANE4_GPIO, BOARD_INITPINS_LANE4_PIN, &LANE4_config);

    /* PORTB16 (pin 39) is configured as UART0_RX */
    PORT_SetPinMux(BOARD_INITPINS_RS485_RX_PORT, BOARD_INITPINS_RS485_RX_PIN, kPORT_MuxAlt3);

    PORTB->PCR[16] = ((PORTB->PCR[16] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullUp));

    /* PORTB17 (pin 40) is configured as UART0_TX */
    PORT_SetPinMux(BOARD_INITPINS_RS485_TX_PORT, BOARD_INITPINS_RS485_TX_PIN, kPORT_MuxAlt3);

    PORTB->PCR[17] = ((PORTB->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                      /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                       * corresponding PE field is set. */
                      | (uint32_t)(kPORT_PullUp));

    /* PORTB2 (pin 37) is configured as UART0_RTS_b */
    PORT_SetPinMux(BOARD_INITPINS_RS458_RTS_PORT, BOARD_INITPINS_RS458_RTS_PIN, kPORT_MuxAlt3);

    PORTB->PCR[2] = ((PORTB->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullUp));

    /* PORTC10 (pin 55) is configured as PTC10 */
    PORT_SetPinMux(BOARD_INITPINS_BLE_IRQ_PORT, BOARD_INITPINS_BLE_IRQ_PIN, kPORT_MuxAsGpio);

    /* PORTC11 (pin 56) is configured as PTC11 */
    PORT_SetPinMux(BOARD_INITPINS_BLE_CS_PORT, BOARD_INITPINS_BLE_CS_PIN, kPORT_MuxAsGpio);

    /* PORTC2 (pin 45) is configured as PTC2 */
    PORT_SetPinMux(BOARD_INITPINS_LED_BLUE_PORT, BOARD_INITPINS_LED_BLUE_PIN, kPORT_MuxAsGpio);

    /* PORTC3 (pin 46) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_INITPINS_LPUART_RX_PORT, BOARD_INITPINS_LPUART_RX_PIN, kPORT_MuxAlt7);

    PORTC->PCR[3] = ((PORTC->PCR[3] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullUp));

    /* PORTC4 (pin 49) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_INITPINS_LPUART_TX_PORT, BOARD_INITPINS_LPUART_TX_PIN, kPORT_MuxAlt7);

    PORTC->PCR[4] = ((PORTC->PCR[4] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullUp));

    /* PORTD0 (pin 57) is configured as PTD0 */
    PORT_SetPinMux(BOARD_INITPINS_LANE0_PORT, BOARD_INITPINS_LANE0_PIN, kPORT_MuxAsGpio);

    /* PORTD1 (pin 58) is configured as PTD1 */
    PORT_SetPinMux(BOARD_INITPINS_LANE1_PORT, BOARD_INITPINS_LANE1_PIN, kPORT_MuxAsGpio);

    /* PORTD2 (pin 59) is configured as PTD2 */
    PORT_SetPinMux(BOARD_INITPINS_LANE2_PORT, BOARD_INITPINS_LANE2_PIN, kPORT_MuxAsGpio);

    /* PORTD3 (pin 60) is configured as PTD3 */
    PORT_SetPinMux(BOARD_INITPINS_LANE3_PORT, BOARD_INITPINS_LANE3_PIN, kPORT_MuxAsGpio);

    /* PORTD4 (pin 61) is configured as PTD4 */
    PORT_SetPinMux(BOARD_INITPINS_LANE4_PORT, BOARD_INITPINS_LANE4_PIN, kPORT_MuxAsGpio);

    /* PORTD5 (pin 62) is configured as SPI1_SCK */
    PORT_SetPinMux(BOARD_INITPINS_BLE_CLK_PORT, BOARD_INITPINS_BLE_CLK_PIN, kPORT_MuxAlt7);

    /* PORTD6 (pin 63) is configured as SPI1_SOUT */
    PORT_SetPinMux(BOARD_INITPINS_BLE_MOSI_PORT, BOARD_INITPINS_BLE_MOSI_PIN, kPORT_MuxAlt7);

    /* PORTD7 (pin 64) is configured as SPI1_SIN */
    PORT_SetPinMux(BOARD_INITPINS_BLE_MISO_PORT, BOARD_INITPINS_BLE_MISO_PIN, kPORT_MuxAlt7);

    /* PORTE0 (pin 1) is configured as UART1_TX */
    PORT_SetPinMux(PORTE, 0U, kPORT_MuxAlt3);

    PORTE->PCR[0] = ((PORTE->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullUp));

    /* PORTE1 (pin 2) is configured as UART1_RX */
    PORT_SetPinMux(PORTE, 1U, kPORT_MuxAlt3);

    PORTE->PCR[1] = ((PORTE->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullUp));

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_UART0TXSRC_MASK | SIM_SOPT5_UART1TXSRC_MASK)))

                  /* UART 0 transmit data source select: UART0_TX pin. */
                  | SIM_SOPT5_UART0TXSRC(SOPT5_UART0TXSRC_UART_TX)

                  /* UART 1 transmit data source select: UART1_TX pin. */
                  | SIM_SOPT5_UART1TXSRC(SOPT5_UART1TXSRC_UART_TX));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
