// 1106046 test03-02.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	char name[5][20];
	int ten[5], i, min = 999, cnt;

	for (i = 0; i < 5; i++)
	{
		printf("[%d]  ���O�F  ", i + 1);
		scanf("%s", &name[i][0]/* name[i] also does the same thing*/);
		printf("[%d]  �_���F  ", i + 1);
		scanf("%d", &ten[i]);
		if (min > ten[i])
		{
			min = ten[i];
			cnt = i;
		}
	}

	printf("\n�ŏ����_�́A");
	printf("%s  ����  %d�_\n", name[cnt], min);

	system("pause");
	return 0;
}