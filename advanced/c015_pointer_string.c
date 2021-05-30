#include <stdio.h>

//字符串存储的三种形式 
int main()
{
	//1数组，此时字符串存放在栈区，如果是静态或者全局数组，则存放在静态全局区 
	char string[50] = "strings in array.";
	
	//2字符指针，此时字符串存放在文字常量区 
	char *str = "strings in pointer of char.";
	
	//3堆，此时字符串存放在堆区 
	char *s = malloc(50);
	strcpy(s, "strings in stack.");
	
	printf("%s\n%s\n%s\n", string,str,s);
	
	return 0;
} 
