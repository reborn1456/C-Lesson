#include <stdio.h>

typedef struct profile_data
{
	char name[20];
	int birth[3];
	char blood[5];
}profile;

main()
{
	profile Profile[5];
	profile *p;
	int i;

	p = Profile;
	for (i = 0; i < 5; i++)
	{
		printf("Name %d: ", i+1);
		scanf("%s", p->name);
		printf("Birthday %d(YY MM DD, with space in between each): ", i + 1);
		scanf("%d %d %d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("Blood Type %d: ", i + 1);
		scanf("%s", p->blood);

		p++;
	}

	p = Profile;
	for (i = 0; i < 5; i++)
	{
		printf("%s -- Birth: Year %d Month %d Day %d   Blood Type: %s \n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);

		p++;
	}

	system("pause");
	return 0;
}