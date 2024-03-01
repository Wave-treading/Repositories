#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_LENGTH 100//大写命名
int g_val = 10;//g_（global），全局变量
int main()
{
	int i = 0;//定义变量要初始化
	int a = 10;
	sizeof(int);
	sizeof(a);
	sizeof a;//sizeof是操作符，不是函数
	//sizeof int; 关键字跟关键字，报错
	int k = -10;
	printf("%d\n", k);
	printf("%u\n", k);
	unsigned int w = -10;
	printf("%d\n", w);
	printf("%u\n", w);
	char ch = '\0';
	printf("%d\n", ch);//\0的ASCII的值为0
	return 0;
}
