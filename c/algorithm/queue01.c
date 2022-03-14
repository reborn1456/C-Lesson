#include <stdio.h>

#define QUEUESIZE 8

int queue[QUEUESIZE];
int head = 0;
int tail = 0;

//Function prototype
void display(void);
int enqueue(int d);
int dequeue(int *pd);

main()
{
	int key, data, result;
	char c;

	do
	{
		printf("\ni for enqueue and o for dequeue > ");
		key = getche();
		printf("\n");

		//enqueue
		if (key == 'i')
		{
			printf("Input data > ");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\nThe stack is full \n");
			}
			else
			{
				display();
			}
		}

		//dequeue
		if (key == 'o')
		{
			result = dequeue(&data);
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

//Function to display the queue
void display(void)
{
	int i;

	printf("\nData that is in the stack now\n");
	for (i = 0; i < QUEUESIZE; i++)
	{
		printf("queue[%2d] is %5d", i, queue[i]);
		if (i == head)
		{
			printf("<- head is now here (now head is %d)", head);
		}
		if (i == tail)
		{
			printf("<- tail is now here (now tail is %d)", tail);
		}
		printf("\n");
	}
	return;
}

//Function for putting data into queue
int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head) { return -1; }

	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;

	return 0;
}

//Function for getting out data from queue
int dequeue(int *pd)
{
	if (head == tail) { return -1; }

	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;

	return 0;
}