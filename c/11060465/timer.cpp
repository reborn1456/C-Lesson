#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t current = time(NULL);										    // 現在の歴時刻取得
	struct tm* timer = localtime(&current);								    // 地方時間へ変換
	char *wday_name[] = { "日", "月", "火", "水", "木", "金", "土" };
	cout << "現在の日付・時刻は、"
		<< timer->tm_year + 1900 << "年"                                    // 1900年からの年数
		<< timer->tm_mon + 1 << "月"                                        // 1月からの月数 (0~11)
		<< timer->tm_mday << "日（"                                         // 日 (1~31)
		<< wday_name[timer->tm_wday] << "）"                                // 曜日 (0~6)
		<< timer->tm_hour << "時"                                           // 時 (0~23)
		<< timer->tm_min << "分"                                            // 分 (0~59)
		<< timer->tm_sec << "秒です\n";                                     // 秒 (0~61)
}