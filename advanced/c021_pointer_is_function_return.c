#include <stdio.h>

//ָ����Ϊ�����ķ���ֵ������������һ����ַ 
char * fun();

int main()
{
	char *p = NULL;
	p = fun();
	printf("%s\n", p);
	
	return 0;
}

char * fun()
{
	//1�ַ�ָ�� 
	char *str = "The pointer is the return value of the function.";
	//2�ַ�����ĵ�ַ��Ҫ�þ�̬���飬�����������Զ��ͷ�������������صĵ�ַ������ 
	//static char str[100] = "MUST static"; 
	//3���ڴ�ĵ�ַ���������������Զ��ͷţ�������Ϊ�ͷŻ��߳������
	//char *str = malloc(100);
	//strcpy(str,"stack address"); 
	
	return str;
}
