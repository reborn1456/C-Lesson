// 1106046 kadai026.c

#include <stdio.h>
//#include <stdlib.h>

main()
{
	int ia;

	printf("A decimal number: ");
	scanf("%d", &ia);

	printf("In octal: %o\t\tIn hexadecimal: %x\n", ia, ia);

	//strtol(“文字列”, ”変換できない文字列を格納”, 文字列の基数);
	/*long num2 = strtol("257", NULL, 10);
	printf("10進数257は8進数%ld", num2);*/

	system("pause");
	return 0;

	system("pause");
	return 0;
}