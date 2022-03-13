#include <stdio.h>

main()
{
	char moji;

	printf("Input an alphabet: ");
	scanf("%c", &moji);

	if (moji >= 65 && moji <= 90)
	{
		printf("Small letter: %c \n", moji + 32);
	}
	else if (moji >= 97 && moji <= 122)
	{
		printf("Capital letter: %c \n", moji - 32);
	}
	else
	{
		printf("Error. \n");
	}

	system("pause");
	return 0;
}