#include <iostream>     // 入出力用
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout.width(3);    // 出力幅の指定
		cout << i;
	}
	cout << "\n";

	system("pause");
	return 0;
}