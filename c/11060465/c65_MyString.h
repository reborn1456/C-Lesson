#define MAX_LEN 100   // ������̍ő咷

class Mystring
{
public:
	int length();
	char at(int pos);
	char *c_str();
	void clear();
	bool empty();
	char *operator = (char *s);

private:
	char  buff[MAX_LEN + 1];   // ������i�[�p
	int   len;                 // ������
};