/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <IntCtrl_Cfg.h>
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

#define SYSCLK_DIVISION                SYS_CLOCK_DEVIDED
#define PWMCLK_DIVISION                USE_PWM_CLOCK_DIV
#define SYS_DIV_OPTION                 SYSCTL_SYSDIV_4
#define PWM_DIV_OPTION                 SYSCTL_PWMDIV_2
#define PLL_DIV_OPTION                 SYSCLK_PLLOUT_DIVIDED
#define PLL_BYPASS_OPTION              PLL_Normal
#define PORTA_BUS_CFG                  AHB_A
#define PORTB_BUS_CFG                  AHB_B
#define PORTC_BUS_CFG                  AHB_C
#define PORTD_BUS_CFG                  AHB_D
#define PORTE_BUS_CFG                  AHB_E
#define PORTF_BUS_CFG                  AHB_F


#define WD0_CLK_GATE                   ENABLE
#define WD1_CLK_GATE                   ENABLE
#define TMR0_16_32_CLK_GATE            ENABLE
#define TMR1_16_32_CLK_GATE            ENABLE
#define TMR2_16_32_CLK_GATE            ENABLE
#define TMR3_16_32_CLK_GATE            ENABLE
#define TMR4_16_32_CLK_GATE            ENABLE
#define TMR5_16_32_CLK_GATE            ENABLE
#define GPIOA_CLK_GATE                 ENABLE
#define GPIOB_CLK_GATE                 ENABLE
#define GPIOC_CLK_GATE                 ENABLE
#define GPIOD_CLK_GATE                 ENABLE
#define GPIOE_CLK_GATE                 ENABLE
#define GPIOF_CLK_GATE                 ENABLE
#define UDMA_CLK_GATE                  ENABLE
#define HIB_CLK_GATE                   ENABLE
#define UART0_CLK_GATE                 ENABLE
#define UART1_CLK_GATE                 ENABLE
#define UART2_CLK_GATE                 ENABLE
#define UART3_CLK_GATE                 ENABLE
#define UART4_CLK_GATE                 ENABLE
#define UART5_CLK_GATE                 ENABLE
#define UART6_CLK_GATE                 ENABLE
#define UART7_CLK_GATE                 ENABLE
#define SSI0_CLK_GATE                  ENABLE
#define SSI1_CLK_GATE                  ENABLE
#define SSI2_CLK_GATE                  ENABLE
#define SSI3_CLK_GATE                  ENABLE
#define I2C0_CLK_GATE                  ENABLE
#define I2C1_CLK_GATE                  ENABLE
#define I2C2_CLK_GATE                  ENABLE
#define I2C3_CLK_GATE                  ENABLE
#define USB_CLK_GATE                   ENABLE
#define CAN0_CLK_GATE                  ENABLE
#define CAN1_CLK_GATE                  ENABLE
#define ADC0_CLK_GATE                  ENABLE
#define ADC1_CLK_GATE                  ENABLE
#define AnalogComp_CLK_GATE            ENABLE
#define PWM0_CLK_GATE                  ENABLE
#define PWM1_CLK_GATE                  ENABLE
#define QEI0_CLK_GATE                  ENABLE
#define QEI1_CLK_GATE                  ENABLE
#define EEPROM_CLK_GATE                ENABLE
#define TMR0_32_64_CLK_GATE            ENABLE
#define TMR1_32_64_CLK_GATE            ENABLE
#define TMR2_32_64_CLK_GATE            ENABLE
#define TMR3_32_64_CLK_GATE            ENABLE
#define TMR4_32_64_CLK_GATE            ENABLE
#define TMR5_32_64_CLK_GATE            ENABLE


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

 
#endif  /* INTCTRL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: IntCtrl_Cfg.h
 *********************************************************************************************************************/
