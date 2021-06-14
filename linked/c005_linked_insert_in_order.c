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
void linked_insert_in_order(STU **head, STU *p_insert_in_order);

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
	
	linked_printf(head); 
	
	STU *p_insert = NULL;
	while(1)
	{
		p_insert = (STU *)malloc(sizeof(STU));
		printf("请输入要插入的学生的学号、成绩和姓名，输入负数结束插入：");
		scanf("%d %d %s", &p_insert->num,&p_insert->score,&p_insert->name);
		
		if(p_insert->num < 0)
		{
			return 0;
		} 
		else
		{
			linked_insert_in_order(&head, p_insert);
			linked_printf(head);
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

void linked_insert_in_order(STU **head, STU *p_insert_in_order)
{
	STU *pb, *pf;
	pb = *head;
	//链表为空
	if(*head == NULL)
	{
		*head = p_insert_in_order;
		p_insert_in_order->next = NULL;
	}
	//链表不为空 
	else
	{
		while((pb->num <= p_insert_in_order->num) && (pb->next != NULL))
		{
			pf = pb;
			pb = pb->next;
		}
		//找到第一个已存在的节点的值比插入节点的值大 
		if(pb->num > p_insert_in_order->num)
		{
			//找到的节点是头节点
			if(pb == *head)
			{
				p_insert_in_order->next = pb;
				*head = p_insert_in_order;
			}
			//找到的节点不是头节点 
			else
			{
				pf->next = p_insert_in_order;
				p_insert_in_order->next = pb;
			}
		}
		//没有找到一个已存在的节点的值比插入节点值更大，插入到链表尾部 
		else
		{
			pb->next = p_insert_in_order;
			p_insert_in_order->next = NULL;
		} 
	}
}
