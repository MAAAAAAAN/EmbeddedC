#include <stdio.h>
#include <stdlib.h>

//链表一般分为两块区域：数据域和指针域 
typedef struct student{
	int num;
	int score;
	char name[20];
	struct student *next;
}STU;

void linked_add(STU **p_head, STU *p_new);
void linked_printf(STU *head);

int main()
{
	STU *head = NULL, *p_new = NULL;
	
	int num;
	printf("请输入链表初始个数：");
	scanf("%d", &num);
	
	int i;
	for(i=0;i<num;i++)
	{
		//申请一个新节点 
		p_new = (STU *)malloc(sizeof(STU));
		printf("请输入学号、分数和名字：");
		scanf("%d %d %s", &p_new->num,&p_new->score,&p_new->name);
		//将新节点加入链表中 
		linked_add(&head, p_new);
	}
	
	linked_printf(head); 
	
	return 0;
} 


void linked_add(STU **p_head, STU *p_new)
{
	STU *p_mov = *p_head;
	//第一次加入链表时  
	if(*p_head == NULL)
	{
		*p_head = p_new;
		p_new->next = NULL;
	} 
	//不是第一次加入链表时 
	else
	{
		//找到原有链表的最后一个节点 
		while(p_mov->next != NULL)
		{
			p_mov = p_mov->next;
		}
		//将新节点加入原有链表中 
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
