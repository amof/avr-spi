/*
 * SPI-example-Master.c
 *
 * Created: 30-12-15 16:24:23
 * Author : Julien
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>

#include "SPI/SPI.h"

int main(void)
{
	spi_init_master(SPI_MODE0, SPI_CLOCK_DIV64);
	sei();
	_delay_ms(100);
	spi_master_transmit("HELLO WORLD");
    while (1) 
    {
		;
    }
}

