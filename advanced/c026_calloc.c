#include <stdio.h>
#include <stdlib.h>

//动态申请内存 
//calloc()函数，相比于malloc()来说，calloc可以申请一个划分为n块且每块大小为size的连续空间，所以有两个参数，第一个是n，第二个是size 
//malloc申请的内存存放的内容是随机的，而calloc申请的内存存放的内容都是0 

int main()
{
	int *array = NULL;
	array = (int *)calloc(3, 3*sizeof(int));
	if(array == NULL)
	{
		printf("calloc error!\n");
		return;
	}
	
	printf("array指向的地址是%p\n", array);
	
	free(array);
	printf("内存释放后，array指向的地址是%p\n", array);
	
	array = NULL;
	printf("将array初始化后指向的地址是%p\n", array);
	
	return 0;
}
