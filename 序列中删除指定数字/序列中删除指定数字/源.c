# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ������һ������(0��N��50)��
//�ڶ�������N�������������ÿո�ָ���N��������
//������������Ҫ����ɾ����һ��������
int main() //˼·���Ǹ��Ʋ���Ҫɾ������
{
	int i,n,k,j= 0;
	int arr[50] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d ", &arr[i]);
	scanf("%d", &k);//Ҫɾ������
	for (i = 0; i < n; i++)
	{
		if (arr[i] != k)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
		printf("%d ", arr[i]);
	return 0;
}