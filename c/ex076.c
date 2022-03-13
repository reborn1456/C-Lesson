#include <stdio.h>

void largeSmall(int a, int b, int c, int *d, int *e);

main()
{
	int num1, num2, num3, gst, sst;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	largeSmall(num1, num2, num3, &gst, &sst);

	printf("Greatest: %d  Smallest: %d\n", gst, sst);

	system("pause");
	return 0;
}

void largeSmall(int num1, int num2, int num3, int *gst, int *sst)
{
	//greastest number
	if (num1 >= num2)
	{
		*gst = num1;
	}
	else
	{
		*gst = num2;
	}
	if (num3 >= *gst)
	{
		*gst = num3;
	}
	else
	{
		*gst;
	}

	//smallest number
	if (num1 <= num2)
	{
		*sst = num1;
	}
	else
	{
		*sst = num2;
	}
	if (num3 <= *sst)
	{
		*sst = num3;
	}
	else
	{
		*sst;
	}

	return;
}