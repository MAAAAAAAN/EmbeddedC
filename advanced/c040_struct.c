#include <stdio.h>

//�ṹ����һ�ֹ������͵����ݽṹ����һ�ֻ���ֻ������ͻ������͵����ݵļ��� 

int main()
{
	//����ṹ������DATE����������Ա
	typedef struct date{
		int year;
		int month;
		int day;
	}DATE;
	
	//����ṹ������NBA_PLAYER����������Ա 
	typedef struct nba_player{
		char name[30];
		DATE birthday;
		int position;
	}NBA_PLAYER;
	
	DATE kyrie_birthday = {1992, 3, 23};
	NBA_PLAYER kyrie = {"Kyrie Irving", kyrie_birthday, 2};
	int num = kyrie.position;
	char *pos;
	switch(num)
	{
		case 1: pos = "PG";break;
		case 2: pos = "SG";break;
		case 3: pos = "SF";break;
		case 4: pos = "PF";break;
		case 5: pos = "C";break;
		default: pos = "ERROR";
	}
	printf("%s,%d-%d-%d,%s.\n", kyrie.name,kyrie.birthday.year,kyrie.birthday.month,kyrie.birthday.day,pos);
	
	return 0;
}
