// 1106046 kadai025.c

#include <stdio.h>
//#include <stdlib.h>

main()
{
	int ia;

	printf("A octal number: ");
	scanf("%o", &ia);

	printf("In decimal: %d \n", ia);

	//strtol(“文字列”, ”変換できない文字列を格納”, 文字列の基数);
	/*long num2 = strtol("257", NULL, 8);
	printf("8進数257は10進数%ld", num2);*/

	system("pause");
	return 0;
}