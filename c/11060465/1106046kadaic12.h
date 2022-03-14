// 関数のプロトタイプ宣言
int getUserHand();
int getComputerHand();
int getWinner(int user, int computer);
void showWinner(int winner);

// 手を表す数値の定義
#define GU          1
#define PA          2
#define CHOKI       3

// 勝敗を表す数値を定義
#define USER_WIN            1
#define COMPUTER_WIN	    2
#define DRAW                3