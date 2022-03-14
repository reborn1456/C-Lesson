#include <stdio.h>

main()
{
	printf("Size of variables (bytes) \n");
	printf("int\t\t%lu \n", sizeof(int));
	printf("float\t\t%lu \n", sizeof(float));
	printf("char\t\t%lu \n", sizeof(char));
	printf("double\t\t%lu \n", sizeof(double));
	printf("short\t\t%lu \n", sizeof(short));
	printf("long\t\t%lu \n", sizeof(long));
	printf("long double\t%lu \n", sizeof(long double));

	system("pause");
	return 0;
}