#include <stdio.h>
int main()
{
	int a[2][2] = {{1,2},{4,5}};
	int b[3][3] = {{1,2},{3}};
	b[2][2] = 9;
	int c[2][3] = {1,2,3,4,5,6};
	
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=%d\t", i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]=%d\t", i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("c[%d][%d]=%d\t", i,j,c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
