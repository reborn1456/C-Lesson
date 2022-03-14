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

void insert(int insid, int code, char name[], struct ken a[]);
void del(int id, struct ken a[]);

main()
{
	struct ken ken_data[] = { {1,"Hokkaido", NULL}, {2,"Aomoriken", NULL}, {3,"Iwateken", NULL}, {4,"Miyagiken", NULL}, {5,"Akitaken", NULL}, {6,"Yamagataken", NULL}, {7,"Fukushimaken", NULL}, {DATA_END,"", NULL} };
	struct ken *p, *wp;
	int c, in, co;
	char place[20];

	//link setting
	p = wp = ken_data;
	do 
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	printf("Choose command: \n");
	printf("1: Show   2: Insert   3: Delete   9: Exit \n");
	scanf("%d", &c);

	while (c != 9)
	{

		switch (c)
		{
		case 1:
			//show link
			for (p = ken_data; p->code != DATA_END; p = p->next)
			{
				printf("code = %2d   name = %s \n", p->code, p->name);
			}
			break;
		case 2:
			//insert node
			printf("Insert after: ");
			scanf("%d", &in);
			printf("Code: ");
			scanf("%d", &co);
			printf("Name of ken: ");
			scanf("%s", &place[0]);

			insert(in, co, place, ken_data);
			break;
		case 3:
			//delete node
			printf("Delete code: ");
			scanf("%d", &co);

			del(co, ken_data);
			break;
		case 9:
			//stop the program
			break;
		}

		printf("Choose command: \n");
		printf("1: Show   2: Insert   3: Delete   9: Exit \n");
		scanf("%d", &c);
	}

	system("pause");
	return 0;
}

//Function for insert data in list
void insert(int insid, int code, char name[], struct ken ken_data[])
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