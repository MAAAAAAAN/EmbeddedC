#include <stdio.h>
#include <string.h>

//�ַ�����������strcpy()
//char *strcpy(char *dest,const char *src);
//����ָ��srcָ����ַ�����ָ��destָ����ڴ��У�\0Ҳ�´�� 
//ע�⣬Ҫ��֤destָ����ڴ�ռ��㹻�󣬷��������ڴ���Ⱦ 

//char *strncpy(char *dest,const char *src,size_t n);
//����ָ��scrָ����ַ�����ǰn���ַ���ָ��destָ����ڴ��У�������\0�����n�����ַ������ȣ�����ȫ����\0 
 
int main()
{
	char buf[50] = "abcdefghijklmnopqrstuvwxyz";
	strncpy(buf, "ABCDEFG", 4);
	printf("buf = %s\n", buf);
	strncpy(buf, "ABC", 10);
	printf("buf = %s\n", buf);
	
	return 0;
}
