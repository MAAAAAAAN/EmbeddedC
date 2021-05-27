#include <stdio.h>
#define KYRIE

int main()
{
	#ifdef KYRIE
	printf("KYRIE");
	#else
	printf("kyrie");
	#endif
	
	return 0;
}
