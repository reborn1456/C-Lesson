// 1106046 kadai135.c

#include <stdio.h>
#include <string.h>

main()
{
	int c, i = 0, count = 0;
	char data[256], work;

	printf("Enter a word (stops when Ctrl + Z is pressed): ");
	c = scanf("%s", data);
	count = strlen(data);
	count -= 1;

	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		for (i = 0, count; count >= i; i++, count--)
		{
			work = data[i];
			data[i] = data[count];
			data[count] = work;
		}
		printf("%s \n", data);

		printf("Enter a word (stops when Ctrl + Z is pressed): ");
		c = scanf("%s", data);
		count = strlen(data);
		count -= 1;
	}

	system("pause");
	return 0;
}