#include <stdio.h>
#define DURANT

int main()
{
	#ifndef DURANT
	printf("durant");
	#else
	printf("DURANT");
	#endif
	
	return 0;
}
