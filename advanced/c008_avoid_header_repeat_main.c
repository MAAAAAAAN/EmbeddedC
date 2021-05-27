#include <stdio.h>

//当头文件被重复包含时，预处理展开后将只会编译一次 
#include "c008_avoid_header_repeat_fun.h"
#include "c008_avoid_header_repeat_fun.h"

int main()
{
	int num = max(7,11);
	printf("num is %d.\n", num);
	
	return 0;
}
