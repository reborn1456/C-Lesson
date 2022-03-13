#include <stdio.h>

main()
{
	int no;
	no = 0;

	printf("Input a number: ");
	scanf("%d", &no);

	while (no != 0)
	{
		printf("*");
		no -= 1;
	}
	printf("\n");

	system("pause");
	return 0;
}