#include <stdio.h>
#include <stdlib.h>
 
typedef struct student{
	int num;
	int score;
	char name[20];
	struct student *next;
}STU;

void linked_add(STU **p_head, STU *p_new);
void linked_printf(STU *head);
STU *linked_search_by_value(STU *head,int num);

int main()
{
	STU *head = NULL, *p_new = NULL;
	
	int num;
	printf("请输入链表初始个数：");
	scanf("%d", &num);
	
	int i;
	for(i=0;i<num;i++)
	{
		p_new = (STU *)malloc(sizeof(STU));
		printf("请输入学号、分数和名字：");
		scanf("%d %d %s", &p_new->num,&p_new->score,&p_new->name);
		linked_add(&head, p_new);
	}
	
	STU *pb = NULL;
	int value;
	while(1)
	{
		printf("请输入要查找的学生的学号，输入负数结束查找：");
		scanf("%d", &value);
		
		if(value < 0)
		{
			return 0;
		} 
		else
		{
			pb = linked_search_by_value(head, value);
			//查找成功 
			if(pb != NULL)
			{
				printf("查找成功：%d -- %s -- %d\n", pb->num,pb->name,pb->score);
			}
			//查找失败 
			else
			{
				printf("查找失败，链表中无此学号。\n");
			}
		} 
	}
	
	return 0;
} 


void linked_add(STU **p_head, STU *p_new)
{
	STU *p_mov = *p_head; 
	if(*p_head == NULL)
	{
		*p_head = p_new;
		p_new->next = NULL;
	} 
	else
	{
		while(p_mov->next != NULL)
		{
			p_mov = p_mov->next;
		}
		p_mov->next = p_new;
		p_new->next = NULL; 
	} 
}

void linked_printf(STU *head)
{
	if(head == NULL)
	{
		printf("链表为空！\n");
	}
	else
	{
		STU *p_mov = head;
		printf("此链表中的数据如下：\n");
		while(p_mov != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->next;
		}
	}
}

STU *linked_search_by_value(STU *head,int num)
{
	STU *p_mov = head;
	while(p_mov != NULL)
	{
		if(p_mov->num == num)
		{
			return p_mov;
		}
		p_mov = p_mov->next;
	}
	return NULL;
}
