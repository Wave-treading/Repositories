#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i, j;
	for (i = 0;i < 2 * n + 1;i++)
	{
		int k = abs(n - i);
		for (j = 0;j < 2 * k;j++)
		{
			printf(" ");
		}
		for (j = 0;j < (n + 1 - k);j++)
		{
			printf("*");
		}
		printf("\n\n");
	}

	return 0;
}