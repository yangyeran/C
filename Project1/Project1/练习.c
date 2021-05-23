# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()/*main是主函数*/
//{
//	int a = 0;/*int是定义函数*/
//	int b = 0;
//	int sum = 0;
//		scanf("%d%d,&a, &b");/*&是取地址符，scanf是输入函数*/
//		sum = a + b;
//	printf("sum=%d\n", sum);/*printf是输出函数*/
//	return 0;
//}
int main()
{
	printf("%d\n", sizeof(char));/*sizeof是输出。。。。的大小*/
	printf("%d\n", sizeof(short));/*%d是输出的整型是十进制，%f是输出的是浮点型即小数，%lf输出的是双精度浮点型，%p 是以地址的形式输出，%c打印字符，%x打印16进制的整型，%o打印八进制整型*/
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof(long));
		printf("%d\n", sizeof(long long));
		printf("%d\n", sizeof(float));
		printf("%d\n", sizeof(double));
	return 0;
}
//int main()
//{
//	int a = 666666;
//	printf("%x\n", a);//以十六进制输出666666
//	return 0;
//}

//{
//	float weight = 65.8f;
//printf("%f\n", weight);
//}