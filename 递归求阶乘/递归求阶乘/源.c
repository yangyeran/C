# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial2(int x)
{
	int j = 0;
	//if (x == 0 || x == 1)
	//	j = 1;
	//else if (x < 0)
	//	printf("输入错误\n");
	//else
	if(x>=2)
		j = factorial2(x - 1)*x;
	return j;
}
int factorial1(int i)
{
	int num = 1, j = 0;
	for (j = 1; j <= i; j++)
	{
		num = num*j;
	}
	return num;
}
int main()//递归非递归分别实现求n的阶乘
{
	int i = 0;
	scanf("%d", &i);
	printf("%d  ", factorial1(i));
	printf("%d  ", factorial2(i));
	return 0;
}