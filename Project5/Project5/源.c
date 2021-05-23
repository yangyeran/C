# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int jump(int n)//1,2,3,5,8......
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	if (n <= 2)
	{
		return n;
	}
	while(n>2)
	{
		c = a + b;
		d = a + b + c;
		b = c;
		a = b;
		n--;
	}
	return d;
}
int main()//青蛙跳台阶问题可跳一次1,2,3,个台阶,求有多少种可能
{
	int n =0;
	printf("请输入一共有多少个台阶：");
	scanf("%d", &n);
	int ret =jump(n);
	printf("青蛙一共有： %d种跳法\n",ret);
	return 0;
}