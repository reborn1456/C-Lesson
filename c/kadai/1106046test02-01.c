// 1106046 test02-01.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int su1, su2, su3;

	printf("3‚Â‚Ì®”‚ğ“ü‚ê‚ÄI");
	scanf("%d %d %d", &su1, &su2, &su3);

	if (su1 > su2 && su1 > su3)
	{
		printf("%d\n", su1);
	}
	else if (su2 > su1 && su2 > su3)
	{
		printf("%d\n", su2);
	}
	else if (su3 > su1 && su3 > su2)
	{
		printf("%d\n", su3);
	}

	system("pause");
	return 0;
}