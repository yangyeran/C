# define _CRT_SECURE_NO_WARNINGS 1
/*输入描述：
第一行输入一个整数N(3≤N≤50)。
第二行输入N个整数，用空格分隔N个整数。
输出描述：
输出为一行，如果序列有序输出sorted，否则输出unsorted。*/
#include<stdio.h>
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int n,i;
//	int arr[50] = {0};
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < n - 1; i++)
//	{
//	     if (arr[i] >= arr[i + 1])
//		 {
//			s1++;
//		 }
//		
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//			if (arr[i] <= arr[i+ 1])
//			{
//				s2++;
//			}
//	}
//	if (s1==(n-1)||s2 == (n-1))
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}

int main()
{
	int n, i, s1 = 0, s2 = 0;
	int arr[50] = {0};
	scanf("%d ",&n);	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if(i>0)
		if (arr[i] >= arr[i + i])
			s1 = 1;
		else if(arr[i]<=arr[i+1])
			s2 = 1;
	}
	if (s1 + s2 > 1)
		printf("unsorted\n");
	else
		printf("sorted\n");
	return 0;
}


