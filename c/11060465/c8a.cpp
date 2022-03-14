// ®”‚Æ¬”‚ÅA‘å‚«‚¢•û‚Ì’l‚ğ•Ô‚·ŠÖ”max‚ğì¬‚·‚é

#include <iostream>

int max(int x, int y);
double max(double x, double y);

int main()
{
	int a, b;
	double da, db;

	std::cout << "Enter 2 whole numbers: ";
	std::cin >> a >> b;

	std::cout << "Enter 2 whole numbers: ";
	std::cin >> da >> db;

	int ans1 = max(a, b);
	double ans2 = max(da, db);

	std::cout << "The larger number is " << ans1 << std::endl;
	std::cout << "The larger number is " << ans2 << std::endl;

	system("pause");
	return 0;
}

int max(int x, int y)
{
	if (x > y) return x;
	else return y;
}

double max(double x, double y)
{
	if (x > y) return x;
	else return y;
}