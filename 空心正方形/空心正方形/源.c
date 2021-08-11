# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	while (scanf("%d", &i) != EOF)
	{
		int x, y;
		for (x = 0; x<i; x++)
		{
			if (x == 0 || x == i - 1)
				for (y = 0; y < i; y++)
				{
					printf("* ");
				}
			else
			{
				for (y = 0; y < i; y++)
				{
					if (y == 0|| y == i - 1)
					printf("* ");
					else 
						printf("  ");
				}
			}
			printf("\n");
		}
	}
}