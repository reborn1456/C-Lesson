#include <string>
using namespace std;

// 銀行口座のイメージ
class Account
{
public:
	Account(string Name, int Balance, string Phone);
	~Account();

	void showBalance();     // 残高照会

private:
	string  Name;       // 氏名
	int     Balance;    // 残高
	string  Phone;      // 電話番号

};