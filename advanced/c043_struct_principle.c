#include <stdio.h>
#include <string.h>

//����˵���ṹ������Ĵ�С�������г�Ա�Ĵ�С֮�ͣ�STU�����������ֽڶ��������� 
//׼ȷ��˵���ṹ������Ĵ�С�����л������ͳ�Ա����ռ�ֽ��������Ǹ���Ա��ռ��С�ı�����STU2������double���͵Ľṹ����gcc����4�ı�������vc����8�ı��� 
typedef struct stu{
	int num;
	char name[20];
	float score;
}STU;

typedef struct stu2{
	char sex;
	int age;
}STU2;

//�ֽڶ��룺Ϊ����߶�ȡЧ�� 
//char 1�ֽڶ��� 
//short int 2�ֽڶ��� 
//int 4�ֽڶ��� 
//long int 4�ֽڶ��� 
//float 4�ֽڶ��룬�����float���ͱ�������ʼ�ڴ浥Ԫ�ı����4�ı��� 
//double gcc������4�ֽڶ��룬vc������8�ֽڶ��� 
//�ṹ����������ڴ��ʱ�򣬴��ϵ������ΰ���Ա�ڽṹ���е�λ��˳�򿪱ٿռ� 
//��ˣ��ڶ���ṹ������ʱ��Ӧ�������Ա��ռ�ռ���С��������ɴ�С��˳���壬�������ʡ�ռ�  
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

//ָ���������#pragma pack(value)
//ע�⣺valueֻ����1��2��4��8�ȣ�ָ����valueֵ��Ĭ�϶���ֵ���ȡ��Сֵ 
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
