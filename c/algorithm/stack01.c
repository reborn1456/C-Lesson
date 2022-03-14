#include <stdio.h>

#define STACKSIZE 8  //stack size

int stack[STACKSIZE];  //array for stack
int sp = 0;  //stack-pointer(used as the number for array)

void display(void);
int push(int d);
int pop(int *pd);

main()
{
	int key, data, result;
	char c;

	do
	{
		printf("\ni for push and o for pop > ");
		key = getche();
		printf("\n");

		//push
		if (key == 'i')
		{
			printf("Input data > ");
			scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\nThe stack is full \n");
			}
			else
			{
				display();
			}
		}

		//pop
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\nThe stack is empty \n");
			}
			else
			{
				printf("\nTook data(%d) from the stack \n", data);
				display();
			}
		}
		scanf("%*c", &c);
	} while (key != 'e');

	system("pause");
	return 0;
}

//Function to display the stack
void display(void)
{
	int i;

	printf("\nData that is in the stack now\n");
	for (i = 0; i < STACKSIZE; i++)
	{
		printf("stack[%2d] is %5d", i, stack[i]);
		if (i == sp)
		{
			printf("<- sp is now here (now sp is %d)", sp);
		}
		printf("\n");
	}
	return;
}

//Function for pushing data into stack
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }

	stack[sp] = d;
	sp++;

	return 0;
}

//Function for poping(getting out) data from stack
int pop(int *pd)
{
	if (sp <= 0) { return -1; }

	sp--;
	*pd = stack[sp];
	stack[sp] = 0;

	return 0;
}