#include <stdio.h>
int main()
{
	//二维数组在定义的时候可以不指定行数，但必须指定列数 
	int a[][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} 
