#include <stdio.h>
int main()
{
	char c1[] = {'E','m','b','e','d','d','e','d',' ','C'};
	char c2[] = "Embedded C";
	
	int i;
	for(i=0;i<sizeof(c1);i++)
	{
		printf("%c", c1[i]);
	}
	printf("\n");
	for(i=0;i<sizeof(c2);i++)
	{
		printf("%c", c2[i]);
	}
	printf("\n");
	
	//�ַ�����ʽ��ʼ���ַ�����ʱ�������"\0" 
	printf("c1�ֽ���:%d,c2�ֽ���:%d.\n", sizeof(c1),sizeof(c2));
	
	return 0;
}
