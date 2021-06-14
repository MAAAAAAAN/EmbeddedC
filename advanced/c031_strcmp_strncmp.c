#include <stdio.h>
#include <string.h>

//字符串比较函数strcmp() 
//int strcmp(const char *s1,const char *s2);
//逐个字符的比较指针s1和s2所指向的字符串的ASCII码值，如果s1>s2，返回1，反之返回-1，完全相同返回0 

//int strncmp(const char *s1,const char *s2,size_t n);
//逐个字符的比较指针s1和s2所指向的字符串前n个字符的ASCII码值，如果s1>s2，返回1，反之返回-1，完全相同返回0
 
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
