#include <string>
using namespace std;

// ��s�����̃C���[�W
class Account
{
public:
	Account(string Name, int Balance, string Phone);
	~Account();

	void showBalance();     // �c���Ɖ�

private:
	string  Name;       // ����
	int     Balance;    // �c��
	string  Phone;      // �d�b�ԍ�

};