# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(char* parr,int sz)
{
	int left = 0;
	int right = sz - 1; 
	int tmp = 0;
	while (right > left)
	{
		while ((left<right)&&(parr[left] % 2 == 1))
		{
			left++;
		}
		while ((left<right)&&(parr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			tmp = parr[left];
			parr[left] = parr[right];
			parr[right] = tmp;
		}
	}
}
int main()
{
	char arr[5] = { 0 };
	int i = 0,sz=0;
	sz = sizeof(arr) / sizeof(arr[0]);
	gets(arr);
	fun(arr,sz);
	printf("%s\n", arr);
	return 0;
}










//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int x = 0;//瓶子数
//	int y = 0;//能喝多少瓶
//	scanf("%d", &money);
//	x = money;
//	y = money;
//	while(x > 1)
//	{
//		y = x / 2 + y;
//		x = x / 2+x % 2;
//	}
//	printf("%d", y);
//	return 0;
//}
