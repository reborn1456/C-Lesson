#include <stdio.h>
#include <string.h>

main()
{
	char *p_tbl[] = { "Programming2", "Algorithm", "Programming1", "C" };
	char *p_w;
	int i, j, k;

	//sort the words
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) > 0)
			{
				p_w = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = p_w;
			}

		}

	}

	for (i = 0; i < 4; i++)
	{
		printf("%s \n", p_tbl[i]);
	}
	

	system("pause");
	return 0;
}

/*if (strcmp(p_tbl[0], p_tbl[1]) < 0)
	{
		// p_tbl[0] is greater
	}
	if (strcmp(p_tbl[0], p_tbl[1]) > 0)
	{
		// p_tbl[1] is greater
	}
	if (strcmp(p_tbl[0], p_tbl[1]) == 0)
	{
		// p_tbl[0] and p_tbl[1] is excatly the same
	} */