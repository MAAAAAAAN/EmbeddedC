#include <stdio.h>

//�ַ����洢��������ʽ 
int main()
{
	//1���飬��ʱ�ַ��������ջ��������Ǿ�̬����ȫ�����飬�����ھ�̬ȫ���� 
	char string[50] = "strings in array.";
	
	//2�ַ�ָ�룬��ʱ�ַ�����������ֳ����� 
	char *str = "strings in pointer of char.";
	
	//3�ѣ���ʱ�ַ�������ڶ��� 
	char *s = malloc(50);
	strcpy(s, "strings in stack.");
	
	printf("%s\n%s\n%s\n", string,str,s);
	
	return 0;
} 
