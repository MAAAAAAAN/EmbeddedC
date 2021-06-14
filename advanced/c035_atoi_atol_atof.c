#include <stdio.h>
#include <stdlib.h>

//字符串转数值函数 
//字符串转int类型atoi 
//int atoi(const char *nptr);
//字符串转long类型
//long atol(const char *nptr); 
//字符串转double类型
//double atof(const char *nptr); 

int main()
{
	int a = atoi("111");
	printf("a = %d\n", a);
	
	long b = atol("222222222");
	printf("b = %d\n", b);
	
	double c = atof("333.333");
	printf("c = %lf\n", c);
	
	return 0;
} 
