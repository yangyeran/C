# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//判断是否为奇数
//{
//	int i =0;
//	scanf("%d",&i);//&必不可少把输入的数存到i的地址中
//	if (i % 2 == 1)
//	{
//		printf("这个数为奇数\n");
//	}
//	return 0;
//}
//int main()//输出星期一到星期日switch适合多分支
//{
//	int day = 0;
//	scanf("%d", &day);
//		switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//	    break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//		return 0;
//}

//int main()//判断年龄
//{
//	int age = 0;
//	scanf("%d", &(age));
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age >= 18 && age <= 28)
//	{
//		printf("青年\n");
//		printf("活力十足\n");
//	}
//	else
//	{
//		printf("年龄较大\n");
//		printf("身体机能减弱\n");
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
//	printf("请输入密码:");
//	scanf("%s", &password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N):");
//	ret =getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("取消确认\n");
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
	for (n = 1; n <= 10; n++)//限定n的范围
	{
		for (a = 1; a <= n; a++)//这段循环是求n！的
		{
			ret = ret * a;
		}
	}
		printf("ret = %d ",ret);
	return 0;
}