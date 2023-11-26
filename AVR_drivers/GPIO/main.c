/*
 * GPIO.c
 *
 * Created: 11/26/2023 5:05:48 PM
 * Author : DELL
 */ 

#include "memory_map.h"
#include "Utils.h"

#include <util/delay.h>
int main(void)
{
    clearbit(ddrb,0);
	setbit(portb,0);
	setbit(ddra,0);
	
	while(1)
	{
		if (readbit(pinb,0)==0)
		{
				toggelbit(porta,0);
	            _delay_ms(500);			
		}
	
		
	
	}
}

