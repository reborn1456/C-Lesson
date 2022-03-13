#include <stdio.h>

main()
{
	float box[3];
	int i = 0;

	for (i = 0; i < 3; ++i)
	{
		printf("Enter Number: ");
		scanf("%f", &box[i]);
	}

	printf("Sum is: %.2f\n", box[0] + box[1] + box[2]);
	printf("Average is: %.2f\n", (box[0] + box[1] + box[2]) / 3);

	system("pause");
	return 0;
}