#include <Windows.h>   // for timeGetTime()
#include <cstdlib>   // for c++, standard library
#include <ctime>   // for c++, time
#include <iostream>   // for c++, input & output
using namespace std;

#pragma comment(lib,"winmm.lib")   // for timeGetTime()

int main()
{


	srand(time(0));  //to shuffle the numbers
	srand(timeGetTime());  //to shuffle the numbers even more than srand(time(0))
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	/* if Max is 5:
			rand() % (Max + 1);   // 0~Max?܂?
			This gives you 0, 1, 2, 3, 4, 5   */

	/* if Max is 5:
			rand() % (Max);   // 0~Max-1?܂?
			This gives you 0, 1, 2, 3, 4   */

	// rand() % Max - Min + 1 + Min;

	system("pause");
	return 0;
}