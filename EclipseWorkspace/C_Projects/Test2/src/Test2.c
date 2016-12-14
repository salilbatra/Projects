/*
 ============================================================================
 Name        : Test2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

void printRootTable(int n) {
	int i=0;
	for(i=1;i<=n;i++){
		printf("%2d %7.3f\n", i, sqrt(i));
	}
}

	int main(){
		int x;
		printf("Ener number to plot sqrt table\n");
		scanf("%d",&x);
		printRootTable(x);
		return 0;
	}
