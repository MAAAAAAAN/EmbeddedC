#include <stdio.h>

int main()
{
	//ָ�����飬�����ɸ���ͬ���͵�ָ�빹�ɵ����� 
	char *p[5] = {"YouTube", "Twitch", "AfreecaTv", "DouYu", "Bilibili"};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%p -> \"%s\"\n", p[i],p[i]);
	}
	
	return 0;
}
