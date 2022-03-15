// 1106046 kadai12o.c

#include <stdio.h>

main()
{
	char *p = "pointer test program";
	char save[256];
	int i;

	for (i = 0; *p != '\0'; i++)
	{
		save[i] = *p++;
	}
	save[i] = '\0';  //remember to add \0 add the end if you use 《!= '\0'》cause \0 is not included

	printf("Array save [] = %s \n", save);

	system("pause");
	return 0;
}