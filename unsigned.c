#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<math.h>
#include<float.h>

int main()
{
	unsigned int i=9u;                       //unsigned int Ӱ��i�Ķ�ȡ����Ӱ��i�Ĵ��
	                                         //u ��ȷ��9���޷�������
	for (i = 9;i >= 0;i--)
	{
		printf("%u\n", i);
		Sleep(100);                          //#include<windows.h>
	}//��ѭ��
	unsigned int n = -10u;//���򱨴�
	printf("%u", n);

	bool ret = true;                 //#include<stdbool.h>
	ret = false;                     //c89 c90��׼��֧�֣�c99��֧��
	BOOL wr = true;                  //΢���׼������ֲ�Բ�

	double f1 = 1.0;
	float f2 = 0.1f;                 //0.100000001
	double f3 = 0.1;                 //0.10000000000000001
	if (f1 - 0.9 == 0.1)
	{
		printf("���1\n");
	}//�����ӡ���о�����ʧ
	if (fabs((f1-0.9)-0.1)<DBL_EPSILON)//#include<float.h>
	{
		printf("���2\n");
	}//��ȷ����

	return 0;
}