#include <stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

void display3(struct syohin_data *a);

main()
{
	struct syohin_data syohin = { "Keshigomu", 50 };
	display3(&syohin);

	system("pause");
	return 0;
}

void display3(struct syohin_data *s)
{
	printf("%s  %d \n", s->name, s->tanka);
}