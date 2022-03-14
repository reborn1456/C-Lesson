#include <stdio.h>
#include <string.h>

void combine(char a[], char b[]);

main()
{
	char str1[10], str2[10];

	printf("Array1: ");
	scanf("%s", &str1);
	printf("Array2: ");
	scanf("%s", &str2);

	combine(str1, str2);

	printf("Combined Array1: %s \n", str1);

	system("pause");
	return 0;
}

void combine(char str1[], char str2[])
{
	int i = 0, j = 0;

	while (str1[i] != '\0')
	{
		i++;
	}
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';

	/* strcat(str1, str2);  //this combines what is in array1 and 2 and put the combined result in array1 */

	return;
}