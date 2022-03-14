#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int su1, su2;

	cout << "®” = ";
	cin >> su1;
	cout << "®” = ";
	cin >> su2;

	while (su1 != su2)
	{
		if (su1 > su2)
		{
			su1 -= su2;
		}
		else
		{
			su2 -= su1;
		}
	}

	cout << "Å‘åŒö–ñ”‚ÍA" << su1 << "‚Å‚·" << endl;

	system("pause");
	return 0;
}