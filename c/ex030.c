#include <stdio.h>

main()
{
	int no, cal;
	no = 0;
	cal = 0;

	printf("Incert a number: ");
	scanf("%d", &no);

	while (cal != 11)
	{
		printf("%d + %d = %d \n", no, cal, no + cal);
		cal += 1;
	}

	system("pause");
	return 0;
}