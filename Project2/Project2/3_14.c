# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//enum Color
//{
//	YELLOW,
//	ROD,
//	BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//
//	return 0;
//}
//int main()//int main()//解释const是常变量
//{
//	const int MAX = 10;//	const MAX = 10;
//	printf("%d\n", MAX);//	int arr[MAX] = { 0 };
//	//	return 0;
//	return 0;
//}
////#define MAX 10 //用define定义的常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	return 0;
//}
//#include <string.h>
////int main()
////{
////	char arr1[4] = "asd";
////	char arr2[4] = { 'a','s','d','\0' };//必须是\0才行，否则arr2会有乱码
////	/*printf("%s\n", arr1);
////	printf("%s\n", arr2);*/
////	printf("%d\n",strlen (arr1));
////	printf("%d\n",strlen (arr2));
////	return 0;
//} 
//int main()
//{
//	/*printf("%c\n", '\x12');*///dd表示的是为十六进制的数字，x为十六进制的标志
//	printf("%c\n", '\123');//ddd表示的是1~3个八进制的数字
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	/*a = a + 10;*/
//	a += 10;//两者的结果相同，+=是缩减形式，同时+=/-=。。。。。为赋值操作符
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	printf("%d\n", !a);//！为单目操作符即只有一个操作数，！是逻辑反操作，计算机中的正反即真假真为1假为0
//
//}
//int main()//&,^,|,为位操作符，关于二进制的计算，按位是一一对应的
//{
//	int a = 22;//&为按位与即真假为假，真真为真，假假为假，真假为假
//	int b = 11;
//	int c ;
//	/*c=a&b;*/
//	/*c = a|b;*///|为按位或，即真假为真，真真为真，假假为假
//	c = a^b;//^为按位异同，计算规律为1，对应的二进制位相同为零，相异则为一
//	printf("%d\n", c);
//
//}
//int Add(int x, int y)//定义库
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int a = 54;
//	int b = 66;
//	int sum = 0;
//	sum = Add(a, b);
//	sum = Add(num1, num2);//这就是定义了一个库，节省了步骤，相当于sum = num1 +num2，多个运算的时候可以很方便
//	printf("%d\n", sum);
//}
#include <math.h>
int main()//输出100-200之间的素数


