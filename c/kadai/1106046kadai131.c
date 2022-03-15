// 1106046 kadai131.c

#include <stdio.h>

main()
{
	char data, dumy;

	printf("Enter a letter (stops when Ctrl + Z is pressed): ");
	data = getchar();
	while (data != EOF)  //when ctrl Z is pressed, stop
	{
		printf("%c \n", data);
		printf("Enter a letter (stops when Ctrl + Z is pressed): ");
		dumy = getchar();
		data = getchar();
	}

	system("pause");
	return 0;
}