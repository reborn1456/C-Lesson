// 1106046 kadai145.c

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

	for (int i = 0; i < 3; i++)
	{
		fu[i].total = fu[i].price * fu[i].number;

		printf("Product:\t%s\n", fu[i].name);
		if (fu[i].point == 5)
		{
			printf("Price:\t\t\\%d\t\t\tPoint:\t\t", fu[i].price);
			for (fu[i].point; fu[i].point > 0; fu[i].point--)
			{
				printf("Åö");
			}
			printf("\n");
		}
		else
		{
			printf("Price:\t\t\\%d\t\t\tPoint:\t\t", fu[i].price);
			for (fu[i].point; fu[i].point > 0; fu[i].point--)
			{
				printf("Åö");
			}
			printf("Åô");
			printf("\n");
		}
		printf("Amount:\t\t%d\t\t\tTotal Cost:\t\\%d-\n\n\n", fu[i].number, fu[i].total);
	}

	system("pause");
	return 0;
}