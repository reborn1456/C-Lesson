#include <stdio.h>

void backWards(char a[], char b[]);

main()
{
	char str1[10], str2[10];

	printf("Enter a word: ");
	gets(str1);

	backWards(str1, str2);

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	system("pause");
	return 0;
}

void backWards(char str1[], char str2[])
{
	int i = 0, count = 0, low, high;
	char w;

	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
		count++;
	}
	str2[i] = '\0';

	low = 0;
	high = count-1;

	while (low <= high)
	{
		w = str2[low];
		str2[low] = str2[high];
		str2[high] = w;

		low++;
		high--;
	}

	return;
}