#include <iostream>
#include <string>
using namespace std;

int count(char *p)
{
	int len = strlen(p);
	cout << "The length of GameSoftClass is " << len << endl;

	return len;
}

void search(char *p, int cnt)
{
	int count = 0;
	char chr;

	cout << "Enter the letter you would like to search for: ";
	cin >> chr;
	for (int i = 0; i < cnt; i++)
	{
		if (*p == chr)
		{
			count++;
		}
		p++;
	}
	cout << "There are " << count << " " << chr << " in the word GameSoftClass.\n";
}

int main()
{
	char moji[] = "GameSoftClass", chr;
	int len = 0;

	len = count(moji);
	search(moji, len);

	system("pause");
	return 0;
}