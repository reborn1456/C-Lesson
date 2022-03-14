#include "1106046kadaic13.h"
#include <cstdlib>
#include <Windows.h> 
#include <conio.h> 

#include <chrono>
#include <iostream>
using namespace std;

#pragma comment(lib,"winmm.lib")

int getDigit()
{
	static int digit1 = 0, digit2 = 0, i = 0;
	if (i == 0)
	{
		digit1 = rand() % 900 + 100;
		digit2 = rand() % 900 + 100;
		i++;
	}

	cout << digit1 << " + " << digit2 << " = ";
	int correct = digit1 + digit2;

	return correct;
}

string getAnswer()
{
	string answer;
	cin >> answer;

	return answer;
}

bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (isdigit(s[i]) == false)
			return false;

	return true;
}

bool judgeAnswer(int ans, int right)
{
	if (ans == right)
	{
		return 1 /* 1 is the same as true */;
	}
	else
	{
		return 0 /* 0 is the same as false */;
	}
}

void showResult(bool result)
{
	if (result == true)
	{
		cout << "Correct!\n";
	}
	else
	{
		cout << "Wrong!\n";
	}
}

chrono::steady_clock::time_point timer()
{
	chrono::steady_clock::time_point start = chrono::steady_clock::now();
	chrono::steady_clock::time_point end = start + chrono::duration_cast<chrono::seconds>(10);

	return end;
}

int main()
{
	time_t start, finish;
	srand(timeGetTime());  //to shuffle the numbers even more than srand(time(0))
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	cout << "*** Calculate this equation ***\n";

	int correct = 0;
	correct = getDigit();

	time(&start);

	string sAnswer;
	bool number = false;
	sAnswer = getAnswer();
	number = isNumber(sAnswer);
	while (!number)
	{
		cout << "ERROR\n";
		cout << "Please enter your answer again using numbers.\n";
		correct = getDigit();
		sAnswer = getAnswer();
		number = isNumber(sAnswer);
	}

	time(&finish);

	int iAnswer = stoi(sAnswer);
	bool judged = judgeAnswer(iAnswer, correct);

	showResult(judged);

	cout << "Time used for this equation is: " << difftime(finish, start) << " secounds.\n";



	while (!kbhit())
		printf("Press any key to start.\n");
	chrono::steady_clock::time_point start = chrono::steady_clock::now();
	chrono::steady_clock::time_point finish = start;

	system("pause");
	return 0;
}