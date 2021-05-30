#include <stdio.h>

void fun(int p[][5],int x);
//数组指针：本身是一个指针，指向一个数组，+1指向下一个数组 
int main()
{
	//二维数组本身就是一个数组指针 
	int a[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5}};
	printf("a = %p\n", a);
	printf("a+1 = %p\n", a+1);
	
	//定义一个指向由5个整型组成的数组的指针，该指针+1指向下一个由5个整型组成的数组，即+1跳5*4个字节 
	//该指针可以保存类似于这样的二维数组的地址：int a[4][5],b[6][5],c[9][5]; 即int a[][5] 
	//同理，二维数组指针int (*p)[4][5]可以配合int a[][4][5]这样的三维数组使用 
	int (*p)[5];
	p=a;
	printf("p = %p\n", p);
	printf("p+1 = %p\n", p+1);
	
	fun(a,3);
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	} 
	
	//对一维数组名字取地址变为一个一维数组指针，此时+1跳一个一维数组 
	int b[3];
	printf("b = %p\n", b);
	//b+1相差一个元素，即4个字节 
	printf("b+1 = %p\n", b+1);
	//(&b)+1相差一个数组，即4*3个字节 
	printf("(&b)+1 = %p\n", (&b)+1);
	
	return 0;
}

void fun(int p[][5],int x)
//void fun(int (*p)[5],int x)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<5;j++)
		{
			p[i][j] = p[i][j] + 100;
		}
	}
}
