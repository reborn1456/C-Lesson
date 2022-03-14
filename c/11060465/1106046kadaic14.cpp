#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#pragma comment(lib,"winmm.lib")

void touchTypingWord(int *cnt)
{
	int num = 0;
	char* letter, ans;

	rand();  // similar number shows up often, therefore get this 1st number but not use it

	num = rand() % 26 + 97;
	itoa(num, letter, 10);
	
	cout << "\n" << letter << "\t";
	cin >> ans;
	if (ans == letter)
	{
		*cnt++;
	}
	return;
}

void touchTypingSentance(int *cnt)
{
	ifstream fin;     // input file stream
	string s, ans;
	int line = 0, same = 0;

	rand();  // similar number shows up often, therefore get this 1st number but not use it

	line = rand() % 28 + 1;
	
	fin.open("TouchTyping.txt");     // ファイルを開く, 正常open時は「true」
	if (!fin)
	{
		cout << "File did not open. \n";
		return;
	}
	for (int i = 1; i < line; i++)
	{
		getline(fin, s);     // 1行分の文字列を読み込む
	}

	fin.close();     // ファイルを閉じる

	cout << s << endl;     // ファイルから読み出す
	cin >> ans;
	same = ans.compare(s);
	if (same == 0)
	{
		*cnt++;
	}

	return;
}

int main()
{
	int ques = 0, cnt = 0;

	srand(timeGetTime());  //to shuffle the numbers even more than srand(time(0))
	rand();  // similar number shows up often, therefore get this 1st number but not use it

	cout << "Touch Typing - Type out everything you see on the screen.";
	for (int i = 0; i < 10; i++)
	{
		ques = rand() % 2 + 1;

		if (ques == 1)
		{
			touchTypingWord(&cnt);
		}
		else if (ques == 2)
		{
			touchTypingSentance(&cnt);
		}
	}
	cout << "\nYou've typed " << cnt << " correctly.\n";

	system("pause");
	return 0;
}