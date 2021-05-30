#include <stdio.h>
#include <stdlib.h>

//动态申请内存
//realloc()在原本指针p指向的内存地址上重新申请大小为size的一块连续的内存，有两个参数，第一个是地址p，第二个是大小size
//realloc在重新申请内存的时候，如果原本地址上的内存不够用，会找一块新的足够的空间并将原本的内容拷贝过去，最后返回一个新的地址 
 
int main()
{
	char *p = NULL;
	p = (char *)malloc(100 * sizeof(char));
	if(p == NULL)
	{
		printf("malloc error!\n");
		return;
	}
	printf("malloc后的地址是%p\n", p);
	
	p = (char *)realloc(p, 10100*sizeof(char));
	if(p == NULL)
	{
		printf("realloc error!\n");
		return;
	}
	printf("realloc后的地址是%p\n", p);
	
	free(p);
	p = NULL;
	
	return 0;
}
