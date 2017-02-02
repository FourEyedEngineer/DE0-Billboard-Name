#include "address_map_nios2.h"
#include <stdio.h>

int main(void) {
	volatile int * HEX3_HEX0_ptr	= (int *) 0xFF200020; //HEX3-0 LED address
	volatile int * HEX5_HEX4_ptr	= (int *) 0xFF200030; //HEX5-4 LED address
	
	int counter = 0; int some;
	int A = 0x00000077;
	int B = 0x0000777C;
	int C = 0x00777C58;
	int D = 0x777C585E;
	int out = 0;
	*(HEX3_HEX0_ptr) = 0;
	*(HEX5_HEX4_ptr) = 0;
	
	while (1) {
		out = 0;
		some = 0;
		
		out = out | A;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | B;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | C;
		*HEX3_HEX0_ptr = out;
		while (counter < 15000000) {
			counter++;
		}
		counter = 0;
		
		out = (out << 8) | D;
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