#include <stdio.h>

int main()
{
	//无论什么类型的指针，在32位系统下，地址总线都是32位的，所以任何类型的指针变量的大小都是4个字节 
	//实际上某种类型的指针保存的是某种类型变量所占存储单元的首地址(低地址)
	int a, b;
	//定义指针时一定要初始化，避免出现野指针 
	int *p_a = NULL, *p_b = &b;
	p_a = &a;
	//通用指针，可以指向任何类型的变量 
	void *p = NULL;
	
	printf("请输入a、b的值：");
	scanf("%d %d", p_a,&b);
	
	printf("a = %d\n", a); 
	printf("b = %d\n", b);
	printf("*p_a = %d,p_a = %p\n", *p_a,p_a);
	printf("*p_b = %d,p_b = %p\n", *p_b,p_b);
	
	return 0;
} 
