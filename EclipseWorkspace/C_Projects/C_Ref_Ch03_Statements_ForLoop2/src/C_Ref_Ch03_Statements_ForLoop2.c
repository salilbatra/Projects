/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_ForLoop2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prompt(void);
int readNum(void);
int sqrNum(int num);

int main(void) {
setvbuf(stdout, NULL, _IONBF, 0);
int t;
for(prompt(); t=readNum(); prompt()){							// why the loop exists when the value entered is 0?
	sqrNum(t);
}
return EXIT_SUCCESS;
}


int prompt(void){
	printf("Enter the number: ");
	return 0;
}

int readNum(void){
	int t;
	scanf("%d", &t);
	return t;
}

int sqrNum(int num){
	printf(" Square of the number is: %d\n", num*num);
	return num;
}
