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
void linked_delete_by_value(STU **head, int num);

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
	
	int value;
	while(1)
	{
		printf("请输入要删除的学生的学号，输入负数结束删除：");
		scanf("%d", &value);
		
		if(value < 0)
		{
			return 0;
		} 
		else
		{
			linked_delete_by_value(&head, value);
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

void linked_delete_by_value(STU **head, int num)
{
	//链表为空 
	if(*head == NULL)
	{
		printf("链表为空，没有要删除的节点。\n");
		return;
	}
	//链表不为空 
	else
	{
		STU *pb, *pf;
		pb = *head;
		//根据所给值在链表中查找要删除的节点 
		while((pb->num != num) && (pb->next != NULL))
		{
			pf = pb;
			pb = pb->next;
		}
		//找到了要删除的节点 
		if(pb->num == num)
		{
			//要删除的节点是头节点
			if(pb == *head)
			{
				*head = pb->next;
			}
			//要删除的节点不是头节点
			else
			{
				pf->next = pb->next;
			}
			free(pb); 
		}
		//没有找到要删除的节点 
		else
		{
			printf("链表中没有要删除的节点。\n");
		}
	}
}
