#include <iostream>
using namespace std;

void buy(int x)
{
	cout << x << "�~�݂̂���𔃂��܂���\n";
}

int main()
{
	int num;

	cout << "1�ڂ݂̂���̒l�i�H";
	cin >> num;
	buy(num);     // �֐��̌Ăяo��

	cout << "2�ڂ݂̂���̒l�i�H";
	cin >> num;
	buy(num);     // �֐��̌Ăяo��

	system("pause");
	return 0;
}