# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第一行输入一个整数(0≤N≤50)。
//第二行输入N个整数，输入用空格分隔的N个整数。
//第三行输入想要进行删除的一个整数。
int main() //思路就是复制不是要删除的数
{
	int i,n,k,j= 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d ", &arr[i]);
	scanf("%d", &k);//要删除的数
	for (i = 0; i < n; i++)
	{
		if (arr[i] != k)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
		printf("%d ", arr[i]);
	return 0;
}