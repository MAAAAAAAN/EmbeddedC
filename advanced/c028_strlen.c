#include <stdio.h>
#include <string.h>

//�ַ�������ͳ�ƺ���strlen()
 
int main()
{
	char str1[20] = "strlen";
	char *str2 = "strlen";
	
	//sizeof()����������ռ���ڴ�ռ��С 
	printf("sizeof(str1) = %d\n", sizeof(str1));
	printf("sizeof(str2) = %d\n", sizeof(str2));
	//strlen()�����ַ����ĳ��ȣ�ͳ�Ƶ�\0������������\0�� 
	printf("strlen(str1) = %d\n", strlen(str1));
	printf("strlen(str1) = %d\n", strlen(str1));
	
	return 0;
} 
