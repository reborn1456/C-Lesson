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
	ofstream fout;     // output file stream
	string s;
	int lineCnt = 1;

	fout.open("kadaic11_data1.txt");     // to open a file, ����open���́utrue�v
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
		lineCnt++;
	}
	fout.close();     // �t�@�C�������



	ifstream fin;
	string s, store[lineCnt];

	fin.open("kadaic11_data1.txt");
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

		for (int i = 0; i < lineCnt; i++)
		{
			store[i] = s;     // �t�@�C������ǂݏo��
		}
	}
	fin.close();     // �t�@�C�������



	fin.open("kadaic11_data2.txt");
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

		cout << s << endl;     // �t�@�C������ǂݏo��
	}
	fin.close();     // �t�@�C�������


	cout << "Number of data: " << lineCnt << endl;

	system("pause");
	return 0;
}