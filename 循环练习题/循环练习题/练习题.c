# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>

//int main()//�����1��+2��+3��+4!+5!+6!......10!�ĺ�
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d ", &n);
//	for (n = 1; n <= 10; n++)//�޶�n�ķ�Χ	
//	{
//		for (a = 1,ret=1; a <= n; a++)//���ѭ������n����,ret=1�ز�����
//		{
//			ret = ret * a;
//		}
//		sum += ret;
//	}
//	printf("sum = %d ", sum);
//	return 0;
//}
//int main()//�����1��+2��+3��+4!+5!+6!......10!�ĺ�,����ʹ����Ч�ʸ���
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d ", &n);
//	for (n = 1; n <=10; n++)//�޶�n�ķ�Χ	
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
//int main()//��һ�������arr�����в���ĳһ����
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i=0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()//��һ�������������ҵ�����һ����
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
//			printf("�ҵ�����������±��ǣ� %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}//���Ƕ��ֲ����㷨
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
//int main()//�ж����������Ƿ���ȷ��������������ᣬ�����˳�����
//{
//	char password [20];
//	int n = 0;
//	for (n = 0; n<3; n++)
//	{
//		printf("���������룺 ");
//		scanf("%s", &password);
//		if (strcmp(password, "jiatenghuiyyds") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (n == 3)
//		printf("�˳����������µ�¼\n");
//	return 0;
//}
//int main()//�Ƚ��������Ĵ�С
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������ \n");
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
//int main()//ʹ�������Ӵ�С�����
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("������������ \n");
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
//int main()//���1--100֮��3�ı���
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{	
//		if (i%3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
////}
//int main()//�������������Լ��
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
//int main()//��ӡ1000��2000֮�������(�ܱ��������Ҳ��ܱ�100��������)
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
int main()//��ӡ100--200֮�������
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