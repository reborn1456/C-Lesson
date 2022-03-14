#include "1106046kadaic12.h"
#include <cstdlib>
#include <Windows.h>
#include <ctime>

#include <iostream>
using namespace std;

#pragma comment(lib,"winmm.lib")


int getUserHand()
{
	int userHand = 0;
	cout << "Choose your hand(1: Rock   2: Paper   3: Scissors)= ";
	cin >> userHand;

	return userHand;
}

int getComputerHand()
{
	int pcHand = 0;
	pcHand = rand() % 3 + 1;

	return pcHand;
}

int getWinner(int user, int computer)
{
	int winner = 0;

	if (user == computer)
	{
		winner = DRAW;
	}


	if (user == GU && computer == CHOKI)
	{
		winner = USER_WIN;
	}
	else if (user == GU && computer == PA)
	{
		winner = COMPUTER_WIN;
	}
	

	if (user == PA && computer == PA)
	{
		winner = USER_WIN;
	}
	else if (user == PA && computer == CHOKI)
	{
		winner = COMPUTER_WIN;
	}
	
	
	if (user == CHOKI && computer == PA)
	{
		winner = USER_WIN;
	}
	else if (user == CHOKI && computer == PA)
	{
		winner = COMPUTER_WIN;
	}

	return winner;
}

void showWinner(int winner)
{
	if (winner == COMPUTER_WIN)
	{
		cout << "Computer Won.\n";
	}
	if (winner == USER_WIN)
	{
		cout << "You Won.\n";
	}
	if (winner == DRAW)
	{
		cout << "Draw.\n";
	}

	return;
}

int main()
{
	srand(timeGetTime());  //to shuffle the numbers even more than srand(time(0))
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	cout << "*** Rock Paper Scissors ***\n";
	int userHand = getUserHand();
	int pcHand = getComputerHand();
	cout << "User(" << userHand << ") VS Computer(" << pcHand << ")\n";
	int winner = getWinner(userHand, pcHand);
	showWinner(winner);

	system("pause");
	return 0;
}