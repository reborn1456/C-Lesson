#include <stdio.h>
#define DATA_END -1

struct ken
{
	int code;
	char name[20];
	struct ken *next;
};

main()
{
	struct ken ken_data[] = { {1,"Hokkaido", NULL}, {2,"Aomoriken", NULL}, {3,"Iwateken", NULL}, {4,"Miyagiken", NULL}, {5,"Akitaken", NULL}, {6,"Yamagataken", NULL}, {7,"Fukushimaken", NULL}, {DATA_END,"", NULL} };
	struct ken *p, *wp;

	//link setting
	p = wp = ken_data;
	do 
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);

	//show link
	for (p = ken_data; p->code != DATA_END; p = p->next)
	{
		printf("code = %d   name = %s \n", p->code, p->name);
	}

	system("pause");
	return 0;
}