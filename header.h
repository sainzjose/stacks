#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct stack {


	int data;
	struct stack* next;

} Stack;

int menu();

int isEmpty(Stack* top_ref);

void push(Stack** top_ref, int new_data);

void pop(Stack** top_ref, int* popped);

int peek(Stack* top_ref);

void printStack(Stack* top_ref);

