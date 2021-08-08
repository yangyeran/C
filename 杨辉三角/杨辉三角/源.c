# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[100][100] = {0};
	int row = 0;//ÐÐ
	scanf("%d", &row);
	int i = 0,j = 0;;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <=i; j++)
		{
			if (j==0||j==row-1)// i == j
				arr[i][j]=1;
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}