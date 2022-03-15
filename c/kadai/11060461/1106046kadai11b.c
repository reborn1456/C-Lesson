// 1106046 kadai11a.c

#include <stdio.h>

main()
{
	char day[7][10] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	int num;

	printf("Number(0~6): ");
	scanf("%d", &num);

	switch (num)
	{
	case 0:
		puts(day[0]);
		break;
	case 1:
		puts(day[1]);
		break;
	case 2:
		puts(day[2]);
		break;
	case 3:
		puts(day[3]);
		break;
	case 4:
		puts(day[4]);
		break;
	case 5:
		puts(day[5]);
		break;
	case 6:
		puts(day[6]);
		break;
	}

	system("pause");
	return 0;
}