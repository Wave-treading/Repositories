#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ӡ����
int main()
{
	int line;
	printf("�����ϰ벿������:");
	scanf("%d", &line);
	int i;
	//��ӡ�ϰ벿��
	for (i = 0;i < line;i++)
	{
		int j;
		for (j=0;j<line-i-1;j++)
			printf(" ");
		for (j = 0;j < 2 * i + 1;j++)
			printf("*");
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0;i < line - 1;i++)
	{
		int j;
		for (j = 0;j <= i;j++)
			printf(" ");
		for (j = 0;j < 2 * (line - i) - 3;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}