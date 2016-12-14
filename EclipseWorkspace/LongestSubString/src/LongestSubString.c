/*
 ============================================================================
 Name        : subString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sizeOfCharArray(char array[]){
	int i = 0;
	while(array[i]!='\0'){i++;}
	return i;
}

void findLongestSubstring(char string1[], char string2[], char longestSubString[], int string1Size, int string2Size, int size){
	int i = 0, j = 0, k;
	for(i = 0; i < size; i++) {longestSubString[i] = '\0';}
	for(i = 0; i<size; i++){
		if(string1[i] == string2[j]){
			longestSubString[i] = string1[i];
			//if(j==string2Size) break;
		}
		j++;
	}

	for(i = 0; i < size; i++){
		printf("%c\n", longestSubString[i]);
	}
	//calculateAndPrintMaxContinuousString(string2, longestSubString, size);
}

void calculateAndPrintMaxContinuousString(char string2[], char longestSubString[], int size){
	int i, start = 0, returnStart, returnEnd, end = 0, maxLength = 0, counter = 0;
	for(i = 0; i < size; i++){
		if(longestSubString[i] != '\0'){
			start = i;
			}

		if(longestSubString[i] == '\0'){
			end = i-1;
			counter = end - start;
			returnStart = start;
			//start = 0;
			returnEnd = end;
			//end = 0;
		}
			if(counter > maxLength){
				maxLength = counter;
				//returnStart = start;
				//returnEnd = end;
				//counter = 0;
				//start = 0;
				//end = 0;
				//printf("Counter: %d, maxLength; %d, returnStart: %d, returnEnd: %d\n", counter, maxLength, returnStart, returnEnd);
			}
	}

	printf("Longest sub string is: ");
	for(i = returnStart; i<=returnEnd; i++){
		printf("%c", longestSubString[i]);
	}

}


int main(void) {
		int size = 10, i;
		char string1[size], string2[size], longestSubString[size];
		//get input for the first string and store in char mainString(string)
		scanf("%s", &string1);

		//get input string and store in char mainString(subString) to find if that string exists as substring.
		scanf("%s", &string2);

		int string1Size = sizeOfCharArray(string1);
		int string2Size = sizeOfCharArray(string2);
		findLongestSubstring(string1, string2, longestSubString, string1Size, string2Size, size);
		//char singleChar = findLongestSubstring(string1, string2, string1Size, string2Size, size);


return EXIT_SUCCESS;
}
