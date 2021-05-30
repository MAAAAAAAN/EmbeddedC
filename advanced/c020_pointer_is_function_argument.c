#include <stdio.h>

//指针作为函数的参数，例如scanf("%d", &num_int)
void swap_int(int *a,int *b);
void swap_string(char **q);
void fun1(int a[]);
void fun2(int a[][5]);
void fun3(char *q[]);

int main()
{
	//1传变量的地址，并且通过*+地址去赋值，才能改变主调函数实参的值 
	int a,b;
	printf("请输入a的值：");
	scanf("%d", &a);
	printf("请输入b的值：");
	scanf("%d", &b);
	swap_int(&a,&b);
	printf("a=%d,b=%d\n", a,b);

	char *p = "hello world";
	swap_string(&p);
	printf("%s\n", p);
	
	//2传数组的地址 
	//2.1传一维数组的地址
	int array1[5] = {1,2,3,4,5};
	fun1(array1); 
	//2.2传二维数组的地址
	int array2[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	fun2(array2);
	//2.3传指针数组
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
	printf("第1个元素的值为%d.\n", a[1]);
}

void fun2(int a[][5])
//void fun2(int (*a)[5])
{
	printf("第1行第4列元素的值为%d.\n", a[1][4]);
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
