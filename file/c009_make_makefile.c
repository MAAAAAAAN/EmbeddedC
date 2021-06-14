#include <stdio.h>

//make是个命令，是一个可执行程序，用来解析Makefile文件中的命令，这个命令存放在/usr/bin/里
//Makefile是一个文件，可以在里面自定义编译规则
//在执行make命令时，会自动在当前目录下寻找名为Makefile、makefile和GNUmakefile的文件，然后进行编译 
//这样做的好处：简化编译程序时的命令，只需要在对应目录输入make就可以了，并且无需参数 
 
int main()
{
	//Makefile文件的编译规则： 
	//目标：依赖文件列表（换行） 
	//（Tab）命令列表 
	//可以有多个目标和命令列表，默认执行第一个目标，当没有第一个目标的依赖文件时会自动在下面的目标中寻找；如果想执行其他目标，需要在make命令后加目标名字 
	
	//Makefile文件示例1： 
	//main:main.o aaa.o
	//    gcc main.o aaa.o -o main 
	//main.o:main.c main.h aaa.h 
	//	  gcc -c main.c -o main.o
	//aaa.o:aaa.c main.h
	//    gcc -c aaa.c -o aaa.o
	//clean: 
	//	  rm main main.o aaa.o 
	//以上这种分步编译的好处：当只更改少量文件时，只会编译相关的文件，没有受影响的文件不会重新编译生成，从而提高了编译效率 
	
	//Makefile文件示例2： 
	//all:test1 test2 
	//test1:test1.c
	//	  gcc test1.c -o test1
	//test2:test2.c
	//	  gcc test2.c -o test2
	//clean:
	//	  rm test1 test2
	//以上这种利用假想目标（相当于命令，不生成文件）编译的好处：简化make命令，从而提高效率 
	
	//make命令格式： 
	//make [-f file] [targets] 
	//如果想使用除Makefile、makefile和GNUmakefile之外的文件里的编译规则进行编译，可使用-f参数指定，如make -f bbb 
	//如果Makefile文件中存在多个目标，默认执行第一个，可以使用targets参数指定其他目标，如make clean 
	 
	printf("看注释。\n");
	
	return 0;
} 
