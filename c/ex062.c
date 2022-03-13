#include <stdio.h>

main()
{
	char *p = "peach";
	char data1[10] = "banana", *p_data1;
	char data2[10], *p_data2;
	char data3[10];
	int i;

	i = 0;
	while (*p!='\0') {
		data3[i] = *p;
		i++;
		p++;
	}
	data3[i] = '\0';
	//printf("%s",data3);
	
	p = data3;
	p_data1 = data1;
	p_data2 = data2;

	while (*p_data2++ = *p_data1++);
	p_data1 = data1;
	while (*p_data1++ = *p++);

	//printf("%s\n", data1);
	//printf("%s\n", data2);


	p_data1 = data1;
	printf("data1[ ] = ");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}
	putchar('\n');

	p_data2 = data2;
	printf("data2[ ] = ");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
	putchar('\n');

	
	//system("pause");
	return 0;
}