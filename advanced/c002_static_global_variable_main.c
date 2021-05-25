#include <stdio.h>
#include "c002_static_global_variable_fun.h"

int num = 101;
//如果用static修饰则为静态全局变量，不赋初值时为0，只能在当前定义的.c文件中调用，别的文件无法调用，即无法extern 
//static int num = 101;

int main()
{
	printf("in main num is %d.\n", num);
	fun();
	
	return 0;
}
