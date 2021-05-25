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
	
	//字符串形式初始化字符数组时最后会加上"\0" 
	printf("c1字节数:%d,c2字节数:%d.\n", sizeof(c1),sizeof(c2));
	
	return 0;
}
