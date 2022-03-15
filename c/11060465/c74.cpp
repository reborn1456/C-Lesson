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
	while (true)     // 無限ループ
	{
		getline(fin, s);     // 1行分の文字列を読み込む

		if (fin.eof())     // end of file（データ(ファイル)の終わり）
		{
			break;
		}

		cout << "Line" << lineCnt << "   " << s << endl;     // ファイルから読み出す
		lineCnt++;
	}
	fin.close();     // ファイルを閉じる

	system("pause");
	return 0;
}