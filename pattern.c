#define _CRT_SECURE_NO_WARNINGS
//�����εĴ�ӡ
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);//����߳�
	int i, j;
	for(j=0;j<n;j++)
	{
		for (i = 0;i < n;i++)
		{
			if (i == 0 || i == n - 1||j==0||j==n-1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");         
	}
	return 0;
}