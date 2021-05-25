#include <stdio.h>

//普通全局变量，如果不赋初值，默认为0 
int num = 100;

void fun()
{
	printf("in fun num is %d.\n", num);
}

int main()
{

	printf("in main num is %d.\n", num);
	fun();
	
	return 0;
} 
