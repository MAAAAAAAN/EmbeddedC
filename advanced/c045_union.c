#include <stdio.h>

//共用体也是一种构造类型的数据结构 
//某些时候，需要使几种不同类型的变量存到同一段内存单元中，这几个不同的变量共同占用同一块内存地址，这种情形就要用到共用体类型
//因此，共用体类型的大小是其成员中所占内存空间最大的那个成员的大小 
//共用体虽然可以有多个成员，但同一时间只有一个成员能起作用（最后赋值的那个成员），初始化只能给一个成员初始化 

typedef union data{
	int a;
	char b;
	float c;
}DATA;

int main()
{
	DATA data;
	data.a = 255;
	data.b = 'A';
	printf("%d\n", data.a);
	printf("%c\n", data.b);
	printf("%d\n", sizeof(data));
	
	printf("%p\n", &data);
	printf("%p\n", &(data.a));
	printf("%p\n", &(data.b));
	printf("%p\n", &(data.c));
	
	return 0;
}
