#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include <limits.h>
enum Status
{
	VALID,
	INVALID
}sta=INVALID;
int my_atoi(const char* str)
{
	int flag = -1;
	assert(str);
	if (*str == '\0')
		return 0;
	while (isspace(*str))
		str++;
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	long long ret = 0;
	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
				return 0;
		}
		else
			return (int)ret;
		str++;
	}
	if(*str=='\0')
	sta = VALID;
	return  (int)ret;
}
int main()
{
	char arr[100] = "1234dh5";
	int ret = my_atoi(arr);
	if (sta == INVALID)
	{
		printf("非法返回:%d\n", ret);
	}
	else if (sta == VALID)
	{
		printf("合法转换:%d\n", ret);
	}
	printf("%d\n", ret);
	return 0;
}