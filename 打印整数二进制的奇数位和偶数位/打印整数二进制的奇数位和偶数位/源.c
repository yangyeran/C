# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, x = 0, i = 0;
	scanf("%d", &n);
	for (i = 31; i > 0; i -= 2)
	{
		x=(n >> i) & 1;
		printf("%d ", x);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		x = (n >> i) & 1;
		printf("%d ", x);
	}
	return 0;
}