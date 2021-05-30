#include <stdio.h>

//动态申请内存 
//malloc()可以在堆区申请一块连续的内存空间，返回值为void *类型的通用指针，使用时必须将返回值强制转换
//如果返回值为分配空间的首地址表明申请成功，如果返回值为NULL则表明申请失败，在调用malloc()之后一定要判断是否申请成功 

int main()
{
	int *array = NULL;
	int n;
	printf("请输入要申请的整型数组的元素个数：");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	if(array == NULL)
	{
		printf("申请内存失败！\n");
		return 0;
	}
	memset(array, 0, n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		array[i] = i+1;
	}
	for(i=0;i<n;i++)
	{
		printf("array[%d] = %d\n", i,array[i]);
	}
	
	//free()释放指向的内存，但指向的内存必须是malloc calloc realloc动态申请的内存
	//free之后，因为没有给指针赋值，所以指针依旧指向原本申请的内存的地址，但是这块内存已经不能操作了 
	free(array);
	array = NULL;
	
	return 0;
}
