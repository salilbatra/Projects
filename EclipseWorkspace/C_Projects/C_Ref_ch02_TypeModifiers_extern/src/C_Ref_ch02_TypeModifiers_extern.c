/*
 ============================================================================
 Name        : C_Ref_ch02_TypeModifiers_extern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	fflush(stdout);
	extern first, last;					//use global variables
	printf("%d\n%d", first, last);
	return 0;
}

//global declaration of first and last

int first=10, last=20;

