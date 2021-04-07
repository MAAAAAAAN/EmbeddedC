#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	
	//逻辑与短路
	if((a==b) && ((c++)>0))
	{
		printf("if成立！\n");
	}
	else
	{
		printf("if不成立！\n");
	}
	printf("c=%d,%s\n", c,"逻辑与短路");
	
	//逻辑或短路
	if((a<b) || ((c++)>0))
	{
		printf("if成立！\n");
	}
	else
	{
		printf("if不成立！\n");
	}
	printf("c=%d,%s\n", c,"逻辑或短路");
	
	//逻辑非
	if(!(a==0)) 
	{
		printf("a!=0\n");
	}
	
	return 0;
}
