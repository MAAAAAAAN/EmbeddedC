#include <stdio.h>
#include <stdlib.h>

//��̬�����ڴ� 
//calloc()�����������malloc()��˵��calloc��������һ������Ϊn����ÿ���СΪsize�������ռ䣬������������������һ����n���ڶ�����size 
//malloc������ڴ��ŵ�����������ģ���calloc������ڴ��ŵ����ݶ���0 

int main()
{
	int *array = NULL;
	array = (int *)calloc(3, 3*sizeof(int));
	if(array == NULL)
	{
		printf("calloc error!\n");
		return;
	}
	
	printf("arrayָ��ĵ�ַ��%p\n", array);
	
	free(array);
	printf("�ڴ��ͷź�arrayָ��ĵ�ַ��%p\n", array);
	
	array = NULL;
	printf("��array��ʼ����ָ��ĵ�ַ��%p\n", array);
	
	return 0;
}
