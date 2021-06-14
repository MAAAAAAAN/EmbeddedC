#include <stdio.h>
#include <stdlib.h>
 
typedef struct student{
	int num;
	int score;
	char name[20];
	struct student *front;
	struct student *next;
}STU;

void double_linked_add(STU **p_head, STU *p_new);
void double_linked_printf(STU *head);
void double_linked_delete_by_value(STU **head, int num);

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
		double_linked_add(&head, p_new);
	}
	
	double_linked_printf(head); 
	
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
			double_linked_delete_by_value(&head, value);
			double_linked_printf(head);
		} 
	}
	
	return 0;
} 


void double_linked_add(STU **p_head, STU *p_new)
{
	STU *p_mov = *p_head;  
	if(*p_head == NULL)
	{
		*p_head = p_new;
		p_new->front = NULL;
		p_new->next = NULL;
	} 
	else
	{
		while(p_mov->next != NULL)
		{
			p_mov = p_mov->next;
		}
		p_mov->next = p_new;
		p_new->front = p_mov;
		p_new->next = NULL; 
	} 
}

void double_linked_printf(STU *head)
{
	if(head == NULL)
	{
		printf("链表为空！\n");
	}
	else
	{
		STU *p_mov = head;
		printf("此链表中的数据如下（从头到尾）：\n");
		while(p_mov->next != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->next;
		}
		printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
		
		printf("此链表中的数据如下（从尾到头）：\n");
		while(p_mov != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->front;
		}
	}
}

void double_linked_delete_by_value(STU **head, int num)
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
			pb = pb->next;
		}
		//找到了要删除的节点 
		if(pb->num == num)
		{
			//要删除的节点是头节点
			if(pb == *head)
			{
				//该双向链表中只有这一个头节点 
				if((*head)->next == NULL)
				{
					*head = pb->next;
				}
				//该双向链表中有多个节点 
				else
				{
					*head = pb->next;
					(*head)->front = NULL;
				}
			}
			//要删除的节点不是头节点
			else
			{
				//要删除的节点是中间节点 
				if(pb->next != NULL)
				{
					pf = pb->front;
					pf->next = pb->next;
					(pb->next)->front = pf;
				}
				//要删除的节点是尾节点 
				else
				{
					pf = pb->front;
					pf->next = NULL;
				}
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
