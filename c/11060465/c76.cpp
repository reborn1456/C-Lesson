#include <sstream>     // 文字列・数値変換処理
#include <fstream>     // ファイル操作用

#include <string>
#include <iostream>     // 入出力用
using namespace std;

int main()
{
    istringstream sin;   // 出力用文字列ストリーム（数値 → 文字列変換）
    
    ifstream fin;
    int i, n;
    string s;
    
    fin.open ("c75_testFile.txt");
    if (!fin)
    {
        cout << "Could not open the file.\n";
        return -1;

    }
	for (i = 1; i <= 10; i++)
    {
        getline(fin,s);      // ①ファイルから一行分取り出す
		sin.clear();	     // ②文字列ストリームをクリア
        sin.str(s);		     // ③文字列ストリームに文字列代入
        
        sin >> n;			 // ④文字列ストリームを数値へ変換
        cout << n << endl;   // 数値を画面表示
    }
    fin.close();
        
	system("pause");
	return 0;
}