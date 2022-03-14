#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 19
#define HEIGHT 15

main()
{
	int meiro[HEIGHT][WIDTH];/* = { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} , 
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1} ,
							   {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1} };*/
	int i, j;

	//make the wall
	//row
	for (int i = 0; i < HEIGHT; i++)
	{
		//column
		for (int j = 0; j < WIDTH; j++)
		{
			if (i == 0 || i == 14 || j == 0 || j == 18)
			{
				Map[i][j] = 1;
			}
		}
	}
	/* //column
	for (i = 0; i < 19; i++)
	{
		meiro[0][i] = 1;
		meiro[14][i] = 1;
	}
	//row
	for (i = 0; i < 15; i++)
	{
		meiro[i][0] = 1;
		meiro[i][18] = 1;
	}
	
	//put 0 in the middle
	for (i = 1; i < 14; i++)
	{
		for (j = 1; j < 18; j++)
		{
				meiro[i][j] = 0;
		}
	} */

	//make a random maze
	srand(time(0));  //to shuffle the numbers
	rand();  // similar number shows up often, therefore get this 1st number but not use it
	for (i = 1; i < 14; i++)
	{
		for (j = 1; j < 18; j++)
		{
			if (rand() % 2 == 0)
			{
				meiro[i][j] = 1;
			}
		}
	}

	//print out the maze
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 19; j++)
		{
			switch(meiro[i][j])
				case 0:
					printf(" ");
					break;
				case 1:
					printf("■");
					break;


			/*if (meiro[i][j] == 1)
			{
				printf("■");
			}
			else if (meiro[i][j] == 0)
			{
				printf(" ");
			}*/

		}
		printf("\n");
	}

	system("pause");
	return 0;
}