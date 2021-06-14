#include <stdio.h>

//sprintf()将格式化的数据写入到某个字符串中 
//int sprintf(char *string,char *format[,argument,...]); 
//由于sprintf()对于写入缓冲区的字符数是没有限制的，因此存在缓冲区溢出的风险，不管是否溢出都返回写入的字符串的长度 

//snprintf()通过指定缓冲区长度来避免sprintf()存在的溢出风险 
//int snprintf(char *string,size_n size,char *format[,argument,...]); 
//如果格式化后的字符串的长度大于size，则只会写入size个字符，并且返回值为负数 
 
int main()
{
	char buf[20];
	int sprintf_num = sprintf(buf, "%d-%02d-%02d", 2021,10,1);
	printf("buf = %s\n", buf);
	printf("一共打印了%d个字符到buf中。\n", sprintf_num);
	
	char buf2[20];
	int snprintf_num = snprintf(buf2, 9, "%02d:%02d:%02d9abc", 9,0,0);
	printf("buf2 = %s\n", buf2);
	printf("一共打印了%d个字符到buf2中。\n", snprintf_num);
	
	return 0;
}
