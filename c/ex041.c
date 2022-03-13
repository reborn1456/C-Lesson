#include <stdio.h>

main()
{
	int i;
	char a[6];

	a[0] = 'A';
	a[1] = 'p';
	a[2] = 'p';
	a[3] = 'l';
	a[4] = 'e';
	a[5] = '\0';

	printf("1 letter each time: \n");
	for (i = 0; i < 5; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");

	printf("All at once: \n");
	printf("%s", a);
	printf("\n");

	system("pause");
	return 0;
}