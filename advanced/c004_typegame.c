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
		//清屏，打印提示信息
		system("cls"); 
		printf("按下任意键开始游戏并开始计时！");
		getch();
		start_time = time(NULL);
		system("cls");
		
		//生成随机字符串 
		srand(time(NULL));
		for(i=0;i<50;i++)
		{
			str[i] = rand() % 26 + 'a';
		}
		str[50] = '\0';
		printf("%s\n", str);
		
		//从键盘接收输入并比较
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
		
		//打印正确率和用时 
		float accuracy = count * 1.0 / 50 * 100;
		printf("\n");
		printf("本次用时%ds，正确率为%.1f%%\n", time, accuracy);
		printf("按ESC退出，按空格键重新开始！\n");
		
		//重复游戏 
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
