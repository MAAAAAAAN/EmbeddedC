#include <stdio.h>
#include "c002_static_global_variable_fun.h"

int num = 101;
//�����static������Ϊ��̬ȫ�ֱ�����������ֵʱΪ0��ֻ���ڵ�ǰ�����.c�ļ��е��ã�����ļ��޷����ã����޷�extern 
//static int num = 101;

int main()
{
	printf("in main num is %d.\n", num);
	fun();
	
	return 0;
}
