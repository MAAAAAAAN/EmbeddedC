#include <stdio.h>

//main()函数介绍
 
int main()
{
	printf("int main(int argc,char *argv[]){}\n");
	
	printf("\n");
	printf("main()函数的返回值为int类型，此值将返回给创建此进程的父进程。\n"); 
	printf("一般main()函数有两个参数，一个是整型，一个是指针的指针。\n");
	
	printf("\n");
	printf("main()函数传参的用法：\n");
	printf("举一个例子，在Linux系统下有一个命令叫cp，其用法为cp original_file_name.c new_file_name.c\n");
	printf("该命令有两个参数，一个是源文件的名字，一个是copy出的新文件的名字，这两个字符串都是通过main()函数传参的。\n");
	
	return 0;
}
