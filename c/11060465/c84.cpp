#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "円のみかんを買いました\n";
}

int main()
{
	buy(30);     // 関数の呼び出し

	buy(50);

	system("pause");
	return 0;
}