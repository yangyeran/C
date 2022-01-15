//自守数是指一个数的平方的尾数等于该数自身的自然数。例如：25 ^ 2 = 625，76 ^ 2 = 5776，9376 ^ 2 = 87909376。请求出n(包括n)以内的自守数的个数
//本题有多组输入数据
#include<stdio.h>
#include<math.h>
int Digits(int num)
{
    //算位数
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
        //一个一个找
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
        //跳出有两种情况，当digits等于0时count++
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