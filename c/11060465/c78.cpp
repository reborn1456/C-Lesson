#include <fstream>     // ファイル操作用

#include <iomanip>	    // マニピュレータの利用
#include <string>
#include <iostream>     // 入出力用
using namespace std;

int main()
{
	ifstream fin("c78.data");	// ifstream fin;
								// fin.open ("c78.data");

	if (!fin)
	{
		cout << "Couldn't open the file. \n";
		return -1;
	}

	const int num = 10;
	int test[num];
	for (int i = 0; i < num; i++)
	{
		fin >> test[i];
	}

	int max = test[0];
	int min = test[0];
	for (int i = 0; i < num; i++)
	{
		if (max < test[i])
		{
			max = test[i];
		}
		else
		{
			if (min > test[i])
			{
				min = test[i];
			}
		}
	}

	cout << "The highest score is " << setw(5) << max << endl;
	cout << "The lowest score is " << setw(5) << min << endl;
	fin.close();

	system("pause");
	return 0;
}