// �󔒕������w�蕶���Ŗ��߂� ==================================================

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		cout.width(3);
		cout.fill('-');     // �t�@�C�������̎w��
		cout << i;
	}
	cout << "\n";

	system("pause");
	return 0;
}