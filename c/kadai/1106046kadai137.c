// 1106046 kadai137.c

#include <stdio.h>

int AlphaCase(char alf)
{
	if (alf >= 0x41 && alf <= 0x5A)
	{
		return 1;
	}
	else if (alf >= 0x61 && alf <= 0x7A)
	{
		return 0;
	}
}

main()
{
	int num;
	char alph;

	printf("A Letter: ");
	scanf("%c", &alph);

	num = AlphaCase(alph);

	if (num == 1)
	{
		printf("The returning value is 1, therefore it is in upper case. \n");
	}
	else if (num == 0)
	{
		printf("The returning value is 0, therefore it is in lower case. \n");
	}

	system("pause");
	return 0;
}