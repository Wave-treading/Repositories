#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输出数组中只出现一次的数
int main()
{
	int arr1[100] = { 1,2,3,4,5,6,8,9,7,1,2,5,4,8,7,6 };
	int arr2[100] = { 0 };
	int i;
	int n;
	n = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0;i < n;i++)
	{
		int j = arr1[i];
		arr2[j]++;
	}
	for (i = 0;i < 100;i++)
	{
		if (arr2[i] == 1)
			printf("%d ",i);
	}

	return 0;
}