#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t current = time(NULL);										    // ���݂̗������擾
	struct tm* timer = localtime(&current);								    // �n�����Ԃ֕ϊ�
	char *wday_name[] = { "��", "��", "��", "��", "��", "��", "�y" };
	cout << "���݂̓��t�E�����́A"
		<< timer->tm_year + 1900 << "�N"                                    // 1900�N����̔N��
		<< timer->tm_mon + 1 << "��"                                        // 1������̌��� (0~11)
		<< timer->tm_mday << "���i"                                         // �� (1~31)
		<< wday_name[timer->tm_wday] << "�j"                                // �j�� (0~6)
		<< timer->tm_hour << "��"                                           // �� (0~23)
		<< timer->tm_min << "��"                                            // �� (0~59)
		<< timer->tm_sec << "�b�ł�\n";                                     // �b (0~61)
}