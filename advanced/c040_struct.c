#include <stdio.h>

//结构体是一种构造类型的数据结构，是一种或多种基本类型或构造类型的数据的集合 

int main()
{
	//定义结构体类型DATE，有三个成员
	typedef struct date{
		int year;
		int month;
		int day;
	}DATE;
	
	//定义结构体类型NBA_PLAYER，有三个成员 
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
