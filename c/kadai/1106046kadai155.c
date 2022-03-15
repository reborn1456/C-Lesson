// 1106046 kadai155.c

#include <stdio.h>

typedef struct data
{
	char que[21];
	char ans[21];
	char kai;
}data;

main()
{
	data question[10];
	FILE *fp;

	fp = fopen("mon.data.txt", "w");
	if (fp != NULL)
	{
		for (int i = 1; i < 11; i++)
		{
			printf("Enter the %d sentance: ", i);
			fprintf(fp, "%s \n", question[i-1].que);
		}
	}
	else
	{
		printf("Cannot open file. \n");
	}
	fclose(fp);


	printf("*** Question *** \n");




	system("pause");
	return 0;
}