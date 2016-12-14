/*
 ============================================================================
 Name        : PointerTests.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
typedef struct database{
	int id, age;
	float salary;
}database;
*/

typedef struct node{
	int data;
	struct node *next;

}node;



int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
/*
	database emp;
	database *ptr;
	ptr = &emp;
	ptr->id= 10;
	emp.age = 40;
	emp.salary = 200.12;

	printf("%d\n%d\n%f", ptr->age, ptr->id, ptr->salary);
*/

//	printf("Enter a number : ");
//	scanf("%d", &x);
//
//	p = &x;
//
//	printf("Pointer p points to : %d", *p);
//	printf("\np = &x is p = %d", p);


	node *root;
	node *traversal;
	int size, i, data;
	root = (malloc)(sizeof(node));
	root->next = 0;
	traversal = root;
	printf("Enter the total number of list elements: ");
	scanf("%d", &size);
	printf("Enter the elements separated by newline: ");
	for(i = 0; i<size; i++){
		scanf("%d", &data);
		traversal->data = data;
		if(i == size-1) {traversal->next = 0; break;}
		traversal->next = (malloc)(sizeof(node));
		traversal = traversal->next;

	}

	traversal = root;
	for(i = 0; i<size; i++){
		printf("%d\t",traversal->data);
		traversal = traversal->next;
	}
//
//	traversal = root;
//	for(i = 1; i<size-1; i++){
//		free(traversal->next);
//	}
//	free(root);
return EXIT_SUCCESS;
}