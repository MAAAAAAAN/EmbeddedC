#include <stdio.h>

//在结构体中，以位为单位的成员称之为位段（位域） 
//在:后指定该成员占多少位bit，且位段的长度不能大于该类型所占字节数的位的长度，即char-8;short int-16;int-32;long int-32 
//因为位段成员可能不够一个字节，因此不能对位段成员取地址 
//位段注意： 
//1对位段成员赋值时，应注意不要超出指定位数的范围 
//2位段成员的类型必须指定为整型或者字符型 
//3一个位段成员必须存放在一个存储单元中，不能跨存储单元存放；各类型的存储单元（字节）：char-1;short int-2;int-4;long int-4 
//4如果指定某一个成员的位段长度为0，意思是自下一个存储单元开始存放 
typedef struct packed_data{
	unsigned int a:2;
	unsigned int b:6;
	unsigned int c:4;
	unsigned int d:4;
	unsigned int i;
}PACKED_DATA; 

typedef struct packed_data2{
	char a:7;
	char b:7;
	char c:2;
}PACKED_DATA2; 

typedef struct packed_data3{
	unsigned char a:1;
	unsigned char b:2;
	unsigned char c:3;
}PACKED_DATA3;

typedef struct packed_data4{
	unsigned char a:1;
	unsigned char b:2;
	unsigned char :0; 
	unsigned char c:3;
}PACKED_DATA4;

int main()
{
	PACKED_DATA data;
	printf("%d\n", sizeof(data));
	printf("%p\n", &data);
	printf("%p\n", &(data.i)); 
	
	PACKED_DATA2 data2;
	printf("%d\n", sizeof(data2));
	
	PACKED_DATA3 data3;
	printf("%d\n", sizeof(data3));
	PACKED_DATA4 data4;
	printf("%d\n", sizeof(data4));
	
	return 0;
} 
