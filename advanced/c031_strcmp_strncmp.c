#include <stdio.h>
#include <string.h>

//�ַ����ȽϺ���strcmp() 
//int strcmp(const char *s1,const char *s2);
//����ַ��ıȽ�ָ��s1��s2��ָ����ַ�����ASCII��ֵ�����s1>s2������1����֮����-1����ȫ��ͬ����0 

//int strncmp(const char *s1,const char *s2,size_t n);
//����ַ��ıȽ�ָ��s1��s2��ָ����ַ���ǰn���ַ���ASCII��ֵ�����s1>s2������1����֮����-1����ȫ��ͬ����0
 
int main()
{
	char *s1 = "abcd";
	char *s2 = "adaa";
	char *s3 = "abcd";
	
	int s12 = strncmp(s1, s2, 3);
	int s13 = strcmp(s1, s3);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	printf("s3 = %s\n", s3);
	printf("strncmp(s1, s2, 3):%d\n", s12);
	printf("strcmp(s1, s2):%d\n", s13);
	
	return 0;
}
