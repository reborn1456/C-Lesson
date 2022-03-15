#include <string>
using namespace std;

// 銀行口座のイメージ
class Account
{
public:
	Account(string Name, int Balance);
	~Account();

	void showBalance();     // 残高照会

private:
	string  Name;       // 氏名
	int     Balance;    // 残高

};