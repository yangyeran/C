# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//�ж��Ƿ�Ϊ����
//{
//	int i =0;
//	scanf("%d",&i);//&�ز����ٰ���������浽i�ĵ�ַ��
//	if (i % 2 == 1)
//	{
//		printf("�����Ϊ����\n");
//	}
//	return 0;
//}
//int main()//�������һ��������switch�ʺ϶��֧
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//	    break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//		return 0;
//}

//int main()//�ж�����
//{
//	int age = 0;
//	scanf("%d", &(age));
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age >= 18 && age <= 28)
//	{
//		printf("����\n");
//		printf("����ʮ��\n");
//	}
//	else
//	{
//		printf("����ϴ�\n");
//		printf("������ܼ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a >=1 && a <= 10; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	int password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N):");
//	ret =getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("ȡ��ȷ��\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//	{
//		printf("he\n");
//		k++;
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int ret = 1;
	scanf("%d ", &n);
	for (n = 1; n <= 10; n++)//�޶�n�ķ�Χ
	{
		for (a = 1; a <= n; a++)//���ѭ������n����
		{
			ret = ret * a;
		}
	}
		printf("ret = %d ",ret);
	return 0;
}