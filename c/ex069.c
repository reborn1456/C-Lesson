#include <stdio.h>

int add(int a, int b);  //declaring function prototype

main()
{
	int a, b, kotae;

	printf("Enter 2 whole number: ");
	scanf("%d %d", &a, &b);

	kotae = add(a, b);  // function call

	printf("Total: %d \n", kotae);

	system("pause");
	return 0;
}

int add(int a, int b)   // function definition
{
	int ans;
	ans = a + b;

	return(ans);  // return statement
}