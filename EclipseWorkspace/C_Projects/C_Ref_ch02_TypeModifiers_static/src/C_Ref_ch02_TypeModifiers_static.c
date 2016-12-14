/*
 ============================================================================
 Name        : C_Ref_ch02_TypeModifiers_static.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

 int series_num;
void series_start();
int series(void);

int series(void){
	puts("in function series");
	series_num = series_num + 23;
	return series_num;
}

void series_start(void){
	int seed;
	puts("in function series start");
	printf("Please enter the seed:");
	scanf("%d", &seed);
	series_num=seed;
}

int main(void){

	setvbuf(stdout, NULL, _IONBF, 0);
	int i = 0;
	series_start();
	series();
	for(i = 0;i<10;i++){series();}

	printf("The series number is: %d", series_num);
	return series_num;
}

