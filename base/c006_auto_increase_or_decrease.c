#include <stdio.h>
int main()
{
	int i = 3;
	int num;
	num = (i++) + (i++) + (i++);//3+4+5，编译器不同结果也不同，也可能会编译为3+3+3 
	printf("i=%d,num=%d\n", i,num);
	
	int j = 3;
	int num2;
	num2 = (++j) + (++j) + (++j);//5+5+6，先进行前面两个的加法，因为j只有一个所以经过两次前置自增后是5+5=10，然后用10再去加6
	printf("j=%d,num2=%d\n", j,num2);
	
	return 0;
}
