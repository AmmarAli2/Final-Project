/*
 * main.c
 *
 * Created: 5/29/2022 8:31:58 PM
 *  Author: Ammar
 */ 
#include "main.h"

int main(void)
{
	PWM0_Fast_Initialize();
	LCD_Initialize();
	LCD_Clear();
	uint8_t dutycycle = 50;
	/* Replace with your application code */
	while(1)
	{	
		PWM0_Fast_SetDutyCycle(dutycycle);
		_delay_ms(1000);
			LCD_Clear();
			LCD_Write_Number(dutycycle);
			LCD_Write_String((uint8_t*)" % DC 12Mhz");
			
	}
}
	
