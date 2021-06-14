#include <stdio.h>

//枚举类型也是一种构造类型的数据结构，可用枚举类型声明符号名称来表示整型常量 
//枚举类型是将变量的值一一列举出来，变量的值只限于列举出来的所有值 
//需要注意： 
//1枚举值是常量，不可赋值 
//2枚举元素本身由系统定义了一个表示序号的数值，默认是从0开始的正整数 
//3可以改变枚举元素的默认值，后面的元素自增1 
typedef enum week{
	mo=1, tu, we, th, fr, sa, su 
}WEEK;

int main()
{
	WEEK workday, weekday;
	workday = we;
	weekday = sa;
	printf("%d\n", workday); 
	printf("%d\n", weekday);
	
	return 0;
}
