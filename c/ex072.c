#include <stdio.h>

void error_msg(void);

main()
{
	int a, b;
	printf("data1 data2 ?: ");
	scanf("%d %d", &a, &b);
	if (b == 0)
	{
		error_msg();  // argument is not passed
	}
	else 
	{
		printf("%d / %d = %d ... %d\n", a, b, a / b, a%b);
	}

	system("pause");
	return 0;
}

void error_msg(void)
{
	printf("Cannot be divided by 0.\n");
}