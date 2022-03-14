#include <stdio.h>
#include <stdlib.h>  //for malloc() and free()
#include <string.h>  //for strcpy()

typedef struct NODE
{
	int id;
	char name[11];
	struct NODE *pprev;  //show the node before
	struct NODE *pnext;  //show the node after
}NODE;

//the first
NODE head = { 0, "HEAD", NULL, NULL };

void show(void);
void append(int id, char *name);
void allfree(void);
void insert(int insid, int id, char *name);
void del(int id);

main(void)
{
	append(8, "White");
	append(1, "Black");
	append(33, "Pink");
	show();

	insert(0, 6, "Green");  //insert at the begining
	insert(8, 2, "Blue");  //insert in the middle
	insert(33, 3, "Red");  //insert at the end
	show();

	del(8);  //delete the begining
	del(1);  //delete the middle
	del(33);  //delete the end
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
		printf("Address: %p   ID: %-5d   Name: %-10s   PREVIOUS: %p   NEXT: %p\n", pl, pl->id, pl->name, pl->pprev, pl->pnext);
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

	//connect last node to the previous node
	pnew->pprev = pl;

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

//Function for insert data in list
void insert(int insid, int id, char *name)
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

	//find the node to insert
	pl = &head;
	while (pl != NULL)
	{
		if (pl->id == insid)
		{
			//link with new node
			pnew->pnext = pl->pnext;
			pl->pnext = pnew;
			pnew->pprev = pl;
			break;
		}
		pl = pl->pnext;  //continue to the next node
	}

	return;
}

//Function to delete data from list
void del(int id)
{
	NODE *pl, *psave;

	//find the node to delete
	pl = psave = &head;
	while (pl != NULL)
	{
		if (pl->id == id)
		{
			//delete node
			psave->pnext = pl->pnext;
			free(pl);  //free memory
			break;
		}
		psave = pl;  //back to the node before it
		pl = pl->pnext;
	}

	return;
}