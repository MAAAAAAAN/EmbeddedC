#include <stdio.h>
#include <string.h>

//�ַ���׷�Ӻ���strcat()
//char *strcat(char *dest,const char *src);
//��ָ��srcָ����ַ���׷�ӵ�ָ��destָ����ַ����ĺ��棨�ַ���������־\0��ǰ�棩
//ע�⣬Ҫ��֤destָ����ڴ�ռ��㹻�󣬷��������ڴ���Ⱦ

//char *strncat(char *dest,const char *src,size_t n);
//��ָ��srcָ����ַ�����ǰn���ַ�׷�ӵ�ָ��destָ����ַ����ĺ��棨�ַ���������־\0��ǰ�棩�����n�����ַ������ȣ���ֻ�Ὣsrcָ����ַ���׷�ӵ�desc���� 
 
int main()
{
	char str[50] = "abcd\0efg";
	printf("str = %s\n", str);
	
	char *src = "ABCD";
	strncat(str, src, 10);
	printf("str = %s\n", str); 
	
	return 0;
}
