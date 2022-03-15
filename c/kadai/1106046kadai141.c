// 1106046 kadai141.c

#include <stdio.h>

typedef struct SchoolWork
{
	char course[256];
	char subject[256];
	int unit;
}SCWork;

main()
{
	SCWork Student = { "GameSoft I Course", "C Language", 8 };

	printf("Course: %s \nSubject : %s \nUnit: %d \n", Student.course, Student.subject, Student.unit);

	system("pause");
	return 0;
}