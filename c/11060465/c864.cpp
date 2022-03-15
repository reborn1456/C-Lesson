// ‚Q‚Â‚Ì’l‚©‚ç‘å‚«‚¢•û‚Ì’l‚ð•Ô‚·

#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x > y)return x;
	else return y;
}

int main()
{
	int num1, num2, ans;

	cout << "Enter 2 whole numbers: ";
	cin >> num1 >> num2;

	ans = max(num1, num2);

	cout << "The larger number is: " << ans << endl;

	system("pause");
	return 0;
}