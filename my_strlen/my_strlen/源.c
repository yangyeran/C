# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen1(const char*str)//·ÇµÝ¹é
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}
int my_strlen2(const char* str)//µÝ¹é
{
	
	static int count = 0;
	assert(str != NULL);
	if (*str++)
	{
		my_strlen2(str);
		count++;
	}
	return count;
}
int main()
{
	char arr[100];
	gets(arr);
	printf("%d ", my_strlen1(arr));
	printf("%d ", my_strlen2(arr));
	return 0;
}