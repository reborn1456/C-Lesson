// �z��moji�ɃL�[�{�[�h���當�������͂��A�֐�prt�łP������΂��ŕ\�����A���C�����őS�̂̕�������\�����������\��\������B

#include <iostream>
using namespace std;

void prt(char *p_moji)
{
	int len = strlen(p_moji);
	
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			cout << *p_moji;
		}
		*p_moji++;
	}
	cout << "\n";

}

int main()
{
	char moji[30];

	cout << "Enter a word: ";
	cin >> moji;

	prt(moji);

	system("pause");
	return 0;
}