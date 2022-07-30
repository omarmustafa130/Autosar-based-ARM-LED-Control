
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  Port_Lcfg.c
 *        \brief  
 *
 *      \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../MCAL/Inc/Port.h"
#include "Port_Cfg.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


PinConfig ConfiguredPin [43] = {
/*A0*/   { DIO, HIGH, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A5*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A6*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*A7*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B0*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B5*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B6*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*B7*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C0*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C5*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C6*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*C7*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D0*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D5*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D6*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*D7*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E0*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*E5*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*F0*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*F1*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*F2*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*F3*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0},
/*F4*/   { DIO, LOW, GPIO_OUTPUT, GPIO_OPEN_DRAIN_DISABLE, GPIO_2mA_DRIVE_DISABLE, GPIO_4mA_DRIVE_ENABLE, GPIO_8mA_DRIVE_DISABLE, GPIO_PULLUP_DISABLE , GPIO_PULLDOWN_DISABLE, 0, 0, 0, 0, 0}

};
