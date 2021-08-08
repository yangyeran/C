# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int left = 0;
	char arr1[10] = "987654321";
	char arr2[10] = "123456789";
	int right = sizeof(arr1) - 1;
	while (right >= left)
	{
		char temp = 0;
		temp = arr1[left];
		arr1[left] = arr2[left];
		arr2[left] = temp;
		left++;
	}
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}