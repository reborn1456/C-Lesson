#include <stdio.h>

main()
{
	int no, star;
	no = 0;

	printf("Input a number: ");
	scanf("%d", &star);

	while (no != star)
	{
		printf("*"); 
		no += 1;
	}

	system("pause");
	return 0;
}