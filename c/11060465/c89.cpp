// デフォルト引数

#include <iostream>
using namespace std;

void buy(int x = 30);     // デフォルト引数の指定

int main()
{
	cout << "Buying with \100 during the first time.\n";
	buy(100);

	cout << "Buying the default amount during the second time. \n";
	buy();

	system("pause");
	return 0;
}

void buy(int x)
{
	cout << "Bought products costing $" << x << endl;
}