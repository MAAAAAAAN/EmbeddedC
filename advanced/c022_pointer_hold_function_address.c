#include <stdio.h>

//ָ�뱣�溯���ĵ�ַ
//�����г����ʱ��ϵͳ�Ὣ������ָ����ص��ڴ��еĴ����������Ժ���Ҳ����ʼ��ַ 
int max(int a,int b);
int min(int a,int b);

int main()
{
	//����ָ�룬������һ��ָ�� ����ֵΪ����������������Ϊ���͵ĺ��� ��ָ�� 
	int (*p)(int,int);
	
	//���������־��Ǻ������׵�ַ 
	p = max;
	
	int num = (*p)(3,5);
	//Ҳ���Բ���* 
	//int num = p(3,5); 
	printf("num = %d\n", num);
	
	//����ָ�����飬ÿ��Ԫ�ض��Ǻ���ָ�� 
	//int (*pp[3])(int,int); 
	printf("����ָ����õĵط�����һ��������Ϊ��������һ���������Ρ�\n"); 
	
	return 0;
}

int max(int a,int b)
{
	int c = a>b?a:b;
	return c;
}

int min(int a,int b)
{
	int c = a<b?a:b;
	return c;
}
