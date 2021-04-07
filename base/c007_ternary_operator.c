#include <stdio.h>
int main()
{
	int i = 3, j = 3;
	char result = (i++ > ++j) ? ('i') : ('j');
	printf("result=%c,i=%d,j=%d\n", result,i,j);
	
	return 0;
}
