/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_MagicNumber_TernaryOperator.c
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
	int magic, guess;


int i;
	for(i=0; i<=4; i++){
		printf("Guess a number: ");
		scanf("%d", &guess);
		srand ( time(NULL) );
		magic = (rand() % 100);
    magic == guess ? printf("****Right****\n") : printf("***Wrong***\n");
	}

	return 0;

}
