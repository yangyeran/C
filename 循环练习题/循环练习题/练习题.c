# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>

//int main()//求的是1！+2！+3！+4!+5!+6!......10!的和
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d ", &n);
//	for (n = 1; n <= 10; n++)//限定n的范围	
//	{
//		for (a = 1,ret=1; a <= n; a++)//这段循环是求n！的,ret=1必不可少
//		{
//			ret = ret * a;
//		}
//		sum += ret;
//	}
//	printf("sum = %d ", sum);
//	return 0;
//}
//int main()//求的是1！+2！+3！+4!+5!+6!......10!的和,这样使代码效率更高
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d ", &n);
//	for (n = 1; n <=10; n++)//限定n的范围	
//	{
//		ret = ret*n;
//		sum += ret;
//	}
//	printf("sum = %d ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret = %d", ret);
//	return 0;
//}
////int main()
////{
////	int n = 0;
////	int ret = 1;
////	int sum = 0;
////	scanf("%d", &n);
////	for (n = 1; n <= 10; n++)
////	{
////		sum =sum+ ret*n;
////	}
////	printf("sum = %d", sum);
////	return 0;
////}
//int main()//在一个有序的arr数组中查找某一个数
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()//从一个有序数组中找到其中一个数
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int  i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	scanf(" %d", &i);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = left + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = right - 1;
//		}
//		else
//		{
//			printf("找到了这个数的下标是： %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}//这是二分查找算法
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		sum = ret*n + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to here !!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//	}
//	printf("welcome to here!!!!!!\n");
//	return 0;
//}
//int main()//判断密码输入是否正确，有三次输入机会，错误退出程序
//{
//	char password [20];
//	int n = 0;
//	for (n = 0; n<3; n++)
//	{
//		printf("请输入密码： ");
//		scanf("%s", &password);
//		if (strcmp(password, "jiatenghuiyyds") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (n == 3)
//		printf("退出程序，请重新登录\n");
//	return 0;
//}
//int main()//比较三个数的大小
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入三个数： \n");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		printf("%d\n", a);
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d\n", b);
//	}
//	else if (c > a && c > b)
//	{
//		printf("%d\n", c);
//	}
//	else
//		return 0;
//}
//int main()//使三个数从大到小的输出
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入三个数： \n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tam = a;
//		a = b;
//		b = tam;
//	}
//	if (a < c)
//	{
//		int tam = a;
//		a = c;
//		c = tam;
//	}
//	if (b < c)
//	{
//		int tam = b;
//		b = c;
//		c = tam;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()//输出1--100之间3的倍数
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{	
//		if (i%3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
////}
//int main()//求两个数的最大公约数
//{
//	int a = 1;
//	int b = 1;
//	int n = 0;
//	scanf("%d%d", &a, &b);
//	while (n = a%b)
//	{
//		a = b;
//		b = n;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//int main()//打印1000到2000之间的闰年(能被四整除且不能被100整除的数)
//{
//	int year = 1000;
//    int count = 0;
//	for (year = 1000; year <= 2000 ; year++)
//	{
//		if (year % 4 == 0 && year%100 != 0)
//		{
//			printf("%d ", year);
//            count++;
//		}
//	}
//printf("\ncount=%d \n",count);
//	return 0;
//}
int main()//打印100--200之间的素数
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount= %d\n", count);
	return 0;

}