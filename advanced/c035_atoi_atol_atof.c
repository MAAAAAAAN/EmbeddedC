#include <stdio.h>
#include <stdlib.h>

//�ַ���ת��ֵ���� 
//�ַ���תint����atoi 
//int atoi(const char *nptr);
//�ַ���תlong����
//long atol(const char *nptr); 
//�ַ���תdouble����
//double atof(const char *nptr); 

int main()
{
	int a = atoi("111");
	printf("a = %d\n", a);
	
	long b = atol("222222222");
	printf("b = %d\n", b);
	
	double c = atof("333.333");
	printf("c = %lf\n", c);
	
	return 0;
} 
