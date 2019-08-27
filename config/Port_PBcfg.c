
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

/* Generator version: 7.0.0
 * AUTOSAR version:   4.3.0
 */

#include "Port.h"




static const ArcPort_InputSelectConfigType PortInputSelectConfigData[] = {
#ifdef INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_17
	INPUT_SELECT_PORT_PIN_MODE_CAN_PAD_17, /* PCR	17	: PORT_PIN_MODE_CAN */
#endif
	{PORT_INVALID_REG, 0u} /* end marker */
};

/*lint -save -e835 -e9027 -e845 FALSE POSITIVE Zero given as right argument to | is okay (Generated code and depending on the defines this is true for some defines) */ 
static const ArcPort_PadConfigType PortPadConfigData[] = {
	{16, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(16, PORT_PIN_MODE_CAN, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	16	: PORT_PIN_MODE_CAN */
	{17, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(17, PORT_PIN_MODE_CAN, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  )}, /* PCR	17	: PORT_PIN_MODE_CAN */
	{98, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(98, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	98	: PORT_PIN_MODE_DIO */
	{99, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(99, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	99	: PORT_PIN_MODE_DIO */
	{174, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(174, PORT_PIN_MODE_DIO, 0) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_DOWN  )}, /* PCR	174	: PORT_PIN_MODE_DIO */
	{175, STD_OFF, STD_OFF, (PIN_FUNCTION_REG(175, PORT_PIN_MODE_DIO, 1) | PORT_IBE_ENABLE | PORT_SLEW_RATE_MED | PORT_PULL_NONE  | PORT_OUTPUT )}, /* PCR	175	: PORT_PIN_MODE_DIO */
	{PORT_INVALID_REG, STD_OFF, STD_OFF, 0u} /* end marker */
};
/*lint -restore */


static const ArcPort_OutConfigType PortOutConfigData[] = {
	{98u, PORT_GPDO_RESET}, /* GPDO	98 */
	{99u, PORT_GPDO_RESET}, /* GPDO	99 */
	{175u, PORT_GPDO_RESET}, /* GPDO	175 */
	{PORT_INVALID_REG, 0u} /* end marker */
};



const Port_ConfigType PortConfigData =
{
  .padConfig = PortPadConfigData,
  .outConfig = PortOutConfigData,
  .inputSelectConfig = PortInputSelectConfigData
};


