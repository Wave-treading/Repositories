#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct S
{
	char name[10];
	int age;
	int score;
};//�Զ�������
int main()
{
	struct S s = { "zhangsan",20,55};
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %d", s.name, s.age, s.score);//sprintf��ʹ��
	printf("%s\n", buf);
	
	struct S tmp = { 0 };
	sscanf(buf, "%s %d %d\n", tmp.name, &(tmp.age), &(tmp.score));//sscanf��ʹ��
	printf("%s %d %d\n", tmp.name, tmp.age, tmp.score);
	
	return 0;
}