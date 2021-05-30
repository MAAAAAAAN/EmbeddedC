#include <stdio.h>

//指针保存函数的地址
//在运行程序的时候，系统会将函数的指令加载到内存中的代码区，所以函数也有起始地址 
int max(int a,int b);
int min(int a,int b);

int main()
{
	//函数指针，定义了一个指向 返回值为整型且有两个参数为整型的函数 的指针 
	int (*p)(int,int);
	
	//函数的名字就是函数的首地址 
	p = max;
	
	int num = (*p)(3,5);
	//也可以不加* 
	//int num = p(3,5); 
	printf("num = %d\n", num);
	
	//函数指针数组，每个元素都是函数指针 
	//int (*pp[3])(int,int); 
	printf("函数指针最常用的地方：把一个函数作为参数给另一个函数传参。\n"); 
	
	return 0;
}

int max(int a,int b)
{
	int c = a>b?a:b;
	return c;
}

int min(int a,int b)
{
	int c = a<b?a:b;
	return c;
}
