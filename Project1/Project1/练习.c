# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()/*main��������*/
//{
//	int a = 0;/*int�Ƕ��庯��*/
//	int b = 0;
//	int sum = 0;
//		scanf("%d%d,&a, &b");/*&��ȡ��ַ����scanf�����뺯��*/
//		sum = a + b;
//	printf("sum=%d\n", sum);/*printf���������*/
//	return 0;
//}
int main()
{
	printf("%d\n", sizeof(char));/*sizeof��������������Ĵ�С*/
	printf("%d\n", sizeof(short));/*%d�������������ʮ���ƣ�%f��������Ǹ����ͼ�С����%lf�������˫���ȸ����ͣ�%p ���Ե�ַ����ʽ�����%c��ӡ�ַ���%x��ӡ16���Ƶ����ͣ�%o��ӡ�˽�������*/
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
//	printf("%x\n", a);//��ʮ���������666666
//	return 0;
//}

//{
//	float weight = 65.8f;
//printf("%f\n", weight);
//}