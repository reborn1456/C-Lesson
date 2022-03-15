#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c67_Student.h"

#include <string>
#include <iostream>
using namespace std;

void subfunction()
{
	cout << "---subfunction\n";
	student tanaka("“c’†", 20);
	tanaka.display();
}

int main()
{
	student yamada("ŽR“c", 15);
	yamada.display();

	student suzuki("", 0);
	suzuki.setName();
	suzuki.setAge();
	suzuki.display();

	subfunction();
	cout << "---return main()---\n";
	yamada.display();
	suzuki.display();


	system("pause");
	return 0;
}