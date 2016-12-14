/*
 ============================================================================
 Name        : C_Ref_ch02_Expressions_Casts.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	for(i=1; i<=100; i++){
		printf("%d/3 is: %f\n", i, (float)i/3);
	}
}
