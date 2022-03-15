#define _USE_MATH_DEFINES
#include <math.h>

#include <iostream>
using namespace std;

void circle(int r)
{
	cout << "The area of this circle is " << r * r * M_PI << " and the circumfrance of the circle is " << 2 * M_PI * r << endl;
}

int main()
{
	int radius;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	circle(radius);

	system("pause");
	return 0;
}