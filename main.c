/*
 * main.c
 *
 * Created: 2/4/2025 10:25:47 AM
 *  Author: Vitor
 */ 

#include <xc.h>
#define F_CPU 16000000
#include <util/delay.h>
int main(void)
{
	DDRB = (1<<5); //configura PB5 como saída
	PORTB &= ~(1<<5); //desliga PB5
	while(1)
	{
		PORTB |= 0b00100000; // aciona PB5
		_delay_ms(500);
		PORTB &= 0b11011111; // desaciona PB5
		_delay_ms(500);
	}
}