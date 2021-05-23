# define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)//初始化数组row是行col是列
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = '  ';
		}
	}
}
void checkerboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col - 1)
				printf("|");
		}
		printf("\n");
		if (i< row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}