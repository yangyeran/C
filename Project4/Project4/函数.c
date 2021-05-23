# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//int is_prime(int n)//用函数输出100--200之间的素数
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//	/*if (j > sqrt(n))
//	{*/
//		return 1;
//	//}
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//
//int main()//从一个有序数组中找到其中一个数
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int  ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("找到了这个数的下标是： %d\n", ret);
//	}
//	return 0;
//}
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()//使函数每被调用一次num的值就加一
//{
//	int num = 0;
//	Add(&num);
//	printf("num=  %d\n", num);
//	Add(&num);
//	printf("num=  %d\n", num);
//	Add(&num);
//	printf("num=  %d\n", num);
//	Add(&num);
//	printf("num=  %d\n", num);
//	Add(&num);
//	printf("num=  %d\n", num);
//	return 0;
//}
//
int main()//怎么左边打空格 
{
	int n, i = 0, j = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i<n; i++)
		{
			for (j = 0; j<n - i - 1; j++)
				printf("  ");
			for (j = 0; j <= i; j++)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}
