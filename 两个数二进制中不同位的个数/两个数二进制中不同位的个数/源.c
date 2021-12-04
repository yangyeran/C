# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//求两个数二进制中不同位的个数
{
	int n, m,x=0,count = 0;
	scanf("%d%d", &n, &m);
	x = n^m;//同为零异为一
	do
	{
		int i = 0;
		i = x & 1;
		if (i == 1)
		{
			count++;
		}
		x = x / 2;
	} while (x);
	printf("%d\n", count);
	return 0;
}