#include <stdio.h>

int strcnt(char *p);

main()
{
	char buf[256];
	int mojisu;

	printf("Enter a word: ");
	gets(buf);
	mojisu = strcnt(buf);
	printf("The amount of letters in this word is %d.\n", mojisu);

	system("pause");
	return 0;
}

int strcnt(char *p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);

	return(cnt);
}