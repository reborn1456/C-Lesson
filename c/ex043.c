#include <stdio.h>

main() 
{
	int i;
	char a[10], b[10], swap[10];
	
	printf("Enter a Word: ");
	scanf("%s", &a);
	
	printf("Enter another Word: ");
	scanf("%s", &b);

	printf("moji1: %s	moji2: %s \n", a, b);

	printf("Swap around \n");
	for (i = 0; a[i] != '\0'; i++)
	{
		//don't forget that in C language, it's right to left. a->swap, b->a, swap->b
		swap[i] = a[i];
		a[i] = b[i];
		b[i] = swap[i];
	}
	printf("moji1: %s	moji2: %s \n", a, b);


	system("pause");
	return 0;
}