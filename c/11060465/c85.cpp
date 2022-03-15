#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "円のみかんを買いました\n";
}

int main()
{
	int num;

	cout << "1個目のみかんの値段？";
	cin >> num;
	buy(num);     // 関数の呼び出し

	cout << "2個目のみかんの値段？";
	cin >> num;
	buy(num);     // 関数の呼び出し

	system("pause");
	return 0;
}