#include <stdio.h>

//sprintf()����ʽ��������д�뵽ĳ���ַ����� 
//int sprintf(char *string,char *format[,argument,...]); 
//����sprintf()����д�뻺�������ַ�����û�����Ƶģ���˴��ڻ���������ķ��գ������Ƿ����������д����ַ����ĳ��� 

//snprintf()ͨ��ָ������������������sprintf()���ڵ�������� 
//int snprintf(char *string,size_n size,char *format[,argument,...]); 
//�����ʽ������ַ����ĳ��ȴ���size����ֻ��д��size���ַ������ҷ���ֵΪ���� 
 
int main()
{
	char buf[20];
	int sprintf_num = sprintf(buf, "%d-%02d-%02d", 2021,10,1);
	printf("buf = %s\n", buf);
	printf("һ����ӡ��%d���ַ���buf�С�\n", sprintf_num);
	
	char buf2[20];
	int snprintf_num = snprintf(buf2, 9, "%02d:%02d:%02d9abc", 9,0,0);
	printf("buf2 = %s\n", buf2);
	printf("һ����ӡ��%d���ַ���buf2�С�\n", snprintf_num);
	
	return 0;
}
