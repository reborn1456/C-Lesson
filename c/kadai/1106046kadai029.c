// 1106046 kadai029.c

#include <stdio.h>

main()
{
	float p = 3.1515;
	double r;

	printf("The radius of the circle: ");
	scanf("%lf", &r);

	printf("Diameter: %f \n", r * 2);
	printf("Circumfrence: %f \n", r * 2 * p);
	printf("Area: %f \n", r * r *p);

	system("pause");
	return 0;
}