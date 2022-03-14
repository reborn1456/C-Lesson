#include <stdio.h>

main(int argc, char *argv[])  //can only write argc. but if want to use argv, have to have argc
{
	printf("argc = %d\n", argc);
	printf("*argv[0] = %s\n", argv[0]);
	printf("*argv[1] = %s\n", argv[1]);
	printf("*argv[2] = %s\n", argv[2]);

	system("pause");
	return 0;
}