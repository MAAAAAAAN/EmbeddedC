#include <stdio.h>

//ָ����Ϊ�����Ĳ���������scanf("%d", &num_int)
void swap_int(int *a,int *b);
void swap_string(char **q);
void fun1(int a[]);
void fun2(int a[][5]);
void fun3(char *q[]);

int main()
{
	//1�������ĵ�ַ������ͨ��*+��ַȥ��ֵ�����ܸı���������ʵ�ε�ֵ 
	int a,b;
	printf("������a��ֵ��");
	scanf("%d", &a);
	printf("������b��ֵ��");
	scanf("%d", &b);
	swap_int(&a,&b);
	printf("a=%d,b=%d\n", a,b);

	char *p = "hello world";
	swap_string(&p);
	printf("%s\n", p);
	
	//2������ĵ�ַ 
	//2.1��һά����ĵ�ַ
	int array1[5] = {1,2,3,4,5};
	fun1(array1); 
	//2.2����ά����ĵ�ַ
	int array2[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	fun2(array2);
	//2.3��ָ������
	char *array_of_pointers[3] = {"YouTube","Bilibili","DouYu"}; 
	fun3(array_of_pointers);
	
	return 0;
}

void swap_int(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swap_string(char **q)
//void swap_string(char *q[])
{
	*q = "Pointers are arguments to functions.";
}

void fun1(int a[])
//void fun1(int *a)
{
	printf("��1��Ԫ�ص�ֵΪ%d.\n", a[1]);
}

void fun2(int a[][5])
//void fun2(int (*a)[5])
{
	printf("��1�е�4��Ԫ�ص�ֵΪ%d.\n", a[1][4]);
}

void fun3(char *q[])
//void fun3(char **q)
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s ", q[i]);
	}
	printf("\n");
}
