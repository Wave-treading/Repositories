#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<float.h>
int main()
{
	double f1 = 0.2;
	double f2 = 0.1;
	if (fabs((f1 - 0.1) - f2) <= DBL_EPSILON)//不推荐写成<=
	{                                        //==时，说明fabs((f1 - 0.1) - f2) == DBL_EPSILON
		printf("相等");                      //式子成立，所以fabs((f1 - 0.1) - f2) == 0
	}                                        //而DBL_EPSILON!=0，所以应写成<
	return 0;
}