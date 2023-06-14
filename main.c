
#include "button.h"
#include "led.h"

extern const str_port_config_t	str_port_config_arr[4];


int main(void)
{	
	uint8_t u8_lv_Counter=True;
	LED_INIT(str_port_config_arr);
	BUTTON_INIT(str_port_config_arr);
	while(True)
	{
		if((BUTTON_READ(PORT_PIN_4,PORT_F)))
		{
				switch (u8_lv_Counter)
				{
						case 1:
						{
							LED_ON(PORT_F,PORT_PIN_1);
							u8_lv_Counter=2;
							break;
						}
						case 2:
						{
							LED_OFF(PORT_F,PORT_PIN_1);
							LED_ON(PORT_F,PORT_PIN_3);
							u8_lv_Counter=3;
							break;
						}
						case 3:
						{
							LED_OFF(PORT_F,PORT_PIN_1);
							LED_OFF(PORT_F,PORT_PIN_3);
							LED_ON(PORT_F,PORT_PIN_2);
							u8_lv_Counter=4;
							break;
						}
						case 4:
						{
							LED_ON(PORT_F,PORT_PIN_1);
							LED_ON(PORT_F,PORT_PIN_3);
							LED_ON(PORT_F,PORT_PIN_2);
							u8_lv_Counter=5;
							break;
						}
						case 5:
						{
							LED_OFF(PORT_F,PORT_PIN_1);
							LED_OFF(PORT_F,PORT_PIN_3);
							LED_OFF(PORT_F,PORT_PIN_2);
							u8_lv_Counter=1;
							break;
						}
				
				}
			
		}
	
	}
}
