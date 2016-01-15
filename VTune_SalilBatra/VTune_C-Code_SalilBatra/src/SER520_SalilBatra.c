/*
 ============================================================================
 Name        : SER520_SalilBatra.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define ROW 100000
#define COLUMN 2

/*
void nullify1DArray(char array[]){
	int i;
	for(i = 0; i<ROW; i++){
		array[i] = NULL;
	}
}

void nullify2DArray(char array[][COLUMN]){
	int i,j;
	for(i = 0; i < ROW; i++){
	for(j = 0; j < COLUMN; j++)
		array[i][j] = NULL;
	}
}

*/



int sizeOfArray(int array[]){
	int i;
	for(i = 0; i < ROW; i++){
		if(array[i] == NULL)
			return i;
	}
return i;
}

int sizeOf2DArray(int array[][COLUMN]){
	int i;
	for(i = 0;i < ROW; i++){
		if(array[i][0] == NULL)
			return i;
		}
}

void nullify1DArray(int array[]){
	int i;
	for(i = 0; i<ROW; i++){
		array[i] = NULL;
	}
}

void nullify2DArray(int array[][COLUMN]){
	int i,j;
	for(i = 0; i < ROW; i++){
	for(j = 0; j < COLUMN; j++)
		array[i][j] = NULL;
	}
}

int createBin(int x, int array[][COLUMN]){
	int i;
	for(i=0;i<sizeOf2DArray(array); i++){
		if(array[i][0] == x){
			array[i][1]++;
			return 0;
			}
	}
array[i][0] = x;
array[i][1] = 1;
}


void print2DArray(int array[][COLUMN]){
	int i, n;
	n = sizeOf2DArray(array);
	printf("Element\tCount");
		for(i = 0; i < n; i++){
			if(array[i][0] != NULL){
			printf("\n%d", array[i][0]);
			printf("\t%d", array[i][1]);
		}
	}
printf("\n");
}

int calculateSum(int array[]){
int i=0,j=0,n;
n = sizeOfArray(array);
	for(i=0;i<n;i++){
		j = j + array[i];
	}
return j;
}
float calculateMean(int array[]){
int i=0,j,n;
float mean;
n = sizeOfArray(array);
j = calculateSum(array);
mean = j/n;
return mean;
}

float calculateVariance(int array[]){
	int i, j, mean, k, l=0;
	float variance;
	mean = calculateMean(array);
	j = sizeOfArray(array);
	for(i = 0; i < j; i++){
	k = pow((array[i] - mean), 2);
	l = l + k;
	}
variance = (l / (j-1));
return variance;
}

float calculateStandardDeviation(int array[]){
float standardDeviation;
standardDeviation = sqrt(calculateVariance(array));
return standardDeviation;
}

int modeOfElements(int array[][COLUMN]){
	int i,max,mode;
max = 0;
	for(i=0;i<sizeOf2DArray(array);i++){
		if(array[i][1]>max){
			max=array[i][1];
			mode=array[i][0];
			}
	}
return mode;
}

// Insertion Sort
void insertionSort(int numberOfElements, int numbers[]){
	int i, j,key;
	for(i = 1; i < numberOfElements; i++){
		key = numbers[i];
		j = i-1;
		while((j >= 0) && (numbers[j] > key)){
			numbers[j+1] = numbers[j];
			j = j - 1;
			}
		numbers[j+1] = key;
	}
}

//Selection Sort
int findMin(int numberOfElements, int start, int numbers[]){
	int index = start;
	int i;
	for(i=start;i<numberOfElements;i++){
		if(numbers[i]<numbers[index]){
			index = i;
			}
		}
return index;
}

void swapPosition(int index, int i, int numbers[]){
	int temp;
	temp = numbers[i];
	numbers[i]=numbers[index];
	numbers[index]=temp;
}

void selectionSort(int numberOfElements, int numbers[]){
	int i, start=0, index;
	for(i=0; i<numberOfElements; i++){
		start = i;
		index = findMin(numberOfElements,start,numbers);
		swapPosition(index,i,numbers);
	}

}


int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	int i=0,fileElements[ROW], bin[ROW][COLUMN], x, numberOfElements = 0;
	nullify1DArray(fileElements);
	nullify2DArray(bin);
	FILE *fp = fopen("C:\\Users\\c13341\\Desktop\\numbers.csv", "r");
	if (fp == NULL)
		printf("Cannot open the file");
	while(!feof(fp)){
		fscanf(fp, "%d", &x);
		fileElements[i] = x;
		i++;
		}
for(i=0;i<sizeOfArray(fileElements);i++){
		x = fileElements[i];
		numberOfElements++;
		createBin(x,bin);
	}
//float variance =
calculateVariance(fileElements);
//float mean =
calculateMean(fileElements);
//float standardDeviation =
calculateStandardDeviation(fileElements);

//print2DArray(bin);

//printf("The size of Bin is = %d\n", sizeOf2DArray(bin));
//printf("The mean of the elements is = %f\n", mean);
//printf("The Variance of Elements is = %f\n", variance);
//printf("The Standard Deviation is = %f\n", standardDeviation);
//printf("The Mode of elements is = %d\n", modeOfElements(bin));

insertionSort(numberOfElements,fileElements);
//printf("Insertion Sort Output\n");
//for(i=0;i<numberOfElements;i++)
//	printf("%d\t", fileElements[i]);
//printf("\n");

selectionSort(numberOfElements, fileElements);
//printf("\n Selection Sort Output\n");
//for(i=0;i<numberOfElements;i++)
//	printf("%d\t", fileElements[i]);

fclose(fp);

return EXIT_SUCCESS;
}
