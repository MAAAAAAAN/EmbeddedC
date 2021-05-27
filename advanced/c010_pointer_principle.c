#include <stdio.h>

int main()
{
	//整型变量占用4个字节，变量a为0x 12 34 56 70，变量b为0x 89 ab cd ef ，其中12和89为高地址，70和ef为低地址 
	int a = 0x12345670, b = 0x89abcdef;
	printf("a = 0x%x\n", a);
	printf("b = 0x%x\n", b);
	
	//指针保存的是变量的首地址(低地址) 
	char *p = &a, *q = &b;
	printf("*p = 0x%x\n", *p);
	printf("*q = 0x%x\n", *q);
	
	//char类型的指针++地址+1，int类型的指针++地址+4 
	p++;
	q++;
	printf("*p = 0x%x\n", *p);
	printf("*q = 0x%x\n", *q);
	
	return 0;
}
