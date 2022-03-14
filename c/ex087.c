#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[])
{
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d + %d = %d \n", a, b, a + b);

	system("pause");
	return 0;
}