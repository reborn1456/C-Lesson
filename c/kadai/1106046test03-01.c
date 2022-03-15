// 1106046 test03-01.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int su1, su2, su3, hikaku, i;

	printf("®”‚ğ3ŒÂ“ü—ÍI");
	scanf("%d %d %d", &su1, &su2, &su3);

	hikaku = su1;

	if (su2 < hikaku)
	{
		hikaku = su2;
	}
	if (su3 < hikaku)
	{
		hikaku = su3;
	}

	printf("Œö–ñ”‚ÍA");

	for (i = 1; i <= hikaku; i++)
	{
		if ((su1%i) == 0 && (su2%i) == 0 && (su3%i) == 0)
		{
			printf("%d   ", i);
		}
	}

	system("pause");
	return 0;
}