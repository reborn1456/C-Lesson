// 1106046 kadai143.c

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

	pe.total = pe.price * pe.number;

	printf("Product:\t\t%s\nPrice:\t\t\t\\%d\n", pe.name, pe.price);
	printf("Point:\t\t\t");
	for (pe.point; pe.point > 0; pe.point--)
	{
		printf("š");
	}
	printf("\n");
	printf("Amount:\t\t\t%d\nTotal Cost:\t\t\\%d-\n", pe.number, pe.total);

	system("pause");
	return 0;
}