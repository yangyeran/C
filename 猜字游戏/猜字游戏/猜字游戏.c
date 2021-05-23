# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include <stdlib.h>
void game()
{
	int  num = 0;
	int i = 0;
	num = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &i);
		if (i < num)
		{
		    printf("猜小了\n");
		}
		else if (i > num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
void emun(int input)
{
	printf("*********************************\n");
	printf("****1.play             2.exit****\n");
	printf("*********************************\n");
	scanf("%d", &input);
	do
	if (1 == input)
	{
		printf("请猜数字：");
		game();
	}
	else if (2 == input)
	{
		printf("结束游戏\n");
		break;
	}
	else
	{
		printf("输入错误请重新输入：\n");
		break;
	}

	while (input);
}


int main()
{
	int input = 0;
	printf("猜数字游戏，请输入1—100之间的数：\n");
	emun(input);
	srand((unsigned int)time(NULL));
	return 0;
}