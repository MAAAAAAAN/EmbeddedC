#include <stdio.h>
int main()
{
	int i, j, k;
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=(100-i*5)/3;j++)
		{
			k = 100-i-j;
			if((k%3==0)&&(i*5+j*3+k/3==100))
			{
				printf("¹«¼¦:%d,Ä¸¼¦:%d,Ð¡¼¦:%d\n", i,j,k);
			}
		}
	}
	
	return 0;
}
