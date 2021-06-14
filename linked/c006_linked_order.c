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
void linked_order(STU *head);

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
	
	linked_order(head);
	linked_printf(head);
	
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

void linked_order(STU *head)
{
	//链表为空 
	if(head == NULL)
	{
		printf("此链表为空链表，无需排序。\n");
	}
	//链表不为空 
	else
	{
		STU *pf, *pb, temp;
		pf = head;
		//pf指向基准节点 
		while(pf->next != NULL)
		{
			//pb指向基准节点的下一个节点 
			pb = pf->next;
			//pb不断移动 
			while(pb != NULL)
			{
				if(pf->num > pb->num)
				{
					//将两个结构体交换 
					temp = *pf;
					*pf = *pb;
					*pb = temp;
					//将原本的next地址再交换回去，相当于只交换了原本两个结构体的数据域 
					temp.next = pf->next;
					pf->next = pb->next;
					pb->next = temp.next;
				} 
				pb = pb->next;
			}
			pf = pf->next;
		}
		printf("排序完成。\n");
	}
}
