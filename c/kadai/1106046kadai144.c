// 1106046 kadai144.c

#include <stdio.h>

struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit pe = { "peach", 300, 5, 3, 0 };
	struct fruit *p;

	p = &pe;

	p->total = p->price * p->number;

	printf("Product:\t\t%s\nPrice:\t\t\t\\%d\n", p->name, p->price);
	printf("Point:\t\t\t");
	for (p->point; p->point > 0; p->point--)
	{
		printf("š");
	}
	printf("\n");
	printf("Amount:\t\t\t%d\nTotal Cost:\t\t\\%d-\n", p->number, p->total);

	system("pause");
	return 0;
}