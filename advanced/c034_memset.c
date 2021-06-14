#include <stdio.h>
#include <string.h>

//内存设置函数memset()
//void *memset(void *s,int c,size_t n);
//将指针s所指向的内存区域的前n个字节填入0-255之间的整数（参数c为unsigned char），返回指针s的地址 

int main()
{
	char s[5];
	memset(s, 'a', sizeof(s));
	s[4] = '\0';
	printf("s = %s\n", s);
	
	return 0;
}
