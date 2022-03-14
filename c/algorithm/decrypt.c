#include <stdio.h>

main()
{
	int i;
	char s[256];

	printf("Incert a word: ");
//	scanf("%s", &s);
	gets(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] -= 1;
	}

//	printf("%s", s);
	puts(s);

	system("pause");
	return 0;
}