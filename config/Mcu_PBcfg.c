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

/* Generator version: 3.0.0
 * AUTOSAR version:   4.3.0
 */

#include "Mcu.h"



const struct Mcu_Hw_ClockSettings Mcu_Hw_ClockSettingConfig[] = {
	{
      .plldv_PREDIV    = 1, /* PLLDV_PREDIV */
	  .plldv_MFD    = 16,         /* PLLDV_MFD */  
      .plldv_RFDPHI    = 1,  /* PLLDV_RFDPHI */ 
      .plldv_RFDPHI1   = 2,  /* PLLDV_RFDPHI1 */     
	  
	  .pllfm_MODEN  = false,  /* PLLFM_MODEN */
	  .pllfm_MODPRD  = 0,  /* PLLFM_MODPRD */
	  .pllfm_INCSTP  = 0,  /* PLLFM_INCSTP */
	 },
};

const Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] = {
   {
      .McuClockReferencePointFrequency = 40000000UL,
      .Mcu_Hw_ClockSettings = &Mcu_Hw_ClockSettingConfig[0],
      
   }
};

const Mcu_ConfigType McuConfigData[] = {
   {
      .McuNumberOfMcuModes = 3u,
      .McuRamSectors = 0u,
      .McuClockSettings = 1u,
      .McuDefaultClockSettings = McuConf_McuClockSettingConfig_McuClockSettingConfig, 
      .McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
#if defined (USE_DEM)
      .McuClockFailure = DEM_EVENT_ID_NULL,
#endif
      .McuRamSectorSettingConfig = NULL
   }
};

