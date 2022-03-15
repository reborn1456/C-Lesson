// 1106046 test03-04.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int cnt = 0, i = 0;
	char data[256];

	printf("Enter a word: ");
	scanf("%s", data);

	while (data[i] != '\0') 
	{
		cnt++;
		i++;
	}

	for (i = 0; i <= cnt; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", data[i]);
		}
	}

	system("pause");
	return 0;
}