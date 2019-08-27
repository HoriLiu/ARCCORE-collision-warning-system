
/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 * 
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with  
 * the terms contained in the written license agreement between you and ArcCore, 
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as 
 * published by the Free Software Foundation and appearing in the file 
 * LICENSE.GPL included in the packaging of this file or here 
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/

/* Generator version: 1.1.0
 * AUTOSAR version:   4.0.3
 */

#ifndef IOHWAB_DIGITAL_H_
#define IOHWAB_DIGITAL_H_

#include "Std_Types.h"

#define IOHWAB_SIGNAL_DIGITALFRONTLED ((IoHwAb_SignalType)0)
#define IOHWAB_SIGNAL_DIGITALREARLED ((IoHwAb_SignalType)1)
#define IOHWAB_SIGNAL_DIGITALSONARECHO ((IoHwAb_SignalType)2)
#define IOHWAB_SIGNAL_DIGITALSONARTRIG ((IoHwAb_SignalType)3)

Std_ReturnType IoHwAb_Digital_Write_DigitalFrontLED(IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Write_DigitalRearLED(IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Write_DigitalSonarTrig(IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Read_DigitalSonarEcho(IoHwAb_LevelType *value, IoHwAb_StatusType *status);

Std_ReturnType IoHwAb_Digital_Write(IoHwAb_SignalType signal, IoHwAb_LevelType newValue);
Std_ReturnType IoHwAb_Digital_Read(IoHwAb_SignalType signal, IoHwAb_LevelType *value, IoHwAb_StatusType *status);


#endif /* IOHWAB_DIGITAL_H_ */


