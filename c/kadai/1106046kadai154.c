// 1106046 kadai154.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tSchedule
{
	char month[20];
	char event[256];
}Schedule;

main()
{
	FILE *fp;
	char InSchedule[256];
	Schedule OutSchedule[12];
	int last = 0;

	fp = fopen("text.data.txt", "a");
	if (fp != NULL)
	{
		gets(InSchedule);
		if (InSchedule[0] >= 97 && InSchedule[0] <= 122)
		{
			InSchedule[0] -= 32;
		}

		while (InSchedule[0] != 'X')
		{
			fputs(InSchedule, fp);

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
		for (int i = 0; !feof(fp); i++)
		{
			fscanf(fp, "%s", &OutSchedule[i].month);
			fscanf(fp, "%s", &OutSchedule[i].event);
			last++;
		}
	}
	else
	{
		printf("Cannot open file. \n");
	}
	fclose(fp);


	Schedule temporary;

	for (int i = 0; i < last; i++)
	{
		for (int j = i + 1; j < last + 1; j++)
		{
			if (atoi(OutSchedule[i]) > atoi(OutSchedule[j]))
			{
				temporary = OutSchedule[i];
				OutSchedule[i] = OutSchedule[j];
				OutSchedule[j] = temporary;
			}
		}
	}


	fp = fopen("text.data.txt", "w");
	if (fp != NULL)
	{
		int i = 0;
		while (i < last)
		{
			fprintf(fp, "%s \n", OutSchedule[i]);
			i++;
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