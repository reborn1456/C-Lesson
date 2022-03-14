#include <stdlib.h>   // for c, standard library
#include <time.h>   // for c, time
#include <stdio.h>   // for c, input & output
#include <Windows.h>   // for timeGetTime()

#pragma comment(lib,"winmm.lib")   // for timeGetTime()

main()
{


	srand(time(0));  //to shuffle the numbers
	srand(timeGetTime());  //to shuffle the numbers even more than srand(time(0))
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	/* if Max is 5:
			rand() % (Max + 1);   // 0~Max‚Ü‚Å 
			This gives you 0, 1, 2, 3, 4, 5   */

	/* if Max is 5:
			rand() % (Max);   // 0~Max-1‚Ü‚Å 
			This gives you 0, 1, 2, 3, 4   */

	// rand() % Max - Min + 1 + Min;

	system("pause");
	return 0;
}