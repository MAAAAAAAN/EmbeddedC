#include <stdio.h>
#include <stdlib.h>

//��̬�����ڴ�
//realloc()��ԭ��ָ��pָ����ڴ��ַ�����������СΪsize��һ���������ڴ棬��������������һ���ǵ�ַp���ڶ����Ǵ�Сsize
//realloc�����������ڴ��ʱ�����ԭ����ַ�ϵ��ڴ治���ã�����һ���µ��㹻�Ŀռ䲢��ԭ�������ݿ�����ȥ����󷵻�һ���µĵ�ַ 
 
int main()
{
	char *p = NULL;
	p = (char *)malloc(100 * sizeof(char));
	if(p == NULL)
	{
		printf("malloc error!\n");
		return;
	}
	printf("malloc��ĵ�ַ��%p\n", p);
	
	p = (char *)realloc(p, 10100*sizeof(char));
	if(p == NULL)
	{
		printf("realloc error!\n");
		return;
	}
	printf("realloc��ĵ�ַ��%p\n", p);
	
	free(p);
	p = NULL;
	
	return 0;
}
