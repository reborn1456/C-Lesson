#include <iostream>

using namespace std;

void Classroom(int Class)
{
	switch (Class)
	{
	case 1:
		cout << "And the classroom of Class " << Class << " is 3A." << endl;
		cout << "Which locates in the North Wing." << endl;
		break;
	case 2:
		cout << "And the classroom of Class " << Class << " is 3B." << endl;
		cout << "Which locates in the North Wing." << endl;
		break;
	case 3:
		cout << "And the classroom of Class " << Class << " is 3C." << endl;
		cout << "Which locates in the North Wing." << endl;
		break;
	case 4:
		cout << "And the classroom of Class " << Class << " is 3D." << endl;
		cout << "Which locates in the South Wing." << endl;
		break;
	case 5:
		cout << "And the classroom of Class " << Class << " is 3E." << endl;
		cout << "Which locates in the South Wing." << endl;
		break;
	case 6:
		cout << "And the classroom of Class " << Class << " is 3F." << endl;
		cout << "Which locates in the South Wing." << endl;
		break;
	default:
		cout << "There is no such class." << endl;
	}
}