// 有効桁数（精度）の指定 ==================================================

#include <iostream>
using namespace std;

int main()
{
	double pi = 3.141592;
	int num;

	cout << "Going to show pi. \n";
	cout << "有効桁数を入力（1~7）：";
	cin >> num;
	cout.precision(num);
	cout << "pi is " << pi << endl;

	system("pause");
	return 0;
}