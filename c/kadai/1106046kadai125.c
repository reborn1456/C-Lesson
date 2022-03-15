// 1106046 kadai125.c

#include <stdio.h>

main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int *p_data, i = 0;

	printf("Doesn't change the place of pointer \n");

	p_data = &data[i];
	printf("%d", *p_data);
	i++;

	while (data[i] != -999)
	{
		p_data = &data[i];
		printf(", %d", *p_data);
		i++;
	}
	printf("\n");


	p_data = data;

	printf("Change the place of pointer \n");
	printf("%d", *p_data++);
	while (*p_data != -999)
	{
		printf(", %d", *p_data++);
	}
	printf("\n");


	system("pause");
	return 0;
}