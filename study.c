#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_LENGTH 100//��д����
int g_val = 10;//g_��global����ȫ�ֱ���
int main()
{
	int i = 0;//�������Ҫ��ʼ��
	int a = 10;
	sizeof(int);
	sizeof(a);
	sizeof a;//sizeof�ǲ����������Ǻ���
	//sizeof int; �ؼ��ָ��ؼ��֣�����
	int k = -10;
	printf("%d\n", k);
	printf("%u\n", k);
	unsigned int w = -10;
	printf("%d\n", w);
	printf("%u\n", w);
	char ch = '\0';
	printf("%d\n", ch);//\0��ASCII��ֵΪ0
	return 0;
}
