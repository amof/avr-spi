/*
 * SPI-example-Slave.c
 *
 * Created: 30-12-15 16:38:55
 * Author : Julien
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>

#include "SPI/SPI.h"

int main(void)
{
    spi_init_slave();
	sei();
	spi_puts("WORLD HELLO");
	
    while (1) 
    {
		;
    }
}

