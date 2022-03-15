// 1106046 kadai13a.c

#include <stdio.h>

long bekijyou(int a, int b)
{
	long result = 1;

	for (b; b > 0; b--)
	{
		result *= a;
	}
	return (result);
}

main()
{
	int num1, num2;
	long kotae;

	printf("Value1: ");
	scanf("%d", &num1);
	printf("Value2: ");
	scanf("%d", &num2);

	kotae = bekijyou(num1, num2);

	printf("%d to the power of %d is %d. \n", num1, num2, kotae);

	system("pause");
	return 0;
}