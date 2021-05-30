#include <stdio.h>

//指针作为函数的返回值，即函数返回一个地址 
char * fun();

int main()
{
	char *p = NULL;
	p = fun();
	printf("%s\n", p);
	
	return 0;
}

char * fun()
{
	//1字符指针 
	char *str = "The pointer is the return value of the function.";
	//2字符数组的地址，要用静态数组，否则函数结束自动释放数组变量，返回的地址无意义 
	//static char str[100] = "MUST static"; 
	//3堆内存的地址，函数结束不会自动释放，除非人为释放或者程序结束
	//char *str = malloc(100);
	//strcpy(str,"stack address"); 
	
	return str;
}
