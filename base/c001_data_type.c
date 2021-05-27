#include <stdio.h>
int main()
{
	//c语言中没有布尔类型，c++中有 
	printf("char->%d\n", sizeof(char));
	printf("short->%d\n", sizeof(short));
	printf("int->%d\n", sizeof(int));
	printf("long->%d\n", sizeof(long));
	printf("float->%d\n", sizeof(float));
	printf("double->%d\n", sizeof(double));
	
	return 0;
} 
