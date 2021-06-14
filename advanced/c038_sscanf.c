#include <stdio.h>

//sscanf()��ȡ��ʽ���ַ����е����� 
//int sscanf(const char *str,const char *format[,...]);

int main()
{	
	char buf[50], buf2[50];
	sscanf("hello_world 123", "%s %2s", buf,buf2); 
	printf("buf = %s\n", buf);
	printf("buf2 = %s\n", buf2);
	
	//ȡ��ָ���ַ���Ϊֹ���ַ���%[^ ] 
	char buf3[50];
	sscanf("123456abcdefABCDEF", "%[^A-Z]", buf3);
	printf("buf3 = %s\n", buf3);
	
	//ȡ������ָ���ַ������ַ���%[ ] 
	char buf4[50];
	sscanf("12345z6abcdefABCDEF", "%[1-9a-z]", buf4);
	printf("buf4 = %s\n", buf4);
	
	//����ָ���ַ���%*����*��ʾ���˵�ĳ����ʽ���ַ��� 
	char buf5[50];
	sscanf("hello,worl#d", "%*[a-o,]%s", buf5);
	printf("buf5 = %s\n", buf5);
	
	//ȡָ���ַ�a��ָ���ַ�b֮����ַ���%*[^a]a%[^b] 
	char buf6[50];
	sscanf("iios/12DDWDFF@122", "%*[^/]/%[^@]", buf6);
	printf("buf6 = %s\n", buf6);
	
	return 0;
}
