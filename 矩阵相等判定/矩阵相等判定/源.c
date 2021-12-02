# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void assignment(int* srt,int x)
{
	int i = 0,b=x;
	for (i = 0; i < 5; i++)
	{
		*(srt + i) = x;
		x = b + x * 10;
	}
}
void add(int* str)
{
	int i = 0,sum=0;
	for (i = 0; i < 5; i++)
	{
		sum = *(str + i) + sum;
	}
	printf("%d ", sum);
}
int main()
{
	int a = 0,i=0;
	int arr[5] = { 0 };
	scanf("%d", &a);
	assignment(arr,a);
	add(arr);
	return 0;
}
//void print(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//		printf("%d ", *(arr + i));
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}