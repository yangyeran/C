# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//���������������в�ͬλ�ĸ���
{
	int n, m,x=0,count = 0;
	scanf("%d%d", &n, &m);
	x = n^m;//ͬΪ����Ϊһ
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