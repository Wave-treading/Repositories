#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<math.h>
#include<float.h>

int main()
{
	unsigned int i=9u;                       //unsigned int 影响i的读取，不影响i的存放
	                                         //u 明确了9是无符号整形
	for (i = 9;i >= 0;i--)
	{
		printf("%u\n", i);
		Sleep(100);                          //#include<windows.h>
	}//死循环
	unsigned int n = -10u;//程序报错
	printf("%u", n);

	bool ret = true;                 //#include<stdbool.h>
	ret = false;                     //c89 c90标准不支持，c99才支持
	BOOL wr = true;                  //微软标准，可移植性差

	double f1 = 1.0;
	float f2 = 0.1f;                 //0.100000001
	double f3 = 0.1;                 //0.10000000000000001
	if (f1 - 0.9 == 0.1)
	{
		printf("相等1\n");
	}//不会打印，有精度损失
	if (fabs((f1-0.9)-0.1)<DBL_EPSILON)//#include<float.h>
	{
		printf("相等2\n");
	}//正确做法

	return 0;
}