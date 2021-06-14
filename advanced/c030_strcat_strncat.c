#include <stdio.h>
#include <string.h>

//字符串追加函数strcat()
//char *strcat(char *dest,const char *src);
//将指针src指向的字符串追加到指针dest指向的字符串的后面（字符串结束标志\0的前面）
//注意，要保证dest指向的内存空间足够大，否则会出现内存污染

//char *strncat(char *dest,const char *src,size_t n);
//将指针src指向的字符串的前n个字符追加到指针dest指向的字符串的后面（字符串结束标志\0的前面），如果n大于字符串长度，则只会将src指向的字符串追加到desc后面 
 
int main()
{
	char str[50] = "abcd\0efg";
	printf("str = %s\n", str);
	
	char *src = "ABCD";
	strncat(str, src, 10);
	printf("str = %s\n", str); 
	
	return 0;
}
