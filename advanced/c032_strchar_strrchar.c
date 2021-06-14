#include <stdio.h>
#include <string.h>

//�ַ������Һ���strchr() 
//char *strchr(const char *s,int c);
//��ָ��sָ����ַ����в���ASCII��ֵΪc���ַ�������ж��ֻ���ҵ�һ��������ҵ����ظ��ַ��ĵ�ַ���Ҳ����򷵻�NULL 

//char *strrchr(const char *s,int c);
//��ָ��sָ����ַ����в������һ��ASCII��ֵΪc���ַ�������ҵ����ظ��ַ��ĵ�ַ���Ҳ����򷵻�NULL 
 
int main()
{
	char *str = "abcdabcdabcd";
	printf("str = %s\n", str);
	printf("str = %p\n", str);
	
	char *first = strchr(str,'a');
	if(first == NULL)
		printf("No \'a\' in str.\n");
	else
		printf("The address of the first \'a\' = %p\n", first);
	
	char *last = strrchr(str,'a');
	if(last == NULL)
		printf("No \'a\' in str.\n");
	else
		printf("The address of the last \'a\' = %p\n", last);
	
	return 0;
}
