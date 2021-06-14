#include <stdio.h>
#include <string.h>

//字符串拷贝函数strcpy()
//char *strcpy(char *dest,const char *src);
//拷贝指针src指向的字符串到指针dest指向的内存中，\0也会拷贝 
//注意，要保证dest指向的内存空间足够大，否则会出现内存污染 

//char *strncpy(char *dest,const char *src,size_t n);
//拷贝指针scr指向的字符串的前n个字符到指针dest指向的内存中，不拷贝\0，如果n大于字符串长度，后面全部补\0 
 
int main()
{
	char buf[50] = "abcdefghijklmnopqrstuvwxyz";
	strncpy(buf, "ABCDEFG", 4);
	printf("buf = %s\n", buf);
	strncpy(buf, "ABC", 10);
	printf("buf = %s\n", buf);
	
	return 0;
}
