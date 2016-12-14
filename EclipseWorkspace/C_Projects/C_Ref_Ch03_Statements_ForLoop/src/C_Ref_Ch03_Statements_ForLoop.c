/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_ForLoop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void converge(char *targ, char *src);

int main(void) {
	char target[80] = "###############################";
	converge (target, "I am learning how to code in C!");
	printf("Final String:%s\n", target);
	return 0;
}

void converge(char *targ, char*src){
	int i,j;
	printf("%s\n", targ);
	for(i = 0 , j = strlen(src); i<=j; i++, j--){
	targ[i] = src[i];
	targ[j] = src[j];
	printf("%s\n", targ);
	}
}
