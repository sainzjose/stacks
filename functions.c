#include "header.h"

int menu() {

	int option;

	puts("\n***MENU***");
	puts("1) push element");
	puts("2) pop element");
	puts("3) peek element");
	puts("4) print elements");
	puts("5) exit program");
	scanf("%d", &option);

	return option;
}

int isEmpty(Stack* top_ref) {

	int status = 0;

	if(top_ref == NULL) {

		status++;
	}
	return status;
}

void push(Stack** top_ref, int new_data) {

	Stack* newNode = (Stack*)malloc(sizeof(Stack));
	newNode->data = new_data;
	newNode->next = *top_ref;
	*top_ref = newNode;
	printf("%d has been pushed!", new_data);
}

void pop(Stack** top_ref, int* popped) {

	Stack* temp = *top_ref;

	if(isEmpty(*top_ref)) {

		printf("Stack is empty\n");
		return;
	}
	*top_ref = (*top_ref)->next;
	*popped = temp->data;
	free(temp);
}

int peek(Stack* top_ref) {

	if(!isEmpty(top_ref)) {

		return top_ref->data;
	}
	return INT_MIN;
}

void printStack(Stack* top_ref) {

	while(top_ref->next != NULL) {

		printf("%d\n", top_ref->data);
		top_ref = top_ref->next;
	}
}