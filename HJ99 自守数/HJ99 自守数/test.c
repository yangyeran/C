//��������ָһ������ƽ����β�����ڸ����������Ȼ�������磺25 ^ 2 = 625��76 ^ 2 = 5776��9376 ^ 2 = 87909376�������n(����n)���ڵ��������ĸ���
//�����ж�����������
#include<stdio.h>
#include<math.h>
int Digits(int num)
{
    //��λ��
    int digits = 0;
    if (num < 10)
        return 1;
    while (num)
    {
        num = num / 10;
        ++digits;
    }
    return digits;
}
int Find(int num)
{
    int count = 0;
    for (int i = 0; i <= num; ++i)
    {
        //һ��һ����
        int x = i;
        int digits = Digits(i);
        int square = (int)pow(i, 2);
        while (digits)
        {
            int j = x % 10;
            int k = square % 10;
            if (j == k)
            {
                x /= 10;
                square /= 10;
                --digits;
            }
            else
                break;
        }
        //�����������������digits����0ʱcount++
        if (digits == 0)
            ++count;
    }
    return count;
}
int main()
{
    int num = 0;
    while (scanf("%d", &num) != EOF)
    {
        printf("%d\n", Find(num));
    }
    return 0;
}