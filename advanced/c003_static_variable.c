#include <stdio.h>

void fun()
{
	//普通局部变量，不赋初值时随机，每次函数调用结束后释放num，因此num的值不会累加 
	//int num = 1;
	//静态局部变量，不赋初值时为0，每次函数调用结束后不会释放num，因此num的值会累加
	static int num = 1; 
	printf("num = %d\n", num);
	num++;
}

int main()
{
	fun();
	fun();
	fun();
	
	return 0;
}
