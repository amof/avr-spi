avr-spi
===================

### 1. Description

This library is compatible with AtMega1284P and Atmega88PA-PU families.

### 2. Hardware supported

This library has been tested with :

 - Atmega1284P @8MHz -> 125KHz
 - Atmega88PA-PU @8MHz -> 125KHz

### 3. Memory used

**Reference** : Atmega1284P blank solution 

    Program Memory Usage 	:	164 bytes   0,1 % Ful
    Data Memory Usage 	    :	0 bytes   	0,0 % Full

**Reference** : Atmega88PA-PU blank solution 

	Program Memory Usage 	:	76 bytes   0,9 % Full
	Data Memory Usage 		:	0 bytes   0,0 % Full

**Test1** : Atmega1284P in Master
	
	Program Memory Usage 	:	380 bytes   0,3 % Full +216 bytes
	Data Memory Usage 		:	134 bytes   0,8 % Full

**Test2** : Atmega88PA-PU in Slave

	Program Memory Usage 	:	238 bytes   2,9 % Full + 162 bytes
	Data Memory Usage 		:	133 bytes   13,0 % Full



### 4. Roadmap

 - Add multi-slave gestion on Master
 - Better memory usage
 - Multi-master gestion


