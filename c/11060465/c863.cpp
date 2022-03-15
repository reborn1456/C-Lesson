// 配列mojiにキーボードから文字列を入力し、関数prtで１文字飛ばしで表示し、メイン側で全体の文字数を表示した文字表を表示する。

#include <iostream>
using namespace std;

void prt(char *p_moji)
{
	int len = strlen(p_moji);
	
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			cout << *p_moji;
		}
		*p_moji++;
	}
	cout << "\n";

}

int main()
{
	char moji[30];

	cout << "Enter a word: ";
	cin >> moji;

	prt(moji);

	system("pause");
	return 0;
}