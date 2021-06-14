#include <stdio.h>

//sscanf()读取格式化字符串中的数据 
//int sscanf(const char *str,const char *format[,...]);

int main()
{	
	char buf[50], buf2[50];
	sscanf("hello_world 123", "%s %2s", buf,buf2); 
	printf("buf = %s\n", buf);
	printf("buf2 = %s\n", buf2);
	
	//取到指定字符集为止的字符串%[^ ] 
	char buf3[50];
	sscanf("123456abcdefABCDEF", "%[^A-Z]", buf3);
	printf("buf3 = %s\n", buf3);
	
	//取仅包含指定字符集的字符串%[ ] 
	char buf4[50];
	sscanf("12345z6abcdefABCDEF", "%[1-9a-z]", buf4);
	printf("buf4 = %s\n", buf4);
	
	//过滤指定字符串%*，加*表示过滤掉某个格式的字符串 
	char buf5[50];
	sscanf("hello,worl#d", "%*[a-o,]%s", buf5);
	printf("buf5 = %s\n", buf5);
	
	//取指定字符a到指定字符b之间的字符串%*[^a]a%[^b] 
	char buf6[50];
	sscanf("iios/12DDWDFF@122", "%*[^/]/%[^@]", buf6);
	printf("buf6 = %s\n", buf6);
	
	return 0;
}
