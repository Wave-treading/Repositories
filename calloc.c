#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	int* p = (int*)calloc(10,4);//���ٶ�̬�ڴ�ռ�
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		*(p + i) = i;
	}
	int* str = realloc(p, 80);//׷�ӿռ�
	if (str != NULL)
		p = str;
	for (i = 0;i < 20;i++)
	{
		printf("%d\n", *(p + i));//��ӡ��ַ
	}
	free(p);//�ͷſռ�
	p = NULL;
	return 0;
}