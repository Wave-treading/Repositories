#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
	double f1 = 0.2;
	double f2 = 0.1;
	if (fabs((f1 - 0.1) - f2) <= DBL_EPSILON)//���Ƽ�д��<=
	{                                        //==ʱ��˵��fabs((f1 - 0.1) - f2) == DBL_EPSILON
		printf("���");                      //ʽ�ӳ���������fabs((f1 - 0.1) - f2) == 0
	}                                        //��DBL_EPSILON!=0������Ӧд��<
	return 0;
}