#include <stdio.h>
#include <string.h>

//�ڴ����ú���memset()
//void *memset(void *s,int c,size_t n);
//��ָ��s��ָ����ڴ������ǰn���ֽ�����0-255֮�������������cΪunsigned char��������ָ��s�ĵ�ַ 

int main()
{
	char s[5];
	memset(s, 'a', sizeof(s));
	s[4] = '\0';
	printf("s = %s\n", s);
	
	return 0;
}
