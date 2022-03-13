#include <stdio.h>

main()
{
	float no1;
	float no2;
	float no3;

	printf("Input the first decimal number: ");
	scanf("%f", &no1);
	printf("Input the second decimal number: ");
	scanf("%f", &no2);
	printf("Input the third decimal number: ");
	scanf("%f", &no3);

	printf("The first number inputted is %.2f. \n", no1);
	printf("The second number inputted is %.2f. \n", no2);
	printf("The third number inputted is %.2f. \n", no3);
	printf("Total of the number inputted is %.2f. Average is: %.2f \n", no1+ no2+ no3, (no1 + no2 + no3)/3);

	system("pause");
	return 0;
}