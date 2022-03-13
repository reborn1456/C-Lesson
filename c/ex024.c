#include <stdio.h>

main()
{
	char moji;
	printf("Input a letter: ");
	scanf("%c", &moji);

	if(moji >= 65 && moji <= 90)
	{
		printf("This is a capital letter. \n");
	}
	else
	{
		printf("This is not a capital letter. \n");
	}

	system("pause");
	return 0;
}