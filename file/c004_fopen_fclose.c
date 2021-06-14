#include <stdio.h>

//FILE *fopen(const char *path,const char *mode);
//fopen()��һ���ļ���pathΪ�ļ���·����modeΪ���ļ��ķ�ʽ���ɹ��򿪷����ļ�ָ�룬ʧ�ܷ���NULL
//���д��ļ��ķ�ʽ�����֣� 
//1 r���ļ���ֻ���ķ�ʽ�򿪣��ļ������ڷ���NULL
//2 w���ļ���ֻд�ķ�ʽ�򿪣��ļ����ڴ򿪺���գ��ļ������ڴ������ļ�
//3 a���ļ���׷�ӵķ�ʽ�򿪣��ļ����ڴ����ļ���β�����ļ������ڴ������ļ�
//4 +���ļ��Կɶ���д�ķ�ʽ�򿪣�һ��������ʽ���ʹ�� 

//int *fclose(FILE *fp);
//fclose()�ر�ָ��fp��������ļ����ɹ��رշ���0��ʧ�ܷ��ط�0 

int main()
{
	FILE *fp;
	fp = fopen("./test.txt", "r+");
	if(fp == NULL)
	{
		perror("���ļ�ʧ�ܡ�\n");
		return 0;
	}
	printf("���ļ��ɹ���\n");
	
	//��ȡ�ļ����� 
	//1����ַ���ȡ 
//	char ch;
//	while((ch=fgetc(fp)) != EOF)
//	{
//		fputc(ch,stdout);
//	} 
//	printf("\n");
	//2����ַ�����ȡ 
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
		printf("�ر��ļ��ɹ���\n");
	}
	else
	{
		printf("�ر��ļ�ʧ�ܡ�\n");
	}
	
	return 0;
}
