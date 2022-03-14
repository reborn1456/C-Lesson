#include <stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = { {"Enpitsu", 30, 5}, {"Keshigomu", 50, 2}, {"Fudepako", 500, 3} };
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Product Name: %s\t", syohin[i].name);
		printf("Tanka: %4d\t", syohin[i].tanka);
		printf("Kosuu: %4d\n", syohin[i].kosuu);
	}

	system("pause");
	return 0;
}