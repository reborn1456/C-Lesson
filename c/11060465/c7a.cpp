#include <iostream>     // ���o�͗p
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout.width(3);    // �o�͕��̎w��
		cout << i;
	}
	cout << "\n";

	system("pause");
	return 0;
}