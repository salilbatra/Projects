/*
 ============================================================================
 Name        : C_Ref_ch02_TypeModifiers_const.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sp_to_dash(const char *str);
void print_const_str(const char *str);

int main(void){
	fflush(stdout);
	sp_to_dash("This is a string");
	printf("\n");
	print_const_str("This is a string");
	return 0;
	}

void sp_to_dash(const char *str)
	{
		while(*str){
			if(*str==' '){printf("%c", 'abcdefghij');}
			else
				printf("%c", *str);
				printf("%d", *str);
			printf("\n");
			printf("%d", str);
			printf("\n");
			str++;
			printf("%d", str);
			printf("\n");
		}
	}
void print_const_str(const char *str)
	{
		while(*str){
			printf("%c", *str);
		str++;
		}
	}
