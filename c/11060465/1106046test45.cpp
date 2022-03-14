#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	char a[] = "sai test 4";
	char b[];
	char *p, *q;

	p = a;
	q = b;

	for (int i = 0; i < 10; i++)
	{
		if (p == &a[0])
		{
			strcpy(*q, *p);
			*p++;
		}
		else
		{
			if (*p != 'a' || *p != 'i' || *p != 'u' || *p != 'e' || *p != 'o')
			{

			}
		}
	}

	system("pause");
	return 0;
}