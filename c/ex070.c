#include <stdio.h>

int add(int a, int b, int c);  //declaring function prototype
float average(int a, int b, int c);  //num1, num2 and num3 are int, therefore a, b and c had to be int

main()
{
	int num1, num2, num3, sum = 0;
	float avg = 0.0;

	printf("Enter 3 whole number: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	sum = add(num1, num2, num3);  // function call
	avg = average(num1, num2, num3);  // function call

	printf("Total: %d\tAverage: %.2f\n", sum, avg);

	system("pause");
	return 0;
}

int add(int a, int b, int c)  // function definition
{
	int ansS;
	ansS = a + b +c;

	return(ansS);  // return statement
}

float average(int a, int b, int c)  // function definition
{
	float ansA;
	ansA = (a + b + c) / 3.f;

	return (ansA);  // return statement
}