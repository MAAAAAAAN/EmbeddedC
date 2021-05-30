#include <stdio.h>

int main()
{
	//指针数组，由若干个相同类型的指针构成的数组 
	char *p[5] = {"YouTube", "Twitch", "AfreecaTv", "DouYu", "Bilibili"};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%p -> \"%s\"\n", p[i],p[i]);
	}
	
	return 0;
}
