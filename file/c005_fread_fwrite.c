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
	printf("�����������������ɼ������䣺\n");
	for(i=0;i<2;i++)
	{
		scanf("%s %d %d", &boy_a[i].name,&boy_a[i].num,&boy_a[i].age);
	}
	
	//��ѧ����Ϣд�뵽�ļ��� 
	fwrite(boy_a, sizeof(STU), 2, fp); 
	//�ļ�ָ��ͨ��д�����Ѿ����ļ�ĩβ����Ҫ��λ���ļ���ͷ 
	rewind(fp);
	//���ļ��е�ѧ����Ϣ��ȡ���� 
	fread(boy_b, sizeof(STU), 2, fp);
	for(i=0;i<2;i++)
	{
		printf("%s %d %d\n", boy_b[i].name,boy_b[i].num,boy_b[i].age);
	} 
	
	int ret = fclose(fp);
	if(ret == 0)
	{
		printf("�ļ��رճɹ���\n");
	}
	else
	{
		printf("�ļ��ر�ʧ�ܡ�\n");
	}
	
	return 0;
}
