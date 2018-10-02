/*
 * main.c
 *
 *  Created on: Oct 2, 2018
 *      Author: RAZMI
 */

#include<avr/io.h>
#include<util/delay.h>

int main()
{
	DDRA = 0XF0;
	PORTA = 0x00;
	while(1)
	{
		PORTA = ~PORTA;
		_delay_ms(1000);
	}

	return 0;
}
