/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Invert input: Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1). */
#define PIO0_19_INV_INVERTED 0x01u
/*!
 * @brief Invert input: Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1). */
#define PIO0_4_INV_INVERTED 0x01u
/*!
 * @brief Invert input: Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1). */
#define PIO0_8_INV_INVERTED 0x01u
/*!
 * @brief Invert input: Input inverted (HIGH on pin reads as 0, LOW on pin reads as 1). */
#define PIO0_9_INV_INVERTED 0x01u

/*! @name PIO0_24 (number 20), CN1[10]/PIO0_24
  @{ */
#define BOARD_INITPINS_DEBUG_UART_RX_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_DEBUG_UART_RX_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_25 (number 19), CN1[11]/PIO0_25
  @{ */
#define BOARD_INITPINS_DEBUG_UART_TX_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN 25U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_DEBUG_UART_TX_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_29 (number 38), CN1[15]/PIO0_29/DACOUT_1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M1_IN4_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M1_IN4_GPIO_PIN_MASK (1U << 29U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M1_IN4_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M1_IN4_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M1_IN4_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_28 (number 7), CN1[14]/PIO0_28/WKTCLKIN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M1_IN3_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M1_IN3_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M1_IN3_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M1_IN3_PIN 28U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M1_IN3_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_27 (number 17), CN1[13]/PIO0_27
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M1_IN2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M1_IN2_GPIO_PIN_MASK (1U << 27U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M1_IN2_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M1_IN2_PIN 27U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M1_IN2_PIN_MASK (1U << 27U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_26 (number 18), CN1[12]/PIO0_26
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M1_IN1_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M1_IN1_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M1_IN1_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M1_IN1_PIN 26U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M1_IN1_PIN_MASK (1U << 26U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_23 (number 39), CN1[8]/PIO0_23/ADC_3/ACMP_I4
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M0_IN4_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M0_IN4_GPIO_PIN_MASK (1U << 23U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M0_IN4_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M0_IN4_PIN 23U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M0_IN4_PIN_MASK (1U << 23U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_22 (number 43), CN1[7]/PIO0_22/ADC_4
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M0_IN3_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M0_IN3_GPIO_PIN_MASK (1U << 22U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M0_IN3_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M0_IN3_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M0_IN3_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_21 (number 44), CN1[6]/PIO0_21/ADC_5
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M0_IN2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M0_IN2_GPIO_PIN_MASK (1U << 21U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M0_IN2_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M0_IN2_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M0_IN2_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_20 (number 45), CN1[5]/PIO0_20/ADC_6
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M0_IN1_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M0_IN1_GPIO_PIN_MASK (1U << 20U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M0_IN1_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M0_IN1_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M0_IN1_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_19 (number 46), CN1[4]/PIO0_19/ADC_7
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_MAG0_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_MAG0_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_MAG0_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_MAG0_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_MAG0_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO0_11 (number 12), CN1[24]/PIO0_11/I2C0_SDA
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M2_IN3_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M2_IN3_GPIO_PIN_MASK (1U << 11U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M2_IN3_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M2_IN3_PIN 11U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M2_IN3_PIN_MASK (1U << 11U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_16 (number 15), CN1[1]/PIO0_16
  @{ */
#define BOARD_INITPINS_RS485_TXRX_EN_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_RS485_TXRX_EN_PIN 16U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RS485_TXRX_EN_PIN_MASK (1U << 16U)      /*!<@brief PORT pin mask */
                                                               /* @} */

/*! @name PIO0_17 (number 48), CN1[2]/PIO0_17/ADC_9/DACOUT_0
  @{ */
#define BOARD_INITPINS_RS485_TX_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_RS485_TX_PIN 17U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RS485_TX_PIN_MASK (1U << 17U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO0_18 (number 47), CN1[3]/PIO0_18/ADC_8
  @{ */
#define BOARD_INITPINS_RS458_RX_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_RS458_RX_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_RS458_RX_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO0_9 (number 25), CN1[18]/CN1[22]/PIO0_9/XTALOUT
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_MAG1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_MAG1_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_MAG1_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_MAG1_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_MAG1_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_8 (number 26), CN1[19]/CN1[21]/PIO0_8/XTALIN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_MAG2_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_MAG2_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_MAG2_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_MAG2_PIN 8U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_MAG2_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_10 (number 13), CN1[23]/PIO0_10/I2C0_SCL
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M2_IN4_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M2_IN4_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M2_IN4_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M2_IN4_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M2_IN4_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_13 (number 2), CN1[26]/PIO0_13/ADC_10
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M2_IN2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M2_IN2_GPIO_PIN_MASK (1U << 13U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M2_IN2_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M2_IN2_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M2_IN2_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_14 (number 37), CN1[27]/PIO0_14/ACMP_I3/ADC_2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M2_IN1_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M2_IN1_GPIO_PIN_MASK (1U << 14U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M2_IN1_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M2_IN1_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M2_IN1_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_4 (number 6), K3/CN1[35]/PIO0_4/ADC_11/TRSTN/WAKEUP
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_MAG3_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_MAG3_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_MAG3_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_MAG3_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_MAG3_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_0 (number 36), CN1[39]/PIO0_0/ACMP_I1/TDO
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M3_IN1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M3_IN1_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M3_IN1_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M3_IN1_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M3_IN1_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_1 (number 24), CN1[38]/PIO0_1/ACMP_I2/CLKIN/TDI
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M3_IN2_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M3_IN2_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M3_IN2_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M3_IN2_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M3_IN2_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_6 (number 34), CN1[33]/PIO0_6/ADC_1/ACMPVREF
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M3_IN3_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M3_IN3_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M3_IN3_PORT 0U                  /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M3_IN3_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M3_IN3_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_15 (number 22), CN1[28]/PIO0_15
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_M3_IN4_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_M3_IN4_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_M3_IN4_PORT 0U                   /*!<@brief PORT device index: 0 */
#define BOARD_INITPINS_M3_IN4_PIN 15U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_M3_IN4_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M0P */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
