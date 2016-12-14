/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_Switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void enterWord(){

}

int main(void) {
	char word;
	printf("Enter a word to check spelling");
	scanf("%c", &word);
	char ch;
	printf("1. Check Spelling\n");
	printf("2. Correct Spelling Errors\n");
	printf("3. Display Spelling Errors\n");
	printf("Strike any other key to skip\n");
	printf("  Enter your Choice  \n");
	ch = getchar(); 							/*read the selection for the keyboard*/

	switch (ch) {

	case '1':
		check_spelling(word);
		break;

	case '2':
		correct_spelling(word);
		break;

	case '3':
		display_errors(word);
		break;

	default:
		printf("No selection made");

	}


}
