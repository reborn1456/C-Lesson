#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken *next;
};

void insert(int insid, int code, char *name, struct ken a[]);
void del(int id, struct ken a[]);

main()
{
	struct ken ken_data[] = { {1,"Hokkaido", NULL}, {2,"Aomoriken", NULL}, {3,"Iwateken", NULL}, {4,"Miyagiken", NULL}, {5,"Akitaken", NULL}, {6,"Yamagataken", NULL}, {7,"Fukushimaken", NULL}, {DATA_END,"", NULL}, { 28, "Hyougo", NULL } };
	struct ken *p, *wp;

	//link setting
	p = wp = ken_data;
	do 
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	/*
	//easier way to do it
	ken_data[8].next = ken_data[0].next;
	ken_data[0].next = &ken_data[8];
	*/
	insert(1, 28, "Hyougo", ken_data);

	/*
	//easier way to do it
	ken_data[1].next = ken_data[2].next;
	*/
	del(3, ken_data);

	//show link
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %2d   name = %s \n", p->code, p->name);
	}

	system("pause");
	return 0;
}

//Function for insert data in list
void insert(int insid, int code, char *name, struct ken ken_data[])
{
	struct ken *pnew, *pl;

	//create new node
	pnew = (struct ken *)malloc(sizeof(struct ken));
	if (!pnew)
	{
		printf("MemoryError \n");
		return;
	}
	pnew->code = code;
	strcpy(pnew->name, name);

	//find the node to insert
	pl = &ken_data[0];
	while (pl->code != DATA_END)
	{
		if (pl->code == insid)
		{
			//link with new node
			pnew->next = pl->next;
			pl->next = pnew;
			break;
		}
		pl = pl->next;  //continue to the next node
	}

	return;
}

//Function to delete data from list
void del(int id, struct ken ken_data[])
{
	struct ken *pl, *psave;

	//find the node to delete
	pl = psave = &ken_data[0];
	while (pl->code != DATA_END)
	{
		if (pl->code == id)
		{
			//delete node
			psave->next = pl->next;
			break;
		}
		psave = pl;  //back to the node before it
		pl = pl->next;
	}

	return;
}