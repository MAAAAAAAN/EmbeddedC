#include <stdio.h>

void fun()
{
	//��ͨ�ֲ�������������ֵʱ�����ÿ�κ������ý������ͷ�num�����num��ֵ�����ۼ� 
	//int num = 1;
	//��̬�ֲ�������������ֵʱΪ0��ÿ�κ������ý����󲻻��ͷ�num�����num��ֵ���ۼ�
	static int num = 1; 
	printf("num = %d\n", num);
	num++;
}

int main()
{
	fun();
	fun();
	fun();
	
	return 0;
}
