# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		scanf("%d", &arr[i]);
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int*arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (right > left)
	{
		int temp = 0;
		temp=arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	reverse(arr,sz);
	print(arr, sz);
	return 0;
}