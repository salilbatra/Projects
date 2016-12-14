/*
 ============================================================================
 Name        : C_Ref_ch02_Operators_BitwiseOperation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
fflush(stdout);
unsigned int i =10;
int j=0;

for (j=0; j<20; j++){
	i = i << 10;
	printf("Left shift %d : %d\n", j,i);
}

for (j=0; j<20; j++){
	i = i >> 10;
	printf("Right shift %d : %d\n", j,i);
}

return 0;
}
