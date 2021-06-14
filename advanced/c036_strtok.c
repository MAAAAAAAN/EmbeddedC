#include <stdio.h>
#include <string.h>

//字符串切割函数strtok()
//char *strtok(char *str,const char *delim);
//用指针delim指向的字符串中的所有字符去切割指针str指向的字符串 
//注意：每次调用只会切割一次，如果要连续多次切割，第一次切割时str指向被切割的字符串，之后的调用要把str指向NULL 
//切割字符串的原理是将指针delim指向的字符串中所有的字符变成\0 

int main()
{
	char str[] = "Durunt,Harden:Kyrie*Giannis,*,James,Morant";
	printf("str = %s\n", str);
	
	char *p[7];
	
	int i = 0;
	p[i] = strtok(str,",:*");
	while(p[i] != NULL)
	{
		i++;
		p[i] = strtok(NULL, ",:*");
	}
	
	int j;
	for(j=0;j<i;j++)
	{
		printf("p[%d] = %s\n", j,p[j]);
	}
	
	printf("str = %s\n", str);
	
	return 0;
}
