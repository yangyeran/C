# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int jump(int n)//1,2,3,5,8......
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	if (n <= 2)
	{
		return n;
	}
	while(n>2)
	{
		c = a + b;
		d = a + b + c;
		b = c;
		a = b;
		n--;
	}
	return d;
}
int main()//������̨���������һ��1,2,3,��̨��,���ж����ֿ���
{
	int n =0;
	printf("������һ���ж��ٸ�̨�ף�");
	scanf("%d", &n);
	int ret =jump(n);
	printf("����һ���У� %d������\n",ret);
	return 0;
}