// ���͂����������֐�odd�Ŋ���ǂ������肵�A���C�����ŕ\������

#include <iostream>
using namespace std;

inline bool odd(int x)     // �C�����C���֐��̒�`
{
	if (x % 2) return true;
	else return false;
	// 0 always means false, everything apart from 0 means true
	// all even numbers(numbers that can be divided by 2) will give 0 with the equation x % 2
	// therefore in this case, 
	// if (this is true(meaning the result not equalling 0)) return true;
	// else return false;
}

int main()
{
	int num1;
	bool ans;

	cout << "Enter a whole number: ";
	cin >> num1;

	ans = odd(num1);     // �֐��Ăяo���˃C�����C���֐��͂����ɖ��ߍ��܂��

	if (ans)
		cout << "This number is an odd number.\n";
	else 
		cout << "This number is not an odd number.\nIt is an even number.\n";

	system("pause");
	return 0;
}