#include <iostream>     // ���o�͗p
using namespace std;

int main()
{
	char ch;

	cout << "Please enter a sentance with words connected to each other.\n";
	while (cin.get(ch))     // �ꕶ�����͊֐��iifstream�N���X�j�󔒕��������͉�
	{
		cout.put(ch);       // �ꕶ���o�͊֐��iofstream�N���X�j
	}

	system("pause");
	return 0;
}