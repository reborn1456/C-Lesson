#include <iostream>     // 入出力用
using namespace std;

int main()
{
	char ch;

	cout << "Please enter a sentance with words connected to each other.\n";
	while (cin.get(ch))     // 一文字入力関数（ifstreamクラス）空白文字も入力可
	{
		cout.put(ch);       // 一文字出力関数（ofstreamクラス）
	}

	system("pause");
	return 0;
}