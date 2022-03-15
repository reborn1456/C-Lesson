#include <string>
using namespace std;

class Staff
{
public:
	void setData();
	void showNameAndSalary();

private:
	string Name;
	int PayPerHour;
	int WorkHour;
};