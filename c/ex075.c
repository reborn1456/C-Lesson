#include <stdio.h>

void calculate(int a, int b, int *c, float *d);

main()
{
	int num1, num2, sum;
	float avg;

	printf("Enter 2 whole numbers: ");
	scanf("%d %d", &num1, &num2);

	calculate(num1, num2, &sum, &avg);

	printf("Sum = %d\tAverage = %.2f \n", sum, avg);

	system("pause");
	return 0;
}

void calculate(int num1, int num2, int *sum, float *avg)
{
	
	*sum = num1 + num2;
	*avg = (num1 + num2) / 2.f;

	return;
}