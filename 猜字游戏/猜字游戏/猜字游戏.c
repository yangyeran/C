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
		    printf("��С��\n");
		}
		else if (i > num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("������֣�");
		game();
	}
	else if (2 == input)
	{
		printf("������Ϸ\n");
		break;
	}
	else
	{
		printf("����������������룺\n");
		break;
	}

	while (input);
}


int main()
{
	int input = 0;
	printf("��������Ϸ��������1��100֮�������\n");
	emun(input);
	srand((unsigned int)time(NULL));
	return 0;
}