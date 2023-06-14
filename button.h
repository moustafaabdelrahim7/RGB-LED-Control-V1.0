#ifndef button_H_
#define button_H_

/********************************************************
												includes
***********************************************************/
#include "services.h"

#include "port.h"


/********************************************************
												prototypes
***********************************************************/

uint8_t BUTTON_READ	(enu_port_pin_num_t enu_port_pin_num, enu_port_num_t enu_port_num);
void BUTTON_INIT(const str_port_config_t*str_port_configPTR);

#endif