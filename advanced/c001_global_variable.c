#include <stdio.h>

//��ͨȫ�ֱ��������������ֵ��Ĭ��Ϊ0 
int num = 100;

void fun()
{
	printf("in fun num is %d.\n", num);
}

int main()
{

	printf("in main num is %d.\n", num);
	fun();
	
	return 0;
} 
