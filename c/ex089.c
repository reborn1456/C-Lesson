#include <stdio.h>

typedef struct profile_data
{
	char name[20];
	int birth[3];
	char blood[5];
}profile;

main()
{
	profile profile1;

	printf("Name: ");
	scanf("%s", profile1.name);
	printf("Birthday(YY MM DD, with space in between each): ");
	scanf("%d %d %d", &profile1.birth[0], &profile1.birth[1], &profile1.birth[2]);
	printf("Blood Type: ");
	scanf("%s", profile1.blood);


	printf("%s -- Birth: Year %d Month %d Day %d   Blood Type: %s \n", profile1.name, profile1.birth[0], profile1.birth[1], profile1.birth[2], profile1.blood);

	system("pause");
	return 0;
}