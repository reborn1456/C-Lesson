#include <stdio.h>

main()
{
	int no1;
	int no2;
	int no3;

	printf("Input three whole number: ");
	scanf("%d", &no1);
	scanf("%d", &no2);
	scanf("%d", &no3);

	printf("Total: %d Average: %.2f \n", no1 + no2 + no3, (no1 + no2 + no3) / 3.f);

	system("pause");
	return 0;
}