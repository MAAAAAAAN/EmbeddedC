#include <stdio.h>

//������Ҳ��һ�ֹ������͵����ݽṹ 
//ĳЩʱ����Ҫʹ���ֲ�ͬ���͵ı����浽ͬһ���ڴ浥Ԫ�У��⼸����ͬ�ı�����ͬռ��ͬһ���ڴ��ַ���������ξ�Ҫ�õ�����������
//��ˣ����������͵Ĵ�С�����Ա����ռ�ڴ�ռ������Ǹ���Ա�Ĵ�С 
//��������Ȼ�����ж����Ա����ͬһʱ��ֻ��һ����Ա�������ã����ֵ���Ǹ���Ա������ʼ��ֻ�ܸ�һ����Ա��ʼ�� 

typedef union data{
	int a;
	char b;
	float c;
}DATA;

int main()
{
	DATA data;
	data.a = 255;
	data.b = 'A';
	printf("%d\n", data.a);
	printf("%c\n", data.b);
	printf("%d\n", sizeof(data));
	
	printf("%p\n", &data);
	printf("%p\n", &(data.a));
	printf("%p\n", &(data.b));
	printf("%p\n", &(data.c));
	
	return 0;
}
