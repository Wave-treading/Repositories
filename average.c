#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[30] = { 0 };
	int i;
	int n;
	printf("���������ݸ���:");
	scanf("%d", &n);
	printf("����������:\n");
	for (i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	int num = arr[0];
	for (i = 1;i < n;i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
		num += arr[i];
	}
	num = num - min - max;
	printf("ƽ����Ϊ��%.2lf", (double)num / (double)(n - 2));
	return 0;
}