#include "c65_MyString.h"

#include <string>   // operator = ‹Lq—p
using namespace std;

int Mystring::length()
{
	return this->len;
}

char Mystring::at(int pos)
{
	return this->buff[pos];
}

char *Mystring::c_str()
{
	return this->buff;
}

void Mystring::clear()
{
	this->buff[0] = '\0';
	this->len = 0;
}

bool Mystring::empty()
{
	return (this->len == 0);
}

char *Mystring::operator = (char *s)
{
	if (strlen(s) <= MAX_LEN)
	{
		strcpy(this->buff, s);
		this->len = strlen(s);
	}
	return this->buff;
}