# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//比较两数的大小
//int main()
//{
//	int a = 33;
//	int b = 12;
//	if (a > b)
//		printf("最大值是%d\n", a);
//	else
//		printf("最大值是%d\n", b);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 55;
//	int b = 11;
//	int z = 0;
//	z = MAX(a, b);
//	printf("%d\n", z);
//}
//int main()
//{
//	int a =0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++即先自加再赋值
//		//int b = a++;//后置++是先赋值再自加
//	printf("a=%d\n  b=%d\n", a,b);
//	return 0;
//}
int main()
{
	int a = 33;
	int b = 19;
	int max = 0;
	max = (a > b ? a : b);//exp1？exp2：exp3；即判断a是否大于b如果大于为真就执行a即把a赋值给max，若为假就把b赋值给max
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d\n", max);
}