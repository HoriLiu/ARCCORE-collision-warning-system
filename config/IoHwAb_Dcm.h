
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

#ifndef IOHWAB_DCM_H_
#define IOHWAB_DCM_H_

/* Digital signal: DigitalFrontLED */
Std_ReturnType IoHwAb_Dcm_DigitalFrontLED(uint8 action, uint8 *value);
Std_ReturnType IoHwAb_Dcm_Read_DigitalFrontLED(uint8 *value);

/* Digital signal: DigitalRearLED */
Std_ReturnType IoHwAb_Dcm_DigitalRearLED(uint8 action, uint8 *value);
Std_ReturnType IoHwAb_Dcm_Read_DigitalRearLED(uint8 *value);

/* Digital signal: DigitalSonarEcho */
Std_ReturnType IoHwAb_Dcm_DigitalSonarEcho(uint8 action, uint8 *value);
Std_ReturnType IoHwAb_Dcm_Read_DigitalSonarEcho(uint8 *value);

/* Digital signal: DigitalSonarTrig */
Std_ReturnType IoHwAb_Dcm_DigitalSonarTrig(uint8 action, uint8 *value);
Std_ReturnType IoHwAb_Dcm_Read_DigitalSonarTrig(uint8 *value);




#endif /* IOHWAB_DCM_H_ */

