#include <stdio.h>

int main()
{
	//1const修饰普通变量，代表该变量只读，声明时立即初始化之后不可修改 
	const int a = 100; 
	//a = 200;
	printf("a = %d\n", a);
	
	//2const修饰指针 
	//2.1 const char *str意思是指针str指向的内容不能通过str来修改，用以保护指针str指向的内容
	//2.2 char * const str意思是指针str不能指向别的地方 
	//2.3 const char * const str意思是指针str既不能指向别的地方，且其指向的内容也不能通过str来修改 
	
	return 0;
}
