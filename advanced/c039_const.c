#include <stdio.h>

int main()
{
	//1const������ͨ����������ñ���ֻ��������ʱ������ʼ��֮�󲻿��޸� 
	const int a = 100; 
	//a = 200;
	printf("a = %d\n", a);
	
	//2const����ָ�� 
	//2.1 const char *str��˼��ָ��strָ������ݲ���ͨ��str���޸ģ����Ա���ָ��strָ�������
	//2.2 char * const str��˼��ָ��str����ָ���ĵط� 
	//2.3 const char * const str��˼��ָ��str�Ȳ���ָ���ĵط�������ָ�������Ҳ����ͨ��str���޸� 
	
	return 0;
}
