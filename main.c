#include "header.h"

int main() {

	Stack* root = NULL;
	int value, option;

	do {

		option = menu();
		system("clear");

		if(option < 6 || option > 0) {

			switch(option) {

				case 1: printf("Enter integer you want to push: ");
					scanf("%d", &value);
					push(&root, value);
					break;
				case 2: pop(&root, &value);
					printf("%d has been popped!\n", value);
					break;
				case 3: printf("Peek value is %d\n", peek(root));
					break;
				case 4: printf("Stack list: ");
					printStack(root);
					break;
				case 5: exit(0);
			}

			if (option != 5) {

				option = 0;
			}
		}

	} while(option < 1 || option > 5);

	

	return 0;
}