// 1106046 test03-02.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	char name[5][20];
	int ten[5], i, min = 999, cnt;

	for (i = 0; i < 5; i++)
	{
		printf("[%d]  名前：  ", i + 1);
		scanf("%s", &name[i][0]/* name[i] also does the same thing*/);
		printf("[%d]  点数：  ", i + 1);
		scanf("%d", &ten[i]);
		if (min > ten[i])
		{
			min = ten[i];
			cnt = i;
		}
	}

	printf("\n最小得点は、");
	printf("%s  さん  %d点\n", name[cnt], min);

	system("pause");
	return 0;
}