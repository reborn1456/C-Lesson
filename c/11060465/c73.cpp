#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <fstream>     // ファイル操作用

#include <string>
#include <iostream>
using namespace std;

int main()
{
	ifstream fin;
	string fileName, s;

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

		cout << s << endl;     // ファイルから読み出す
	}
	fin.close();     // ファイルを閉じる

	system("pause");
	return 0;
}