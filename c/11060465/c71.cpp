#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>     // �t�@�C������p

#include <string>
#include <iostream>
using namespace std;

int main()
{
	ofstream fout;     // output file stream
	string s;

	fout.open("c71_test.txt");     // to open a file, ����open���́utrue�v
	if (!fout)
	{
		cout << "File did not open.\n";
		return -1;
	}
	while (true)     // �������[�v
	{
		getline(cin, s);     // 1�s���̕������ǂݍ���
		if (s == ".")     // �u.�v�̓��͂ŏI��
		{
			break;
		}
		fout << s << endl;     // �t�@�C���֏�������
	}
	fout.close();     // �t�@�C�������

	system("pause");
	return 0;
}