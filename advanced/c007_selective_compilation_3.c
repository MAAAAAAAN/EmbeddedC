#include <stdio.h>
#define HARDEN 1

int main()
{
	#if HARDEN
	printf("HARDEN");
	#else
	printf("harden");
	#endif
	
	return 0;
}
