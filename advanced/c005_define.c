#include <stdio.h>

//宏定义，命名格式为全部大写，程序会在预处理阶段进行替换，作用范围是自定义的地方至本文件末尾 
#define PI 3.1415926

int main()
{
	printf("Π的值是%lf\n", PI);
	
	//如果想要中途终止宏定义，可使用#undef 
	#undef PI 
	
	#define PI 3.14
	printf("Π的值是%lf\n", PI); 
	
	return 0;
}
