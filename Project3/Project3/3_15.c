# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//�Ƚ������Ĵ�С
//int main()
//{
//	int a = 33;
//	int b = 12;
//	if (a > b)
//		printf("���ֵ��%d\n", a);
//	else
//		printf("���ֵ��%d\n", b);
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
//	int b = ++a;//ǰ��++�����Լ��ٸ�ֵ
//		//int b = a++;//����++���ȸ�ֵ���Լ�
//	printf("a=%d\n  b=%d\n", a,b);
//	return 0;
//}
int main()
{
	int a = 33;
	int b = 19;
	int max = 0;
	max = (a > b ? a : b);//exp1��exp2��exp3�����ж�a�Ƿ����b�������Ϊ���ִ��a����a��ֵ��max����Ϊ�پͰ�b��ֵ��max
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d\n", max);
}