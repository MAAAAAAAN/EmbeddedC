#include <stdio.h>
int main()
{
	int a;
	printf("%d\n", 23);
	printf("*%4d*\n", 23);
	printf("*%04d*\n", 23);
	printf("*%-4d*\n", 23);
	printf("0x%x\n", 23);
	printf("%f\n", 3.1415926f);
	printf("%lf\n", 3.1415926);
	printf("*%7.3f*\n", 3.1415926f);
	printf("*%-7.3f*\n", 3.1415926f);
	printf("*%07.3f*\n", 3.1415926f);
	printf("*%.4f*\n", 3.1415926f);
	printf("%e\n", 0.123);
	printf("%s\n", "hello world");
	printf("%p\n", &a);
	
	return 0;
}
