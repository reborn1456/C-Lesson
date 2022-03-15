// 1106046 kadai142.c

#include <stdio.h>

typedef struct SchoolWork
{
	char course[256];
	char subject[256];
	int unit;
}SCWork;

main()
{
	SCWork Student, *p;

	p = &Student;

	printf("Course: ");
	gets(p->course);
	printf("Subject : ");
	gets(p->subject);
	printf("Unit: ");
	scanf("%d", &p->unit);

	printf("\nCourse: %s \nSubject : %s \nUnit: %d \n", p->course, p->subject, p->unit);

	system("pause");
	return 0;
}