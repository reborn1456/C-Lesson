#include <iostream>
using namespace std;

void buy()
{
	cout << "みかんを買いました\n";
}

int main()
{
	buy();     // 関数の呼び出し
	cout << "もう一回!\n";
	buy();

	system("pause");
	return 0;
}