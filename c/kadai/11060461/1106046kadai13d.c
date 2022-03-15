// 1106046 kadai13d.c

#include <stdio.h>
#include <string.h>

void combine(char str1[], char str2[])
{
	strcat(str1, str2);
	return;
}

main()
{
	char moji1[256] = "Function", moji2[] = "Do you understand?";

	printf("Array moji1: %s \n", moji1);
	printf("Array moji2: %s \n", moji2);

	combine(moji1, moji2);

	printf("Combined Array moji1: %s \n", moji1);

	system("pause");
	return 0;
}