#include <iostream>
using namespace std;

class student
{
public:
	student(char *s, int a);    // �R���X�g���N�^
	~student();    // �f�X�g���N�^
	void display();
	void setName();
	void setAge();
	void setName2(char *s)
	{
		strcpy(this->name, s);
	}
	void setAge2(int a)
	{
		this->age = a;
	}

private:
	char name[20];
	int age;
};