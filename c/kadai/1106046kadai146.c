// 1106046 kadai146.c

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
	struct fruit fu[3] = { { "peach", 300, 5, 3, 0 }, { "grape", 200, 4, 10, 0 }, { "watermelon", 1500, 5, 8, 0 } };
	struct fruit *pfu;

	pfu = fu;

	for (int i = 0; i < 3; i++)
	{
		pfu->total = pfu->price * pfu->number;

		printf("Product:\t%s\n", pfu->name);
		printf("Price:\t\t\\%d\t\t\tPoint:\t\t%d points\n", pfu->price, pfu->point);
		printf("Amount:\t\t%d\t\t\tTotal Cost:\t\\%d-\n\n\n", pfu->number, pfu->total);

		pfu++;
	}

	system("pause");
	return 0;
}