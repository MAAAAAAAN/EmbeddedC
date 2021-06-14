#include <stdio.h>
#include <string.h>

typedef struct stu{
	int num;
	char name[20];
	float score;
}STU;

//传结构体变量	
void fun(STU *p)
{
	p->num = 101;
	strcpy(p->name, "Lucy");
	(*p).score = 90.5;
	//p->score = 91;
}

//传结构体数组变量 
void fun2(STU *p)
{
	p[0].num = 13;
	strcpy(p[2].name, "Harden");
	(*(p+1)).score = 95;
}
	
int main()
{
	STU girl;
	fun(&girl);
	printf("%d -- %s -- %f\n", girl.num,girl.name,girl.score);
	
	STU nba[3];
	fun2(nba);
	printf("%d\n", nba[0].num);
	printf("%s\n", nba[2].name);
	printf("%f\n", nba[1].score);
	
	STU edu[3] = {
		{001, "Zhao", 99.5},
		{002, "Qian", 89},
		{003, "Sun", 79.5}
	};
	printf("%p\n", edu);
	printf("%p\n", edu[0]);
	printf("%p\n", edu[0].num);
	
	return 0;
}
