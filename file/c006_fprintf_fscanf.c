#include <stdio.h>

//fprintf()向文件中输出内容 
//fscanf()从文件中获取内容 

int main()
{
	char ch1 = 'a', ch2;
	int num1 = 50, num2;
	char string1[20] = "hello", string2[20];
	float score1 = 95.5, score2;
	
	FILE *fp;
	if((fp=fopen("fprintf_fscanf.txt", "wb+")) == NULL)
	{
		printf("Cannot open file!\n");
		return 0;
	}
	fprintf(fp, "%c %d %s %f\n", ch1,num1,string1,score1);
	rewind(fp);
	fscanf(fp, "%c %d %s %f", &ch2,&num2,string2,&score2);
	printf("%c %d %s %f\n", ch2,num2,string2,score2);
	
	int ret = fclose(fp);
	if(ret == 0)
	{
		printf("文件关闭成功。\n");
	}
	else
	{
		printf("文件关闭失败。\n");
	}
	
	return 0;
}
