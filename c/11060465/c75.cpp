#include <sstream>     // 文字列・数値変換処理
#include <fstream>     // ファイル操作用

#include <string>
#include <iostream>     // 入出力用
using namespace std;

int main()
{
    ostringstream sout;   // 出力用文字列ストリーム（数値 → 文字列変換）
    
    ofstream fout;
    int i, n;
    string s;
    
    fout.open ("c75_testFile.txt");
    if (!fout)
    {
        cout << "Could not open the file.\n";
        return -1;

    }
    n = 101;
	for (i = 1; i <= 10; i++)
    {
        sout.str("");          // ①入力ストリームを空にする
        sout << n;             // ②文字列ストリームに数値をセット（数値 → 文字列変換）
        
        s=sout.str();          // ③文字列ストリームから文字列の切り取り
        fout << s << endl;     // 文字列をファイルへ書き込み
        n++;
    }
    fout.close();
    cout << "Written to file!" << endl;
        
	system("pause");
	return 0;
}