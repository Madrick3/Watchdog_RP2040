/**
 * 
* @file "Watchdog_RP2040.h"
* @author Madrick3
* @brief Stub for Timer implementation
* 
* @COMPONENT: Watchdog_RP2040
* @VERSION: 00.00.00
*/
/************************************************************
  Version History
  -----------------------------------------------------------
  Revision |  Author   |  Change ID  |  Description
  00.00.00 |  AUTHOR   |  DRAFT      |  Initial Creation
************************************************************/

/************************************************************
  DEFINES
************************************************************/

typedef enum Watchdog_RP2040_Status_Tag {
  WATCHDOG_RP2040_UNINIT = 0,
  WATCHDOG_RP2040_INIT = 1,
  WATCHDOG_RP2040_INVALID = 0xFF
} tWatchdog_RP2040_Status;

#define Watchdog_RP2040_IsInit() WATCHDOG_RP2040_INIT

/************************************************************
  INCLUDES
************************************************************/