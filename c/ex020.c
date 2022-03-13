#include <stdio.h>

main()
{
	char moji;

	printf("Input small letter: ");
	scanf("%c", &moji);

	printf("The capatal letter of letter inputted is %c. \n", moji-32);

	system("pause");
	return 0;
}