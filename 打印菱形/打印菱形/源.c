# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
		int x=0; 
		int y = 0;
		for (x = 1; x <= 7; x++)
		{
			for (y = 0; y <= 7 - 1 - x; y++)
				printf(" ");
			for (y = 0; y <x; y++)
				printf("* ");
			printf("\n");
		}

		for (x = 0; x<6; x++)
		{
			for (y = 0; y < x+1; y++)
				printf(" ");
			for (y = x; y<6; y++)
				printf("* ");
			printf("\n");
		}
	
}