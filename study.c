#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[100] = {0};
//	gets_s(arr,99);
//	int i,j;
//	i = strlen(arr) - 1;
//	int right = i;
//	for (;i >= 0;i--)
//	{
//		if (arr[i] == ' ')//判断一个单词
//		{
//			j = i;
//			while(arr[j+1]!=' '&&j<=right)//打印一个单词
//			{
//				printf("%c", arr[j + 1]);
//				j++;
//			}
//			printf(" ");
//		}
//		else if(i == 0)//判断一个单词	
//		{
//			j = i;
//			while (arr[j] != ' ' && j <= right)//打印一个单词
//			{
//				printf("%c", arr[j]);
//				j++;
//			}
//			printf(" ");
//		}
//	}
//	return 0;
//}
//
//void reverse(char* left, char* right)//交换元素
//{
//	int mid;
//	while (left < right)
//	{
//		mid = *left;
//		*left = *right;
//		*right = mid;
//		left++;
//		right--;
//	}
//}
//	int main()
//{
//	char arr[100] = { 0 };
//	gets_s(arr,99);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	//循环
//	char* left=arr;
//	char* right=left;
//	while(*right)
//	{
//		while (*right != ' ' && *right != '\0')
//			right++;
//		reverse(left, right - 1);
//		if(*right!='\0')
//		left = ++right;
//    }
//	printf("%s", arr);
//	return 0;
//}

//
//void reverse(int* left,int* right)
//{
//	int tmp;
//	while (left<right)
//	{
//		while ((*left % 2 != 0) && (left < right))
//		{
//			left++;
//		}
//		while ((*right % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	 int len = sizeof(arr)/sizeof(arr[0]);
//	reverse(arr,arr+len-1);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);//第一行有n个升序数字，第二行有m个升序数字
//	int arr1[100] = { 0 }, arr2[100] = { 0 };
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr1[i]);//输入第一行的数字
//	}
//	for (i = 0;i < m;i++)
//	{
//		scanf("%d", &arr2[i]);//输入第二行的数字
//	}
//	i = 0, j = 0;
//	while (i<n||j<m)//判断并输出
//	{
//		if (arr1[i] < arr2[j] && i < n)
//		{
//			printf("%d", arr1[i]);
//			i++;
//		}
//		else if (j < m)
//		{
//			printf("%d", arr2[j]);
//			j++;
//		}
//	}
//	return 0;
//}

//
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0;i < r;i++)
//	{
//		int j = 0;
//		for (j = 0;j < c;j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);
//	return 0;
//}

//
//typedef unsigned int uint;
//typedef void(* pf_t)(int);
//int main()
//{
//	//int (*p)(int,int) = &add;
//	//int ret = (*p)(2, 3);
//	//printf("%d\n", ret);
//	(*(void (*)())0)();
//	void (*signal(int, void(*)(int)))(int);
//	pf_t signal(int, pf_t);
//	return 0;
//}

//
//int add(int a,int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}
//
//void menu()
//{
//	printf("                      \n");
//	printf("      1.add  2.sub    \n");
//	printf("      3.mul  4.div    \n");
//	printf("      0.exit          \n");
//	printf("                      \n");
//}
//void calc(int (*pf)(int, int))
//{
//	int x, y;
//	printf("请输入两个整数\n");
//	scanf("%d %d",&x,&y);
//	int ret=pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("请重新输入");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}

 //qsort

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//struct stu
//{
//	char name[25];
//	int age;
//};
//int by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	struct stu s[] = { {"zhangsan",15},{"lisi",18},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), by_name);
//	//qsort(s, sz, sizeof(s[0]), by_age);
//}
//int main()
//{
//	test2();
//	return 0;
//}    

//bubble

//#include<stdio.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i;
//	for (i = 0;i < sz - 1;i++)//趟数
//	{
//		int flag = 1;
//		int j;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)//用flag来判断是否本来就是有序
//		{
//			break;
//		}
//	}
//}
//void test()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p = "point";
//	char* c[] = { "ecter","new",p,"fierst" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	char a = "asdsfd";
//	char* p1 = "ads";
//	char** p2 = &p1;
//	char*** p3 = &p2;
//	printf("%p\n", **p3);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	/*size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//
//	/*const char* sta = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - sta;*/
//
//	if (*str != '\0')
//		return 1 + my_strlen(++str);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[6] = { 0};
//	char arr1[10] = "asdfgh";
//	strcpy(arr, arr1);
//	printf("%s",arr);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* arr2,const char* arr1)
//{
//	assert(arr2 && arr1);
//	char* sta = arr2;
//	while (*arr2++ = *arr1++);
//	return sta;
//}
//int main()
//{
//	char arr1[] = "asdf";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcat(char* arr2, const char* arr1)
//{
//	char* sta = arr2;
//	assert(arr1 && arr2);
//	while (*arr2++ != '\0');
//	arr2--;
//	while (*arr2++ = *arr1++);
//	return sta;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1,arr1);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	return *arr1 - *arr2;
//}
//int main()
//{
//	char arr1[] = "asd";
//	char arr2[] = "asdf";
//	int ret=my_strcmp(arr1, arr2);
//	if (ret == 0)
//		printf("%s", "==");
//	else if (ret > 0)
//		printf("%s", " > ");
//	else 
//		printf("%s", "<");
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strstr(const char* arr1, const char* arr2)
//{
//	assert(arr1 && arr2);
//	const char* s1 = arr1;
//	const char* s2 = arr2;
//	const char* p = arr1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = arr2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "szdr";
//	char arr2[] = "sr";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret == NULL)
//		printf("%d", 0);
//	else
//		printf("%d", 1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "1060956853@qq.com";
//	const char* sep = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, sep);ret != NULL;ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 24);
//	printf("%d", arr2[0]);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i = 0;i<10;i++)
//	{
//		memset(arr + i, 1, 1);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n,i=1;
//	scanf("%d", &n);
//	int sum = 0;
//	while(n>0)
//    {
//		if ((n % 10) % 2 != 0)
//			sum+=i;
//		n /= 10;
//		i *= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int i=1, j;
//	while(i<=n)
//	{
//		for (j = 0;j < 2 * (n - i);j++)
//			printf(" ");
//		for (j = 0;j < i;j++)
//			printf("* ");
//		printf("\n\n");
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int  mon, dat, dis;
//	double pri;
//	scanf("%lf %d %d %d", &pri, &mon, &dat, &dis);
//	double aft=0;
//	if (mon == dat && (mon == 11 || mon == 12))
//	{
//		if (mon == 11)
//		{
//			aft = pri * 0.7;
//		}
//		else
//			aft = pri * 0.8;
//	}
//	if (dis == 1 && aft - 50 >= 0)
//		aft -= 50;
//	printf("%.2lf",aft);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1;a <= 5;a++)
//	{
//		for (b = 1;b <= 5;b++)
//		{
//			for (c = 1;c <= 5;c++)
//			{
//				for (d = 1;d <= 5;d++)
//				{
//					for (e = 1;e <= 5;e++)
//					{
//						if (
//							   ((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							&& (a * b * c * d * e == 120)
//							)
//						{								
//							printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[100][100] = { 0 };
//	int line;
//	scanf("%d", &line);
//	int i, j;
//	for (i=0;i<line;i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//			if (i > 1)
//			{
//				for (j = 1;j < i;j++)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//	}
//	for (i = 0;i < line;i++)
//	{
//		for (j = 0;j < i+1;j++)
//		{
//			printf("%-4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void left_move(char arr[], int n)
//{
//	int i = 0;
//	int len = strlen(arr);
//	n %= len;
//	for (;i < n;i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (;j < len - 1;j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i;
//	for (i = 0;i < len - 1;i++)
//	{
//		left_move(arr1, i);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int IS_LEFT_MOVE(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[] = "asdfgh";
//	char arr2[] = "dfghas";
//	left_move(arr1,2);
//	printf("%s\n", arr1);
//	int ret;
//	ret=is_left_move(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[25][25] = { 0 };
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int i, j;
//	//输入
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}	
//	//输出
//	for (j = 0;j < m;j++)
//	{
//		for (i = 0;i < n;i++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[25][25] = { 0 };
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i=1;i<n;i++)
//	{
//		for(j=0;j<i;j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[20] = { 0 };
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int j ;
//	int count1 = 0, count2 = 0;
//	for(j=0;j<n-1;j++)
//	{
//		if (arr[j] >= arr[j + 1])
//			count1++;
//		if (arr[j] <= arr[j + 1])
//			count2++;	
//	}
//	if (count1 == n - 1 || count2 == n - 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//		
//	return 0;
//}

//#include<stdio.h>
//#include<stddef.h>
//
//struct s
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//}c;
//int main()
//{
//	printf("%zd\n", sizeof(struct s));
//	c.a = 10;
//	c.b = 12;
//	c.c = 3;
//	c.d = 4;
//
//
//	return 0;
//}