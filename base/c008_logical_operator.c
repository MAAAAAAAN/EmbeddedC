#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	
	//�߼����·
	if((a==b) && ((c++)>0))
	{
		printf("if������\n");
	}
	else
	{
		printf("if��������\n");
	}
	printf("c=%d,%s\n", c,"�߼����·");
	
	//�߼����·
	if((a<b) || ((c++)>0))
	{
		printf("if������\n");
	}
	else
	{
		printf("if��������\n");
	}
	printf("c=%d,%s\n", c,"�߼����·");
	
	//�߼���
	if(!(a==0)) 
	{
		printf("a!=0\n");
	}
	
	return 0;
}
