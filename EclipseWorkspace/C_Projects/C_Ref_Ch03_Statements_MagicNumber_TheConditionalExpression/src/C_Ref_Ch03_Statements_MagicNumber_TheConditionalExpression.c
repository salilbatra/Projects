/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_MagicNumber_TheConditionalExpression.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int a,b;
	printf("Enter numerator and denominator a and b respectively: ");
	scanf("%d%d", &a, &b);
	if(b) printf("The division is: %d ", a/b);
	else printf("Oops! Division by zero not allowed");

}

//if(b!=o) is redundant and potentially inefficient and is considered bad style. Since value of b is alone is sufficient to control the if,
//there is no need to test it against 0.
