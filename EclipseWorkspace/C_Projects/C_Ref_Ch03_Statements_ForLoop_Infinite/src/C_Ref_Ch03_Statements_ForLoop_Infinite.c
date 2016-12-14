/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_ForLoop_Infinite.c
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
	char ch='\0';
	for( ; ;){
		ch = getchar(); //get a character
		if(ch=='A') break; //exit loop
	}

	printf("You entered A");
	return EXIT_SUCCESS;
}
