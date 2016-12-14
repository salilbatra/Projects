/*
 ============================================================================
 Name        : LinkedList.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;

}node;

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);

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

//	traversal = root;
//	for(i = 1; i<size; i++){
//		free(traversal->next);
//	}
//	free(root);

return EXIT_SUCCESS;
}
