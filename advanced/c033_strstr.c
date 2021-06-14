#include <stdio.h>
#include <string.h>

//字符串匹配函数strstr() 
//char *strchr(const char *haystack,const char *needle);
//在指针haystack指向的字符串中查找指针needle指向的字符串，如果有多个只查找第一个，如果找到返回该字符的地址，找不到则返回NULL 
 
int main()
{
	char *str = "abcdabcdabcd";
	printf("str = %s\n", str);
	printf("str = %p\n", str);
	
	char *addr_cda = strstr(str, "cda");
	if(addr_cda == NULL)
		printf("No \"cda\" in str.\n");
	else
		printf("The address of the first \"cda\" = %p\n", addr_cda);
		
	char *addr_cde = strstr(str, "cde");
	if(addr_cde == NULL)
		printf("No \"cde\" in str.\n");
	else
		printf("The address of the first \"cde\" = %p\n", addr_cde);
	
	return 0;
}
