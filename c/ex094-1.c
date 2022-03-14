#include <stdio.h>

struct day
{
	int nen;
	int tuki;
	int hi;
};

typedef struct
{
	char name[20];
	struct day birthday;
	char blood[5];
}profile;

main()
{
	profile Profile[5] = { {"Ben", {1970, 02, 17}, 'A'}, {"Tom", {1996, 05, 25}, "AB"}, {"Megan", {1964, 07, 30}, 'O'}, {"Alex", {2000, 10, 05}, 'B'}, {"Gemma", {2005, 02, 29}, "AB"} };
	profile *p;
	int i;

	p = Profile;
	for (i = 0; i < 5; i++)
	{
		if (p->birthday.tuki == 2)
		{
			printf("Name: %s -- Birthday: Year %d Month %d Day %d   Blood Type: %s\n", p->name, p->birthday.nen, p->birthday.tuki, p->birthday.hi, p->blood);
		}

		p++;
	}

	system("pause");
	return 0;
}