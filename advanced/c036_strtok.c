#include <stdio.h>
#include <string.h>

//�ַ����и��strtok()
//char *strtok(char *str,const char *delim);
//��ָ��delimָ����ַ����е������ַ�ȥ�и�ָ��strָ����ַ��� 
//ע�⣺ÿ�ε���ֻ���и�һ�Σ����Ҫ��������и��һ���и�ʱstrָ���и���ַ�����֮��ĵ���Ҫ��strָ��NULL 
//�и��ַ�����ԭ���ǽ�ָ��delimָ����ַ��������е��ַ����\0 

int main()
{
	char str[] = "Durunt,Harden:Kyrie*Giannis,*,James,Morant";
	printf("str = %s\n", str);
	
	char *p[7];
	
	int i = 0;
	p[i] = strtok(str,",:*");
	while(p[i] != NULL)
	{
		i++;
		p[i] = strtok(NULL, ",:*");
	}
	
	int j;
	for(j=0;j<i;j++)
	{
		printf("p[%d] = %s\n", j,p[j]);
	}
	
	printf("str = %s\n", str);
	
	return 0;
}
