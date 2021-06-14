#include <stdio.h>

typedef struct stu{
	char name[10];
	int num;
	int age;
}STU;

int main()
{
	STU boy_a[10], boy_b[2];
	
	FILE *fp;
	if((fp=fopen("fread_fwrite.txt", "wb+")) == NULL)
	{
		printf("Cannot open file!\n");
		return 0;
	}
	
	int i;
	printf("请依次输入姓名、成绩和年龄：\n");
	for(i=0;i<2;i++)
	{
		scanf("%s %d %d", &boy_a[i].name,&boy_a[i].num,&boy_a[i].age);
	}
	
	//将学生信息写入到文件中 
	fwrite(boy_a, sizeof(STU), 2, fp); 
	//文件指针通过写操作已经到文件末尾，需要复位至文件开头 
	rewind(fp);
	//将文件中的学生信息读取出来 
	fread(boy_b, sizeof(STU), 2, fp);
	for(i=0;i<2;i++)
	{
		printf("%s %d %d\n", boy_b[i].name,boy_b[i].num,boy_b[i].age);
	} 
	
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
