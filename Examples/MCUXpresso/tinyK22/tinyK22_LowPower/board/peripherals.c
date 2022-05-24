/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v11.0
processor: MK22FN512xxx12
package_id: MK22FN512VLH12
mcu_data: ksdk2_0
processor_version: 11.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 93c877a6-9f8b-4a3f-8c70-0430afa765cb
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common_57579b9ac814fe26bf95df0a384c36b6'
- global_gpio_adapter_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * LPTMR0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LPTMR0'
- type: 'lptmr'
- mode: 'LPTMR_GENERAL'
- custom_name_enabled: 'false'
- type_id: 'lptmr_48552e76e8733b28a9c768b6d8d4fefa'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPTMR0'
- config_sets:
  - fsl_lptmr:
    - lptmr_config:
      - timerMode: 'kLPTMR_TimerModeTimeCounter'
      - pinSelect: 'ALT.0'
      - pinPolarity: 'kLPTMR_PinPolarityActiveHigh'
      - enableFreeRunning: 'false'
      - bypassPrescaler: 'true'
      - prescalerClockSource: 'kLPTMR_PrescalerClock_1'
      - clockSource: 'BOARD_BootClockRUN'
      - value: 'kLPTMR_Prescale_Glitch_0'
      - timerPeriod: '1000000 us'
    - enableInterrupt: 'false'
    - interrupt:
      - IRQn: 'LPTMR0_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'QS_LPTMR_1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lptmr_config_t LPTMR0_config = {
  .timerMode = kLPTMR_TimerModeTimeCounter,
  .pinSelect = kLPTMR_PinSelectInput_0,
  .pinPolarity = kLPTMR_PinPolarityActiveHigh,
  .enableFreeRunning = false,
  .bypassPrescaler = true,
  .prescalerClockSource = kLPTMR_PrescalerClock_1,
  .value = kLPTMR_Prescale_Glitch_0
};

static void LPTMR0_init(void) {
  /* Initialize the LPTMR */
  LPTMR_Init(LPTMR0_PERIPHERAL, &LPTMR0_config);
  /* Set LPTMR period */
  LPTMR_SetTimerPeriod(LPTMR0_PERIPHERAL, LPTMR0_TICKS);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  LPTMR0_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
