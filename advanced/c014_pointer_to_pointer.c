#include <stdio.h>

//�����β�Ϊָ���ָ�룬�������ָ��Ĵ洢��Ԫ�ĵ�ַ��Ҳ����д��void fun(char *q[]) 
void fun(char **q)
//void fun(char *q[])
{
	printf("%p -> \"%s\"\n", *q,*q);
}

int main()
{
	char *p[3] = {"YouTube", "Bilibili", "DouYu"};
	char *pp = "VPN";
	//ʵ�ο�����ָ�����������
	fun(p);
	//ʵ��Ҳ������ָ��ĵ�ַ  
	fun(&pp);
	
	return 0;
}
