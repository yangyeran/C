# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void bubble_sort(int arr[], int sz)//Ч�ʵ�
//{//ȷ��ð�����������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{//ÿһ��ð������
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
//	//��arr���������ų�����
//	bubble_sort(arr, sz);//ð�ݺ���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{//ȷ��ð�����������
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{//ÿһ��ð������
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
	//��arr���������ų�����
	bubble_sort(arr, sz);//ð�ݺ���
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}