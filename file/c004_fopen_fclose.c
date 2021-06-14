#include <stdio.h>

//FILE *fopen(const char *path,const char *mode);
//fopen()打开一个文件，path为文件的路径，mode为打开文件的方式，成功打开返回文件指针，失败返回NULL
//其中打开文件的方式有四种： 
//1 r：文件以只读的方式打开，文件不存在返回NULL
//2 w：文件以只写的方式打开，文件存在打开后清空，文件不存在创建新文件
//3 a：文件以追加的方式打开，文件存在打开至文件结尾处，文件不存在创建新文件
//4 +：文件以可读可写的方式打开，一般其他方式结合使用 

//int *fclose(FILE *fp);
//fclose()关闭指针fp所代表的文件，成功关闭返回0，失败返回非0 

int main()
{
	FILE *fp;
	fp = fopen("./test.txt", "r+");
	if(fp == NULL)
	{
		perror("打开文件失败。\n");
		return 0;
	}
	printf("打开文件成功。\n");
	
	//读取文件内容 
	//1逐个字符读取 
//	char ch;
//	while((ch=fgetc(fp)) != EOF)
//	{
//		fputc(ch,stdout);
//	} 
//	printf("\n");
	//2逐个字符串读取 
	char buf[100];
	char *p;
	while(1)
	{
		p = fgets(buf, 100, fp);
		if(p == NULL)
		{
			break;
		}
		printf("%s",p);
	} 
	printf("\n");
	
	int ret;
	ret = fclose(fp);
	if(ret == 0)
	{
		printf("关闭文件成功。\n");
	}
	else
	{
		printf("关闭文件失败。\n");
	}
	
	return 0;
}
