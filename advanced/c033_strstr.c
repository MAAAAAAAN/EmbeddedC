#include <stdio.h>
#include <string.h>

//�ַ���ƥ�亯��strstr() 
//char *strchr(const char *haystack,const char *needle);
//��ָ��haystackָ����ַ����в���ָ��needleָ����ַ���������ж��ֻ���ҵ�һ��������ҵ����ظ��ַ��ĵ�ַ���Ҳ����򷵻�NULL 
 
int main()
{
	char *str = "abcdabcdabcd";
	printf("str = %s\n", str);
	printf("str = %p\n", str);
	
	char *addr_cda = strstr(str, "cda");
	if(addr_cda == NULL)
		printf("No \"cda\" in str.\n");
	else
		printf("The address of the first \"cda\" = %p\n", addr_cda);
		
	char *addr_cde = strstr(str, "cde");
	if(addr_cde == NULL)
		printf("No \"cde\" in str.\n");
	else
		printf("The address of the first \"cde\" = %p\n", addr_cde);
	
	return 0;
}
