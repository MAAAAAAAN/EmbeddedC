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
STU *linked_reverse(STU *head);

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
	
	head = linked_reverse(head);
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

STU *linked_reverse(STU *head)
{
	//����Ϊ�� 
	if(head == NULL)
	{
		printf("������Ϊ��������������\n");
		return head;
	}
	//����Ϊ�� 
	else
	{
		//������ֻ��һ���ڵ�
		if(head->next == NULL)
		{
			printf("������ֻ��һ���ڵ㣬��������\n");
			return head;
		}
		//�����в���ֻ��һ���ڵ� 
		else
		{
			STU *pf, *pb, *r;
			pf = head;
			pb = pf->next;
			while(pb != NULL)
			{
				r = pb->next;
				pb->next = pf;
				pf = pb;
				pb = r;
			}
			head->next = NULL;
			printf("������ɡ�\n");
			return pf;
		}
	}
}
