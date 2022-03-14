// マニピュレータ② 10進数以外の指定 ==================================================

#include <iostream>
using namespace std;

int main()
{
	cout << "Show 10 in Decimal(Base 10): " << dec << 10 << endl;
	cout << "Show 10 in Octal(Base 8): " << oct << 10 << endl;
	cout << "Show 12 in Octal(Base 8): " << 12 << endl;
	cout << "Show 10 in Hexadecimal(Base 16): " << hex << 10 << endl;

	system("pause");
	return 0;
}