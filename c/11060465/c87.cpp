// インライン関数例

#include <iostream>
using namespace std;

inline int max(int x, int y)     // インライン関数の定義
{
	if (x > y)return x;
	else return y;
}

int main()
{
	int num1, num2, ans;

	cout << "Enter 2 whole numbers: ";
	cin >> num1 >> num2;

	ans = max(num1, num2);     // 関数呼び出し⇒インライン関数はここに埋め込まれる

	cout << "The larger number is: " << ans << endl;

	system("pause");
	return 0;
}