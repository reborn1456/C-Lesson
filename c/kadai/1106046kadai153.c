// 1106046 kadai153.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	FILE *fp;
	char InSchedule[256];
	int m = 0, i = 0;

	fp = fopen("text.data.txt", "r");
	if (fp != NULL)
	{
		printf("Which month are you looking for: ");
		scanf("%d", &m);

		fgets(InSchedule, 250, fp);

		while (!feof(fp))
		{
			if (atoi(InSchedule) == m)
			{
				//puts(InSchedule);
				printf("%s \n", InSchedule);
			}
			fgets(InSchedule, 250, fp);
		}
	}
	else
	{
		printf("Cannot open file. \n");
	}
	fclose(fp);

	system("pause");
	return 0;
}