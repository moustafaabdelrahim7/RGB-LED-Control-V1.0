#ifndef led_H_
#define led_H_

/********************************************************
												includes
***********************************************************/
#include "services.h"
#include "port.h"

typedef enum 
{
	invalid_led_number=0,
	invalid_led_state=1,
}	enu_led_error_t;
/********************************************************
												prototypes
***********************************************************/

void LED_INIT(const str_port_config_t*str_a_port_configPTR);
enu_led_error_t LED_ON(enu_port_num_t enu_a_port_num,enu_port_pin_num_t enu_a_port_pin_num);
enu_led_error_t LED_OFF(enu_port_num_t enu_a_port_num,enu_port_pin_num_t enu_a_port_pin_num);
enu_led_error_t LED_TOGGEL(enu_port_num_t enu_a_port_num,enu_port_pin_num_t enu_a_port_pin_num);

#endif