#include <stdio.h>

main()
{
	int i, n;
	char s[20];

	printf("Incert coded word: ");
//	scanf("%s", &s);
	gets(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]'s code key is> ", i);
		scanf("%d", &n);
		s[i] -= n;
	}
	printf("Decoded word is: ");
	printf("%s \n", s);

	system("pause");
	return 0;
}