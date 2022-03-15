// 1106046 kadai072.c

#include <stdio.h>

main()
{
	char alpha;

	printf("Alphabet: ");
	scanf("%c", &alpha);

	switch (alpha)
	{
	case 'a':
		printf("America\nAustralia \n");
		break;
	case 'e':
		printf("England \n");
		break;
	case 'f':
		printf("France \n");
		break;
	case 'j':
		printf("Japan \n");
		break;
	}

	system("pause");
	return 0;
}