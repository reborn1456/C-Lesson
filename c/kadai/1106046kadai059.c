// 1106046 kadai059.c

#include <stdio.h>

main()
{
	int columns, rows, space = 8;

	printf("    ");
	for (rows = 1; rows <= 9; rows++)
	{
		printf(" %3d", rows);
	}
	printf("\n");

	printf("======================================== \n");

	for (columns = 1; columns <= 9; columns++)
	{
		printf("%d | ", columns);

		for (rows = 1; rows <= 9; rows++)
		{
			printf(" %3d", rows * columns);
		}

		printf("\n");
	}

	system("pause");
	return 0;
}

//main()
//{
//	int columns, rows, space = 8;
//
//	printf("   ");
//	for (rows = 1; rows <= 9; rows++)
//	{
//		printf("  %d", rows);
//	}
//	printf("\n");
//
//	printf("============================== \n");
//
//	for (columns = 1; columns <= 9; columns++)
//	{
//		printf("%d | ", columns);
//
//		for (space; space > 0; space--)
//		{
//			printf(" ");
//		}
//		space = 4 - columns;
//
//		for (rows = 1; rows <= 9; rows++)
//		{
//			printf(" %d", rows * columns);
//		}
//
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}