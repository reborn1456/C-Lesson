#include <stdio.h>

main()
{
	int num1, num2, num3, gst, sst;
	char func;

	gst = sst = 0;

	printf("Choose a function: \n");
	printf("d: greatest\ns: smallest\ng: total\nh: average.\n");
	scanf("%c", &func);

	if (func == 'd' || func == 'D' || func == 's' || func == 'S' || func == 'g' || func == 'G' || func == 'h' || func == 'H')
	{
		printf("Enter three numbers: ");
		scanf("%d %d %d", &num1, &num2, &num3);

		switch (func)
		{
		case 'd':
		case 'D':
			if (num1 >= num2)
			{
				gst = num1;
			}
			else
			{
				gst = num2;
			}
			if (num3 >= gst)
			{
				gst = num3;
			}
			else
			{
				gst;
			}
			printf("Greatest: %d \n", gst);
			break;
		case 's':
		case 'S':
			if (num1 <= num2)
			{
				sst = num1;
			}
			else
			{
				sst = num2;
			}
			if (num3 <= sst)
			{
				sst = num3;
			}
			else
			{
				sst;
			}
			printf("Smallest: %d \n", sst);
			break;
		case 'g':
		case 'G':
			printf("Sum: %d \n", num1 + num2 + num3);
			break;
		case 'h':
		case 'H':
			printf("Average: %d \n", (num1 + num2 + num3) / 3);
			break;
		}
	}
	else
	{
		printf("Error. \n");
	}

	system("pause");
	return 0;
}