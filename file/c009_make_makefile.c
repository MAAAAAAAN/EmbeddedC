#include <stdio.h>

//make�Ǹ������һ����ִ�г�����������Makefile�ļ��е���������������/usr/bin/��
//Makefile��һ���ļ��������������Զ���������
//��ִ��make����ʱ�����Զ��ڵ�ǰĿ¼��Ѱ����ΪMakefile��makefile��GNUmakefile���ļ���Ȼ����б��� 
//�������ĺô����򻯱������ʱ�����ֻ��Ҫ�ڶ�ӦĿ¼����make�Ϳ����ˣ������������ 
 
int main()
{
	//Makefile�ļ��ı������ 
	//Ŀ�꣺�����ļ��б����У� 
	//��Tab�������б� 
	//�����ж��Ŀ��������б�Ĭ��ִ�е�һ��Ŀ�꣬��û�е�һ��Ŀ��������ļ�ʱ���Զ��������Ŀ����Ѱ�ң������ִ������Ŀ�꣬��Ҫ��make������Ŀ������ 
	
	//Makefile�ļ�ʾ��1�� 
	//main:main.o aaa.o
	//    gcc main.o aaa.o -o main 
	//main.o:main.c main.h aaa.h 
	//	  gcc -c main.c -o main.o
	//aaa.o:aaa.c main.h
	//    gcc -c aaa.c -o aaa.o
	//clean: 
	//	  rm main main.o aaa.o 
	//�������ֲַ�����ĺô�����ֻ���������ļ�ʱ��ֻ�������ص��ļ���û����Ӱ����ļ��������±������ɣ��Ӷ�����˱���Ч�� 
	
	//Makefile�ļ�ʾ��2�� 
	//all:test1 test2 
	//test1:test1.c
	//	  gcc test1.c -o test1
	//test2:test2.c
	//	  gcc test2.c -o test2
	//clean:
	//	  rm test1 test2
	//�����������ü���Ŀ�꣨�൱������������ļ�������ĺô�����make����Ӷ����Ч�� 
	
	//make�����ʽ�� 
	//make [-f file] [targets] 
	//�����ʹ�ó�Makefile��makefile��GNUmakefile֮����ļ���ı��������б��룬��ʹ��-f����ָ������make -f bbb 
	//���Makefile�ļ��д��ڶ��Ŀ�꣬Ĭ��ִ�е�һ��������ʹ��targets����ָ������Ŀ�꣬��make clean 
	 
	printf("��ע�͡�\n");
	
	return 0;
} 
