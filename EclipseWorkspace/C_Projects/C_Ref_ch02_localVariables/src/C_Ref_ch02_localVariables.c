/*
 ============================================================================
 Name        : C_Ref_ch02_localVariables.c
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
	int x= 10;
	if(x==10){
		int x;
		x=99;
		printf("I am X declared in the code block for if statement %d\n", x);
	}

	printf("I am x decalred outside if block and i am in the main function %d\n", x);
}
