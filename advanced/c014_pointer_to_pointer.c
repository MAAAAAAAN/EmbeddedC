#include <stdio.h>

//函数形参为指针的指针，即保存该指针的存储单元的地址，也可以写成void fun(char *q[]) 
void fun(char **q)
//void fun(char *q[])
{
	printf("%p -> \"%s\"\n", *q,*q);
}

int main()
{
	char *p[3] = {"YouTube", "Bilibili", "DouYu"};
	char *pp = "VPN";
	//实参可以是指针数组的名字
	fun(p);
	//实参也可以是指针的地址  
	fun(&pp);
	
	return 0;
}
