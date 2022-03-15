// 1106046 kadai151.c

#include <stdio.h>
#include <stdlib.h>

typedef struct tSchedule
{
	char month[20];
	char event[256];
}Schedule;

main()
{
	FILE *fp;
	char InSchedule[256];
	Schedule OutSchedule;

	fp = fopen("text.data.txt", "w");
	if (fp != NULL)
	{
		gets(InSchedule);
		//fgets(InSchedule, sizeof(InSchedule), stdin);
		if (InSchedule[0] >= 97 && InSchedule[0] <= 122)
		{
			InSchedule[0] -= 32;
		}

		while (InSchedule[0] != 'X')
		{
			fprintf(fp, "%s \n", InSchedule);

			gets(InSchedule);
			if (InSchedule[0] >= 97 && InSchedule[0] <= 122)
			{
				InSchedule[0] -= 32;
			}

		}
	}
	else
	{
		printf("Cannot open file. \n");
	}
	fclose(fp);


	fp = fopen("text.data.txt", "r");
	if (fp != NULL)
	{
		fscanf(fp, "%s", &OutSchedule.month);
		fscanf(fp, "%s", &OutSchedule.event);

		while (!feof(fp))
		{
			printf("%s %s \n", OutSchedule.month, OutSchedule.event);
			fscanf(fp, "%s", &OutSchedule.month);
			fscanf(fp, "%s", &OutSchedule.event);
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