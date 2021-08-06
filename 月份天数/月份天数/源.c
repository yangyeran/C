# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0, month = 0;
	while (scanf("%d %d", &year, &month) != EOF)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			if (month == 2)
			{
				printf("%d\n", 29);
				break;
			}
			if (month <= 7)
			{
				if (month % 2 == 1)
					printf("%d\n", 31);
				else
					printf("%d\n", 30);
			}
			if (month >= 8)
			{
				if (month % 2 == 1)
					printf("%d\n", 30);
				else
					printf("%d\n", 31);
			}
		}
		else
		{
			if (month == 2)
			{
				printf("%d\n", 28);
				break;
			}
			if (month <= 7)
			{
				if (month % 2 == 1)
					printf("%d\n", 31);
				else
					printf("%d\n", 30);
			}
			if (month >= 8)
			{
				if (month % 2 == 1)
					printf("%d\n", 30);
				else
					printf("%d\n", 31);
			}
		}
	}
	return 0;
}