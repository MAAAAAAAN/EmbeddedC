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
	
	int value;
	while(1)
	{
		printf("������Ҫɾ����ѧ����ѧ�ţ����븺������ɾ����");
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

void linked_delete_by_value(STU **head, int num)
{
	//����Ϊ�� 
	if(*head == NULL)
	{
		printf("����Ϊ�գ�û��Ҫɾ���Ľڵ㡣\n");
		return;
	}
	//����Ϊ�� 
	else
	{
		STU *pb, *pf;
		pb = *head;
		//��������ֵ�������в���Ҫɾ���Ľڵ� 
		while((pb->num != num) && (pb->next != NULL))
		{
			pf = pb;
			pb = pb->next;
		}
		//�ҵ���Ҫɾ���Ľڵ� 
		if(pb->num == num)
		{
			//Ҫɾ���Ľڵ���ͷ�ڵ�
			if(pb == *head)
			{
				*head = pb->next;
			}
			//Ҫɾ���Ľڵ㲻��ͷ�ڵ�
			else
			{
				pf->next = pb->next;
			}
			free(pb); 
		}
		//û���ҵ�Ҫɾ���Ľڵ� 
		else
		{
			printf("������û��Ҫɾ���Ľڵ㡣\n");
		}
	}
}
