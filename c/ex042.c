#include <stdio.h>

main()
{
	int i, o[7], count;

	o[0] = 'O';
	o[1] = 'r';
	o[2] = 'a';
	o[3] = 'n';
	o[4] = 'g';
	o[5] = 'e';
	o[6] = '\0';

	count = 0;

	printf("Word: ");
	for (i = 0; i < 7; i++)
	{
		printf("%c", o[i]);
		count += 1;
	}
	printf("\n");

	printf("Letter count: %d\n", count - 1);

	system("pause");
	return 0;
}