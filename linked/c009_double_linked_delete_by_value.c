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
	printf("�����������ʼ������");
	scanf("%d", &num);
	
	int i;
	for(i=0;i<num;i++)
	{
		p_new = (STU *)malloc(sizeof(STU));
		printf("������ѧ�š����������֣�");
		scanf("%d %d %s", &p_new->num,&p_new->score,&p_new->name);
		double_linked_add(&head, p_new);
	}
	
	double_linked_printf(head); 
	
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
		printf("����Ϊ�գ�\n");
	}
	else
	{
		STU *p_mov = head;
		printf("�������е��������£���ͷ��β����\n");
		while(p_mov->next != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->next;
		}
		printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
		
		printf("�������е��������£���β��ͷ����\n");
		while(p_mov != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->front;
		}
	}
}

void double_linked_delete_by_value(STU **head, int num)
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
			pb = pb->next;
		}
		//�ҵ���Ҫɾ���Ľڵ� 
		if(pb->num == num)
		{
			//Ҫɾ���Ľڵ���ͷ�ڵ�
			if(pb == *head)
			{
				//��˫��������ֻ����һ��ͷ�ڵ� 
				if((*head)->next == NULL)
				{
					*head = pb->next;
				}
				//��˫���������ж���ڵ� 
				else
				{
					*head = pb->next;
					(*head)->front = NULL;
				}
			}
			//Ҫɾ���Ľڵ㲻��ͷ�ڵ�
			else
			{
				//Ҫɾ���Ľڵ����м�ڵ� 
				if(pb->next != NULL)
				{
					pf = pb->front;
					pf->next = pb->next;
					(pb->next)->front = pf;
				}
				//Ҫɾ���Ľڵ���β�ڵ� 
				else
				{
					pf = pb->front;
					pf->next = NULL;
				}
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
