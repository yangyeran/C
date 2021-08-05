# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fibonacci1(int num)//µÝ¹é
{
	if (num == 1 || num == 2) 
	{
		return 1;
	}
	else 
	{
		return Fibonacci1(num - 1) + Fibonacci1(num - 2);
	}
}
int Fibonacci2(int n) //·ÇµÝ¹é
{
	int num1 = 1, num2 = 1,tmp = 0;
	int i = 0;
	if (n < 3) 
	{
		return 1;
	}
	else 
	{
		for (i = 0; i <= n - 3; i++) 
		{
			tmp = num1 + num2;
			num1 = num2;
			num2 = tmp;
		}
		return tmp;
	}
}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d  ", Fibonacci1(n));
		printf("%d\n", Fibonacci2(n));
	}
	return 0;
}