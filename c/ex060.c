#include <stdio.h>

main()
{
	char data[] = "Language", le;
	char *p_data;
	int i;

	printf("Letter search: ");
	scanf("%c", &le);

	p_data = data;

	printf("Result:");
	for (i = 0; i < 8; i++)
	{
		if (*p_data == le) 
		{
			printf(" %d ", i + 1);
			p_data++;
		}
		else
		{
			p_data++;
		}
	}
	printf("\n");

	system("pause");
	return 0;
}