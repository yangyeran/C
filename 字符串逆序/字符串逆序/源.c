# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}
void reverse_string(char* string)//£¨µÝ¹éÊµÏÖ£©
{
		int len = my_strlen(string);
		char temp = *string;
		*string = *(string + len-1);
		*(string + len - 1) = '\0';
		if (my_strlen(string+1 ) >=2)
		{
			reverse_string(string+1);
		}
		*(string + len - 1) = temp;
}
int main()
{
	char arr[20] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}