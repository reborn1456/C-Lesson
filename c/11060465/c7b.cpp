// 空白部分を指定文字で埋める ==================================================

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout.width(3);
		cout.fill('-');     // ファイル文字の指定
		cout << i;
	}
	cout << "\n";

	system("pause");
	return 0;
}