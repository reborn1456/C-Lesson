#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	unsigned int Class;

	cout << "Please enter the class you are looking for: ";
	cin >> Class;

	switch (Class)
	{
	case 1:
		cout << "Classroom of Class " << Class << " is 3A." << endl;
		break;
	case 2:
		cout << "Classroom of Class " << Class << " is 3B." << endl;
		break;
	case 3:
		cout << "Classroom of Class " << Class << " is 3C." << endl;
		break;
	case 4:
		cout << "Classroom of Class " << Class << " is 3D." << endl;
		break;
	case 5:
		cout << "Classroom of Class " << Class << " is 3E." << endl;
		break;
	case 6:
		cout << "Classroom of Class " << Class << " is 3F." << endl;
		break;
	default:
		cout << "There is no such class." << endl;
	}

	system("pause");
	return 0;
}