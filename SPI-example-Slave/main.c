/************************************************************************
Title:    Example SPI-slave
Brief:	  This example shows how to receive and send data with SPI
Author:   Julien Delvaux
Software: Atmel Studio 7
Hardware: AVR 8-Bits, tested with ATmega1284P and ATmega88PA-PU
License:  GNU General Public License 3


LICENSE:
	Copyright (C) 2015 Julien Delvaux

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
    
************************************************************************/
#define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>

#include "SPI/SPI.h"

int main(void)
{
    spi_slave_init();
	sei();
	
	spi_puts("WORLD HELLO");
	
    while (1) 
    {
		;
    }
}

