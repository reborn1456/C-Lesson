#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>     // ファイル操作用

#include <string>
#include <iostream>     // 入出力用
using namespace std;

int main()
{
	ofstream fout;     // output file stream
	string s;
	int lineCnt = 1;

	fout.open("kadaic11_data1.txt");     // to open a file, 正常open時は「true」
	if (!fout)
	{
		cout << "File did not open.\n";
		return -1;
	}
	while (true)     // 無限ループ
	{
		getline(cin, s);     // 1行分の文字列を読み込む
		if (s == ".")     // 「.」の入力で終了
		{
			break;
		}
		fout << s << endl;     // ファイルへ書き込み
		lineCnt++;
	}
	fout.close();     // ファイルを閉じる



	ifstream fin;
	string s, store[lineCnt];

	fin.open("kadaic11_data1.txt");
	if (!fin)
	{
		cout << "File did not open. \n";
		return -1;
	}
	cout << "The data inside: \n";
	while (true)     // 無限ループ
	{
		getline(fin, s);     // 1行分の文字列を読み込む

		if (fin.eof())     // end of file（データ(ファイル)の終わり）
		{
			break;
		}

		for (int i = 0; i < lineCnt; i++)
		{
			store[i] = s;     // ファイルから読み出す
		}
	}
	fin.close();     // ファイルを閉じる



	fin.open("kadaic11_data2.txt");
	if (!fin)
	{
		cout << "File did not open. \n";
		return -1;
	}
	cout << "The data inside: \n";
	while (true)     // 無限ループ
	{
		getline(fin, s);     // 1行分の文字列を読み込む

		if (fin.eof())     // end of file（データ(ファイル)の終わり）
		{
			break;
		}

		cout << s << endl;     // ファイルから読み出す
	}
	fin.close();     // ファイルを閉じる


	cout << "Number of data: " << lineCnt << endl;

	system("pause");
	return 0;
}