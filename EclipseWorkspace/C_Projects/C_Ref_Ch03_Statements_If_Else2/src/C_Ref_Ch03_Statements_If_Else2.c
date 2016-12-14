/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_If_Else2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) {

      setvbuf(stdout, NULL, _IONBF, 0);
	int magic;
	int guess;


for(int i=0; i<5; i++){
srand ( time(NULL) );
    magic = (rand() % 100);
	printf("\nGuess the magic number: ");
	scanf("%d", &guess);

	if(magic==guess) printf("***Right***\n");
	else if(guess>magic) {
		printf("Number missed by: %d\n", (guess-magic));
		printf("***Wrong***\n");
	}
		else if(guess<magic) printf("Number missed by: %d\n", (magic-guess));


	printf("The correct number was: %d\n", magic);

	}
	return 0;
}
