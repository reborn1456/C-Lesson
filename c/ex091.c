#include <stdio.h>

//typedef struct profile_data profile;

/*typedef struct profile_data
{
	char name[20];
	int birth[3];
	char blood[5];
}profile;*/

typedef struct
{
	char name[20];
	int birth[3];
	char blood[5];
}profile;

main()
{
	profile profile1;
	profile *p;  //or can be written as  profile *p = &profile1;

	p = &profile1;

	printf("Name: ");
	scanf("%s", p->name);
	printf("Birthday(YY MM DD, with space in between each): ");
	scanf("%d %d %d", &(p->birth[0]), &p->birth[1], &p->birth[2]);
	printf("Blood Type: ");
	scanf("%s", p->blood);

//	scanf("%c", &p->blood);  if blood is not a array, & will be needed before the pointer
//	scanf("%s", &p->blood[1]);  this will tell the pc to start the word in blood[1] and blood[0] will be enpty


	printf("%s -- Birth: Year %d Month %d Day %d   Blood Type: %s \n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);

	system("pause");
	return 0;
}