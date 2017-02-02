#include "address_map_nios2.h"
#include <stdio.h>

int main(void) {
	volatile int * HEX3_HEX0_ptr	= (int *) 0xFF200020; //HEX3-0 LED address
	volatile int * HEX5_HEX4_ptr	= (int *) 0xFF200030; //HEX5-4 LED address
	
	int counter = 0; int out = 0; int some;
	int F = 0x00000071;
	int O = 0x0000713F;
	int U = 0x00713F3E;
	int R = 0x713F3E31;
	int b = 0x3F3E3100;
	int E = 0x3E310079;
	int Y = 0x3100796E;
	int E1 = 0x00796E79;
	int S = 0x796E796D;
	
	*(HEX3_HEX0_ptr) = 0;
	*(HEX5_HEX4_ptr) = 0;
	
	while (1) {
		out = 0;
		some = 0;
		
		out = out | F;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | O;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | U;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | R;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | b;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | E;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | Y;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | E1;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | S;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		while (some < 4) {
			out = out << 8;
			*HEX3_HEX0_ptr = out;
			
			while (counter < 15000000) {
				counter++;
			}
			counter = 0; 
			some++;
		}
		
	}
}