#include <iostream>
using namespace std;

void buy()
{
	cout << "みかんを買いました\n";
}

int main()
{
	int i;

	for (i = 0; i < 10; i++)
	{
		buy();     // 関数の呼び出し
	}

	system("pause");
	return 0;
}