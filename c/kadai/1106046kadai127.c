// 1106046 kadai127.c

#include <stdio.h>

main()
{
	double data[5] = { 10.8, 20.3, 30.6, 40.4, 50.5 };
	double *p_data, sum = 0;

	p_data = data;

	printf("Array \n");
	printf("data[ ] = ");
	sum += *p_data;
	printf("%f", *p_data++);
	for (int i = 0; i < 4; i++)
	{
		sum += *p_data;

		printf(", %f", *p_data++);

	}
	printf("\n");

	printf("Sum: %.3f \n", sum);
	printf("Average: %.3f \n", sum/5);

	system("pause");
	return 0;
}