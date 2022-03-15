// 1106046 kadai031.c

#include <stdio.h>

main()
{
	float num1, num2;

	printf("2 Decimal numbers: ");
	scanf("%f %f", &num1, &num2);

	if (num1 > num2)
	{
		printf("The bigger number is: %f \n", num1);
	}
	else
	{
		printf("The bigger number is: %f \n", num2);
	}

	system("pause");
	return 0;
}