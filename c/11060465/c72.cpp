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
	ofstream fout;     // output file stream
	string s, fileName;

	cout << "Please enter the name of the file which you would like to open: ";
	cin >> fileName;

	fout.open(fileName);     // to open a file, 正常open時は「true」
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
	}
	fout.close();     // ファイルを閉じる

	system("pause");
	return 0;
}