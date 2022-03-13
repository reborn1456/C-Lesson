#include <stdio.h>

main()
{
	char moji;
	printf("Input a character: ");
	scanf("%c", &moji);

	if((moji >= 65 && moji <= 90) || (moji >= 97 && moji <= 122))
	{
		printf("This is a letter. \n");
	}
	else if(moji >= 48 && moji <= 57)
	{
		printf("This is a number. \n");
	}
	else
	{
		printf("Others. \n");
	}

	system("pause");
	return 0;
}