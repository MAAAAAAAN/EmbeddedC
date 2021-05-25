#include <stdio.h>

//带参数的宏定义，为了避免因为运算符优先级产生歧义，最好将参数括起来 
//带参宏与函数的区别：1带参宏是在预处理阶段的替换而不是调用，因此相比于函数来说节省了时间但牺牲了空间 2宏的形参无类型 
#define S(a,b) (a)*(b)

int main()
{
	int num = S(1+2,2);
	printf("num is %d.\n", num);
	
	//可使用#undef终止宏定义 
	#undef S
	
	#define S(a,b) (a)+(b)
	int sum = S(1,2);
	printf("sum is %d.\n", sum);
	
	return 0;
}
