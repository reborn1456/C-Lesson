#include <stdio.h>

main()
{
	char data[15] = "C Language";
	char data2[15];
	char *p_data, *p_data2;

	p_data = data;
	p_data2 = data2;
	printf("data[ ] = %s \n", p_data);
	while (*p_data2++ = *p_data++);  //文字列のコピー

	p_data2 = data2; //putting the address from data2[10] back to data2[0]
	printf("data2[ ] = %s \n", p_data2);
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
	putchar('\n');

	system("pause");
	return 0;
}