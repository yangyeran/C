# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 0,x=i,count=1,y=0;
		int b = i;
			while (x/10)
			{
				x = x / 10;
				count++;
			}
			while (b)
			{
				y = pow((b % 10), count)+y;
				b = b / 10;
			}
			if (y == i)
				printf("%d ", i);
		
	}
	return 0;
}