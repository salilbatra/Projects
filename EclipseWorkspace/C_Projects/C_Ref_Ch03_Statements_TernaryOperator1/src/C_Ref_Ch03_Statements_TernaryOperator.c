/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_TernaryOperator.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);

	int isqrd, i;
	printf("Enter the number to be squared: ");
	scanf("%d", &i);

	isqrd = i>0 ? (i*i) : -(i*i);
	printf("\nThe squared number for %d is: %d", i, isqrd);
	return 0;
}


//throws 0 for -0?
