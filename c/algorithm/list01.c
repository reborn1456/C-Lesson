#include <stdio.h>
#include <stdlib.h>  //for malloc() and free()
#include <string.h>  //for strcpy()

typedef struct NODE
{
	int id;
	char name[11];
	struct NODE *pnext;
}NODE;

//the first
NODE head = { 0, "HEAD", NULL };

void show(void);
void append(int id, char *name);
void allfree(void);

main(void)
{
	append(8, "White");
	append(1, "Black");
	append(33, "Pink");
	show();

	allfree();

	system("pause");
	return 0;
}

//Function to show the nodes
void show(void)
{
	NODE *pl;

	printf("\n---------------------------------------\n");

	//print all until the end
	pl = &head;
	while (pl != NULL)
	{
		printf("Address: %p   ID: %-5d   Name: %-10s   NEXT: %p\n", pl, pl->id, pl->name, pl->pnext);
		pl = pl->pnext; //continue to the next node
	}
	return;
}

//Add data to the last of the list
void append(int id, char *name)
{
	NODE *pnew, *pl;

	//create new node
	pnew = (NODE *)malloc(sizeof(NODE));
	if (!pnew)
	{
		printf("MemoryError \n");
		return;
	}
	pnew->id = id;
	strcpy(pnew->name, name);
	pnew->pnext = NULL;

	//find the last node
	pl = &head;
	while (pl->pnext != NULL)
	{
		pl = pl->pnext;  //continue to the next node
	}

	//connect the last node to the new node
	pl->pnext = pnew;

	return;
}

//Free all memories
void allfree(void)
{
	NODE *pl, *psave;

	pl = head.pnext;

	while (pl != NULL)
	{
		psave = pl->pnext;
		free(pl);  //free memory
		pl = psave;  //continue to the next node
	}

	return;
}