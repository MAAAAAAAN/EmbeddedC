#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char str[51], ch;
	int i;
	long int start_time, end_time;
	while(1)
	{
		//��������ӡ��ʾ��Ϣ
		system("cls"); 
		printf("�����������ʼ��Ϸ����ʼ��ʱ��");
		getch();
		start_time = time(NULL);
		system("cls");
		
		//��������ַ��� 
		srand(time(NULL));
		for(i=0;i<50;i++)
		{
			str[i] = rand() % 26 + 'a';
		}
		str[50] = '\0';
		printf("%s\n", str);
		
		//�Ӽ��̽������벢�Ƚ�
		int count = 0;
		for(i=0;i<50;i++)
		{
			ch = getch();
			if(ch==str[i])
			{
				count++;
				printf("%c", ch);
			}else{
				printf("_");
			}
		} 
		end_time = time(NULL);
		int time = end_time - start_time;
		
		//��ӡ��ȷ�ʺ���ʱ 
		float accuracy = count * 1.0 / 50 * 100;
		printf("\n");
		printf("������ʱ%ds����ȷ��Ϊ%.1f%%\n", time, accuracy);
		printf("��ESC�˳������ո�����¿�ʼ��\n");
		
		//�ظ���Ϸ 
		while(1)
		{
			ch = getch();
			if(ch==27)
			{
				return;
			}
			else if(ch==32)
			{
				break;
			}
		}
	} 
	
	return 0;
}
