#include <stdio.h>

//��̬�����ڴ� 
//malloc()�����ڶ�������һ���������ڴ�ռ䣬����ֵΪvoid *���͵�ͨ��ָ�룬ʹ��ʱ���뽫����ֵǿ��ת��
//�������ֵΪ����ռ���׵�ַ��������ɹ����������ֵΪNULL���������ʧ�ܣ��ڵ���malloc()֮��һ��Ҫ�ж��Ƿ�����ɹ� 

int main()
{
	int *array = NULL;
	int n;
	printf("������Ҫ��������������Ԫ�ظ�����");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	if(array == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
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
	
	//free()�ͷ�ָ����ڴ棬��ָ����ڴ������malloc calloc realloc��̬������ڴ�
	//free֮����Ϊû�и�ָ�븳ֵ������ָ������ָ��ԭ��������ڴ�ĵ�ַ����������ڴ��Ѿ����ܲ����� 
	free(array);
	array = NULL;
	
	return 0;
}
