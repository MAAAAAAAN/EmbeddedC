#include <stdio.h>
#include <string.h>

//字符串长度统计函数strlen()
 
int main()
{
	char str1[20] = "strlen";
	char *str2 = "strlen";
	
	//sizeof()测量变量所占的内存空间大小 
	printf("sizeof(str1) = %d\n", sizeof(str1));
	printf("sizeof(str2) = %d\n", sizeof(str2));
	//strlen()测量字符串的长度，统计到\0结束（不包括\0） 
	printf("strlen(str1) = %d\n", strlen(str1));
	printf("strlen(str1) = %d\n", strlen(str1));
	
	return 0;
} 
