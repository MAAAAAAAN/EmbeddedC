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
	printf("�����������ʼ������");
	scanf("%d", &num);
	
	int i;
	for(i=0;i<num;i++)
	{
		p_new = (STU *)malloc(sizeof(STU));
		printf("������ѧ�š����������֣�");
		scanf("%d %d %s", &p_new->num,&p_new->score,&p_new->name);
		linked_add(&head, p_new);
	}
	
	linked_printf(head); 
	
	STU *p_insert = NULL;
	while(1)
	{
		p_insert = (STU *)malloc(sizeof(STU));
		printf("������Ҫ�����ѧ����ѧ�š��ɼ������������븺���������룺");
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
		printf("����Ϊ�գ�\n");
	}
	else
	{
		STU *p_mov = head;
		printf("�������е��������£�\n");
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
	//����Ϊ��
	if(*head == NULL)
	{
		*head = p_insert_in_order;
		p_insert_in_order->next = NULL;
	}
	//����Ϊ�� 
	else
	{
		while((pb->num <= p_insert_in_order->num) && (pb->next != NULL))
		{
			pf = pb;
			pb = pb->next;
		}
		//�ҵ���һ���Ѵ��ڵĽڵ��ֵ�Ȳ���ڵ��ֵ�� 
		if(pb->num > p_insert_in_order->num)
		{
			//�ҵ��Ľڵ���ͷ�ڵ�
			if(pb == *head)
			{
				p_insert_in_order->next = pb;
				*head = p_insert_in_order;
			}
			//�ҵ��Ľڵ㲻��ͷ�ڵ� 
			else
			{
				pf->next = p_insert_in_order;
				p_insert_in_order->next = pb;
			}
		}
		//û���ҵ�һ���Ѵ��ڵĽڵ��ֵ�Ȳ���ڵ�ֵ���󣬲��뵽����β�� 
		else
		{
			pb->next = p_insert_in_order;
			p_insert_in_order->next = NULL;
		} 
	}
}
