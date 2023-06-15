#include "button.h"


uint8_t BUTTON_READ	(enu_port_pin_num_t enu_a_port_pin_num, enu_port_num_t enu_a_port_num)
{
	uint8_t u8_l_status=False;

	

	if(!GPIO_READ_PIN(enu_a_port_num,enu_a_port_pin_num))
	{
		u8_l_status=True;
		while(!GPIO_READ_PIN(enu_a_port_num,enu_a_port_pin_num));	
	}
	
	return u8_l_status;

	
}
/*********************************************************************************************/
void BUTTON_INIT(const str_port_config_t*str_a_port_configPTR)
{

	GPIO_INIT_PIN(str_a_port_configPTR);

}