# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void bubble_sort(int arr[], int sz)//效率低
//{//确定冒泡排序的躺数
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{//每一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr, sz);//冒泡函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{//确定冒泡排序的躺数
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{//每一趟冒泡排序
		int flag = 1;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(arr, sz);//冒泡函数
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}