#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	char str1[20] = "ringo ", str2[20] = "to ", str3[20] = "mikan ", str[20];
	char *s1 = str1, *s2 = str2, *s3 = str3, *s = str;

	while (*s++ = *s1++);   // \0����������ŋU(false / 0)�ɂȂ邩��A��O�ɖ߂��K�v�� "����"
	*s--;
	while (*s2)   // \0������O�ŋU(false / 0)�ɂȂ邩��A��O�ɖ߂��K�v�� "�Ȃ�"
	{
		*s++ = *s2++;
	}
	while (*s++ = *s3++);

	s1 = str1;
	s2 = str2;
	s3 = str3;
	s = str;

	cout << "str1[]: ";
	while (*s1 != '\0')
	{
		cout << *s1++;
	}
	cout << endl;

	cout << "str2[]: ";
	while (*s2 != '\0')
	{
		cout << *s2++;
	}
	cout << endl;

	cout << "str3[]: ";
	while (*s3 != '\0')
	{
		cout << *s3++;
	}
	cout << endl;

	cout << "str[]: ";
	while (*s != '\0')
	{
		cout << *s++;
	}
	cout << endl;

	system("pause");
	return 0;
}