// 1106046 kadai033.c

#include <stdio.h>

main()
{
	char let;
	printf("Input a letter: ");
	scanf("%c", &let);

	if (let >= 65 && let <= 90)
	{
		printf("This is a capital letter. \n");
	}
	else if(let >= 97 && let <= 122)
	{
		printf("This is a small letter. \n");
	}

	system("pause");
	return 0;
}