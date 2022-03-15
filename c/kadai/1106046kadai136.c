// 1106046 kadai136.c

#include <stdio.h>

int Larger(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

main()
{
	int num1, num2, big;

	printf("Two whole numbers: ");
	scanf("%d %d", &num1, &num2);

	big = Larger(num1, num2);

	printf("max = %d\n", big);

	system("pause");
	return 0;
}