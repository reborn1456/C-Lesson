#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, n, k[20];
	char s[20];

	srand(time(0));  //to shuffle the numbers
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	printf("Incert a word: ");
//	scanf("%s", &s);
	gets(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	printf("Coded word is: ");
	printf("%s \n", s);

	printf("Code key: ");
	for (n = 0; n < i; n++)
	{
		printf(" %d ", k[n]);
	}

	putchar('\n');

	system("pause");
	return 0;
}