#include <stdio.h>

main()
{
	int tbl[3][3] = { {10, 20, 30} , {40, 50, 60} , {70, 80, 90} };
	int *p_tbl, i;

	p_tbl = &tbl[0][1];  //this need's to be an address, NOT tbl[0][1], but &tbl[0][1]

	printf("Contents in a 2D Array: \n");
	for (i = 0; i < 3; i++)
	{
		printf(" %d ", *p_tbl);
		p_tbl += 3;  //* is NOT needed, add 3 to the address but not the value
	}
	printf("\n"); 

	system("pause");
	return 0;
}