#include <stdio.h>

void display(int a);  //declaring function prototype

main()
{
	int a;
	printf("data ?: ");
	scanf("%d", &a);
	display(a);  // function call

	system("pause");
	return 0;
}

void display(int a)  // function definition
{
	printf("Inputted data= %d\n", a);
}