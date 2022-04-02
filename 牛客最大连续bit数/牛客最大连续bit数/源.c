#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int count1 = 0, count = 0, i = num;
    while (i)
    {
        count1++;
        i /= 2;
    }
    int* arr = (int*)malloc(sizeof(int) * count1);
    for (i = count1 - 1; i >= 0; i--)
    {
        arr[i] = num % 2;
        num /= 2;
    }
    //获取到了二进制位
    i = 0;
    while (i < count1)
    {
        int count2 = 1;
        for (int j = i; j < count1; j++)
        {
            if (arr[j] == 1)
            {
                if ((j + 1) < count1 && arr[j + 1] == 1)
                {
                    count2++;
                }
            }
            else
                break;
        }
        //第一轮循环比较完跟原来的count比较
        if (count2 > count)
            count = count2;
        ++i;
    }
    printf("%d\n", count);
    return 0;
}