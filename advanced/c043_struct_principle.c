#include <stdio.h>
#include <string.h>

//简单来说，结构体变量的大小是其所有成员的大小之和（STU），不考虑字节对齐的情况下 
//准确来说，结构体变量的大小是所有基本类型成员中所占字节数最多的那个成员所占大小的倍数（STU2），含double类型的结构体在gcc中是4的倍数，在vc中是8的倍数 
typedef struct stu{
	int num;
	char name[20];
	float score;
}STU;

typedef struct stu2{
	char sex;
	int age;
}STU2;

//字节对齐：为了提高读取效率 
//char 1字节对齐 
//short int 2字节对齐 
//int 4字节对齐 
//long int 4字节对齐 
//float 4字节对齐，即存放float类型变量的起始内存单元的编号是4的倍数 
//double gcc环境下4字节对齐，vc环境下8字节对齐 
//结构体变量开辟内存的时候，从上到下依次按成员在结构体中的位置顺序开辟空间 
//因此，在定义结构体类型时，应按照其成员所占空间由小到大或者由大到小的顺序定义，这样最节省空间  
typedef struct stu3{
	char a;
	short int b;
	int c;
}STU3;

typedef struct stu4{
	int c;
	short int b;
	char a;
}STU4;

typedef struct stu5{
	char a;
	int c;
	short int b;
}STU5;

//指定对齐规则：#pragma pack(value)
//注意：value只能是1、2、4、8等，指定的value值与默认对齐值相比取较小值 
#pragma pack(2) 
typedef struct stu6{
	char sex;
	int age;
}STU6; 
	
int main()
{
	printf("%d\n", sizeof(STU));
	printf("%d\n", sizeof(STU2));
	printf("%d\n", sizeof(STU3));
	printf("%d\n", sizeof(STU4));
	printf("%d\n", sizeof(STU5));
	printf("%d\n", sizeof(STU6));
	
	return 0;
}
