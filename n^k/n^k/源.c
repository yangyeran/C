# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Pow(int n, int y)
{
	if (y > 0)
		return n*Pow(n, y - 1);
	else
		return 1;
}
int main()
{
	int n = 0,k=0;
	while (scanf("%d%d", &n,&k) != EOF)
	{
		printf("%d\n",Pow(n, k));
	}
	return 0;
}