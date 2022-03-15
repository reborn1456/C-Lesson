#include "c67_Student.h"

#include <iostream>
using namespace std;

student::student(char *s, int a)
{
	cout << "Constructer boot up." << endl;
	strcpy(this->name, s);
	this->age = a;
}

student::~student()
{
	cout << "Destructer boot up." << endl;
}

void student::display()
{
	cout << this->name << "\t" << this->age << endl;
}

void student::setName()
{
	cout << "Name: ";
	cin >> name;
}

void student::setAge()
{
	cout << "Age: ";
	cin >> age;
}