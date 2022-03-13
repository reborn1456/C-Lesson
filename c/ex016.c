#include <stdio.h>

main()
{
	float no;

	printf("Input a decimal number: ");
	scanf("%f", &no);

	printf("The number inputted is: %f. \n", no);
	printf("The number inputted times 2 is: %.2f. \n", no*2);
	printf("The number inputted times 3 is: %.2f. \n", no*3);

	system("pause");
	return 0;
}