#include <stdio.h>

int main()
{
	//���ͱ���ռ��4���ֽڣ�����aΪ0x 12 34 56 70������bΪ0x 89 ab cd ef ������12��89Ϊ�ߵ�ַ��70��efΪ�͵�ַ 
	int a = 0x12345670, b = 0x89abcdef;
	printf("a = 0x%x\n", a);
	printf("b = 0x%x\n", b);
	
	//ָ�뱣����Ǳ������׵�ַ(�͵�ַ) 
	char *p = &a, *q = &b;
	printf("*p = 0x%x\n", *p);
	printf("*q = 0x%x\n", *q);
	
	//char���͵�ָ��++��ַ+1��int���͵�ָ��++��ַ+4 
	p++;
	q++;
	printf("*p = 0x%x\n", *p);
	printf("*q = 0x%x\n", *q);
	
	return 0;
}
