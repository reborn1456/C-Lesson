#include <iostream>

using namespace std;

void Tutor(int Class)
{
	switch (Class)
	{
	case 1:
		cout << "The tutor of Class " << Class << " is Mr. Aoyama." << endl;
		break;
	case 2:
		cout << "The tutor of Class " << Class << " is Mr. Oonishi." << endl;
		break;
	case 3:
		cout << "The tutor of Class " << Class << " is Mr. Seishou." << endl;
		break;
	case 4:
		cout << "The tutor of Class " << Class << " is Mr. Akihara." << endl;
		break;
	case 5:
		cout << "The tutor of Class " << Class << " is Mr. Kurosaki." << endl;
		break;
	case 6:
		cout << "The tutor of Class " << Class << " is Mr. Yamamoto." << endl;
		break;
	default:
		cout << "There is no such class." << endl;
	}
}