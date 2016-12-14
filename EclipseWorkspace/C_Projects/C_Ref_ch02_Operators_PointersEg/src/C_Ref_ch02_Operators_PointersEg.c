/*
 ============================================================================
 Name        : C_Ref_ch02_Operators_PointersEg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *m, target, source;
	source = 10;
	m = &source;
	target = *m;

	printf("%d\n%d\n", target, m);
	return 0;
}
