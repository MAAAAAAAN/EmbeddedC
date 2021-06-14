#include <stdio.h>
#include <string.h>

//字符串查找函数strchr() 
//char *strchr(const char *s,int c);
//在指针s指向的字符串中查找ASCII码值为c的字符，如果有多个只查找第一个，如果找到返回该字符的地址，找不到则返回NULL 

//char *strrchr(const char *s,int c);
//在指针s指向的字符串中查找最后一个ASCII码值为c的字符，如果找到返回该字符的地址，找不到则返回NULL 
 
int main()
{
	char *str = "abcdabcdabcd";
	printf("str = %s\n", str);
	printf("str = %p\n", str);
	
	char *first = strchr(str,'a');
	if(first == NULL)
		printf("No \'a\' in str.\n");
	else
		printf("The address of the first \'a\' = %p\n", first);
	
	char *last = strrchr(str,'a');
	if(last == NULL)
		printf("No \'a\' in str.\n");
	else
		printf("The address of the last \'a\' = %p\n", last);
	
	return 0;
}
