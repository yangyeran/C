# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("****1.play ****** 0.exit ****\n");
	printf("*****************************\n");
}
void game()
{
	char board[ROW][COL] = { 0 };
	Initboard (board ,ROW ,COL);
	//初始化棋盘
	checkerboard(board,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请确定是否要进行游戏:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	}
	while (input);
}
int main()
{
	test();
	return 0;
}