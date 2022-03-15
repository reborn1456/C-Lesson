// 1106046 kadai147.c

#include <stdio.h>
#include <string.h>

struct animal
{
	int no;
	char name[20];
	char colour[10];
};

main()
{
	struct animal data[50] = { {30, "dog", "white"}, {50, "tiger", "yellow"}, {60, "horse", "brown"} };
	struct animal *p_data = data;
	struct animal search;
	char num;
	int i = 3, s = 0, cmp;

	printf("Menu (the program stops if X is pressed)\n");
	printf("  1: Show Data\t2: Add Data\t3: Search Data\tChoose?");
	scanf("%c", &num);

	if (num >= 97 && num <= 122)
	{
		num -= 32;
	}

	while (num != 'X')
	{
		switch (num)
		{
		case '1':
			printf("\n");
			for (int j = 0; j < i; j++)
			{
				printf("No.: %d\t\tName: %s\tColour: %s\n", data[j].no, data[j].name, data[j].colour);
			}
			printf("\n");
			break;
		case '2':
			printf("\n");
			printf("Please type in the data which you want to add\n");
			printf("No.> ");
			scanf("%d", &data[i].no);
			printf("Name> ");
			scanf("%s", &data[i].name);
			printf("Colour> ");
			scanf("%s", &data[i].colour);
			i++;

			printf("\n");
			break;
		case '3':
			printf("\n");
			printf("Search from data\n");
			printf("Search item (1. No. : 2. Name : 3. Colour) > ");
			scanf("%d", &s);
			
			switch (s)
			{
			case 1:
				printf("Search No.> ");
				scanf("%d", &search.no);
				printf("\n");
				for (int j = 0; j < i; j++)
				{
					if (search.no == data[j].no)
					{
						printf("No.: %d\t\tName: %s\tColour: %s\n", data[j].no, data[j].name, data[j].colour);
					}
				}
				printf("\n");
				break;
			case 2:
				printf("Search Name> ");
				scanf("%s", &search.name);
				printf("\n");
				for (int j = 0; j < i; j++)
				{
					cmp = strcmp(data[j].name, search.name);
					if (cmp == 0)
					{
						printf("No.: %d\t\tName: %s\tColour: %s\n", data[j].no, data[j].name, data[j].colour);
					}
				}
				printf("\n");
				break;
			case 3:
				printf("Search Colour> ");
				scanf("%s", &search.colour);
				printf("\n");
				for (int j = 0; j < i; j++)
				{
					cmp = strcmp(data[j].colour, search.colour);
					if (cmp == 0)
					{
						printf("No.: %d\t\tName: %s\tColour: %s\n", data[j].no, data[j].name, data[j].colour);
					}
				}
				printf("\n");
				break;
			}
			break;
		}

		printf("Menu (the program stops if X is pressed)\n");
		printf("  1: Show Data\t2: Add Data\t3: Search Data\tChoose?");
		scanf("%*c%c", &num);

		if (num >= 97 && num <= 122)
		{
			num -= 32;
		}

	}

	system("pause");
	return 0;
}