#include <stdio.h>

//��ά�����е�ָ���л����Զ�ά��������� 
int main()
{
	int a[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5}};
	//��ʱָ��ָ���һ�е��׵�ַ 
	printf("a = %p\n", a);
	//+1��������һ��Ԫ�صĵ�ַ������һ��һά����5*4���ֽ� 
	printf("a+1 = %p\n", a+1);
	
	//��*��ָ�뽵������ʱָ��ָ���һ�е�һ�е��׵�ַ 
	printf("*a = %p\n", *a);
	//+1��������һ��Ԫ�صĵ�ַ������һ������Ԫ��4���ֽ� 
	printf("(*a)+1 = %p\n", (*a)+1);
	
	return 0;
}