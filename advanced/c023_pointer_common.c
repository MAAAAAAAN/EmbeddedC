#include <stdio.h>

//通用指针void *
 
int main()
{
	//void类型的指针可以指向任何类型的变量，所以被称作通用指针 
	//NULL为空指针，存放的地址是0x 00000000，该地址不可操作，一般用NULL给指针初始化 
	void *p = NULL;
	//函数memset()的功能是将s指向的前n个字节全部初始化为整型c，其中第一个参数为通用指针，即可以将任何类型的变量初始化为c 
	//void *memset(void *s,int c,size_t n); 
	
	return 0;
}
