#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>     // �t�@�C������p

#include <string>
#include <iostream>     // ���o�͗p
using namespace std;

int main()
{
	ifstream fin;
	string fileName, s;
	int lineCnt = 1;

	cout << "Please enter the name of the file which you would like to open: ";
	cin >> fileName;

	fin.open(fileName);
	if (!fin)
	{
		cout << "File did not open. \n";
		return -1;
	}
	cout << "The data inside: \n";
	while (true)     // �������[�v
	{
		getline(fin, s);     // 1�s���̕������ǂݍ���

		if (fin.eof())     // end of file�i�f�[�^(�t�@�C��)�̏I���j
		{
			break;
		}

		cout << "Line" << lineCnt << "   " << s << endl;     // �t�@�C������ǂݏo��
		lineCnt++;
	}
	fin.close();     // �t�@�C�������

	system("pause");
	return 0;
}