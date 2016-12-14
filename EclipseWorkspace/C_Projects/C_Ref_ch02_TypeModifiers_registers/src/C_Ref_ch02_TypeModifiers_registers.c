/*
 ============================================================================
 Name        : C_Ref_ch02_TypeModifiers_registers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int int_pwr(register int m, register int e){
	register int temp;
	temp = 1;

	for(; e; e--){
		printf("%d\n", temp);

		temp=temp*m;

		printf("%d\n", temp);
	}
		return temp;
}

int main(void) {
	int_pwr(2,2);

	return EXIT_SUCCESS;
}
