#include <stdio.h>

main()
{
	unsigned int sec;
//	unsigned int min;
//	unsigned int hrs;

	printf("Input seconds: ");
	scanf("%d", &sec);
	if (sec > 5001 || sec < 0)
	{
		printf("Error. \n");
	}
	else
	{
/*		if(sec > 3599)
		{
			hrs = sec / 3600;
			min = (sec / 60) - 60;
			sec = sec - ((hrs * 60 * 60) + (min * 60));
			printf("%dhours %dminutes %dseconds. \n", hrs, min, sec);
		}
		else
		{
			hrs = 0;
			min = sec / 60;
			sec = sec - (min * 60);
			printf("%dhours %dminutes %dseconds. \n", hrs, min, sec);
		} */

		printf("%dhours %dminutes %dseconds. \n", sec / 3600, sec % 3600 / 60, sec % 3600 % 60);
	}

	system("pause");
	return 0;
}