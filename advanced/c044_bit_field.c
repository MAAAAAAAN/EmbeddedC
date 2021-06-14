#include <stdio.h>

//�ڽṹ���У���λΪ��λ�ĳ�Ա��֮Ϊλ�Σ�λ�� 
//��:��ָ���ó�Առ����λbit����λ�εĳ��Ȳ��ܴ��ڸ�������ռ�ֽ�����λ�ĳ��ȣ���char-8;short int-16;int-32;long int-32 
//��Ϊλ�γ�Ա���ܲ���һ���ֽڣ���˲��ܶ�λ�γ�Աȡ��ַ 
//λ��ע�⣺ 
//1��λ�γ�Ա��ֵʱ��Ӧע�ⲻҪ����ָ��λ���ķ�Χ 
//2λ�γ�Ա�����ͱ���ָ��Ϊ���ͻ����ַ��� 
//3һ��λ�γ�Ա��������һ���洢��Ԫ�У����ܿ�洢��Ԫ��ţ������͵Ĵ洢��Ԫ���ֽڣ���char-1;short int-2;int-4;long int-4 
//4���ָ��ĳһ����Ա��λ�γ���Ϊ0����˼������һ���洢��Ԫ��ʼ��� 
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
