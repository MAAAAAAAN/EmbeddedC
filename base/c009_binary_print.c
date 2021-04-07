#include <stdio.h>
void to_binary(int n)
{
	if(n) to_binary(n/2);
	else return;
	printf("%d",n%2);
}
int main()
{
	int num;
	while(1)
	{
		printf("请输入整数（输入负数结束）："); 
		scanf("%d", &num);
		if(num<0) break;
		if(num==0) printf("0");
		to_binary(num);
		printf("\n");
	}
	
	return 0;
}
