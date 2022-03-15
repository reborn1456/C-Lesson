#define MAX_LEN 100   // •¶š—ñ‚ÌÅ‘å’·

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
	char  buff[MAX_LEN + 1];   // •¶š—ñŠi”[—p
	int   len;                 // •¶š—ñ’·
};