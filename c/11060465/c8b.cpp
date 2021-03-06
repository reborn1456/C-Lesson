// 整数２つ入力時と整数３つ入力時にそれぞれ関数calcで合計と平均を求めて表示する

#include <iostream>

void calc(int x, int y);
void calc(int x, int y, int z);

int main()
{
	int a, b, c;

	std::cout << "Enter 2 whole numbers: ";
	std::cin >> a >> b;

	calc(a, b);

	std::cout << "Enter 3 whole numbers: ";
	std::cin >> a >> b >> c;

	calc(a, b, c);

	system("pause");
	return 0;
}

void calc(int x, int y)
{
	std::cout << "Total: " << x + y << std::endl << "Average: " << (x + y) / 2.f << std::endl << std::endl;
}

void calc(int x, int y, int z)
{
	std::cout << "Total: " << x + y + z << std::endl << "Average: " << (x + y + z) / 3.f << std::endl;
}