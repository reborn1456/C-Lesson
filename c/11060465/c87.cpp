// �C�����C���֐���

#include <iostream>
using namespace std;

inline int max(int x, int y)     // �C�����C���֐��̒�`
{
	if (x > y)return x;
	else return y;
}

int main()
{
	int num1, num2, ans;

	cout << "Enter 2 whole numbers: ";
	cin >> num1 >> num2;

	ans = max(num1, num2);     // �֐��Ăяo���˃C�����C���֐��͂����ɖ��ߍ��܂��

	cout << "The larger number is: " << ans << endl;

	system("pause");
	return 0;
}