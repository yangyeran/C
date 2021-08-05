# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	a = a^b;
	b = a^b;
	a = b^a;
	printf("%d %d ", a, b);
}
//int main()//二进制中1的个数
//{
//	int n = 0,i=0,count=0;
//	scanf("%d", &n);
//	if (n >= 0)
//	{
//		while (n > 0)
//		{
//			i = n & 1;
//			if (i == 1)
//				count++;
//			n = n / 2;
//		}
//		printf("%d\n", count);
//	}
//	//else
//	//{
//	//	int x = 0;
//	//	n = (unsigned)n;
//	//	n = ~n;
//	//	n = n | 1;
//	//  for(x=31;x>0;x--)
//	//	{
//	//		printf("%d ", n%2);
//	//		n = n / 2;
//	//	}
//	//}
//	return 0;
//}