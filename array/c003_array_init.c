#include <stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	int b[6] = {1,2,3};
	b[5] = 6;
	
	int i;
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\t", i,a[i]);
	}
	printf("\n");
	for(i=0;i<6;i++)
	{
		printf("b[%d]=%d\t", i,b[i]);
	}
	
	return 0;
}
