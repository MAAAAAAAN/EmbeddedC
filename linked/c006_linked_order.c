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

void linked_order(STU *head)
{
	//����Ϊ�� 
	if(head == NULL)
	{
		printf("������Ϊ��������������\n");
	}
	//����Ϊ�� 
	else
	{
		STU *pf, *pb, temp;
		pf = head;
		//pfָ���׼�ڵ� 
		while(pf->next != NULL)
		{
			//pbָ���׼�ڵ����һ���ڵ� 
			pb = pf->next;
			//pb�����ƶ� 
			while(pb != NULL)
			{
				if(pf->num > pb->num)
				{
					//�������ṹ�彻�� 
					temp = *pf;
					*pf = *pb;
					*pb = temp;
					//��ԭ����next��ַ�ٽ�����ȥ���൱��ֻ������ԭ�������ṹ��������� 
					temp.next = pf->next;
					pf->next = pb->next;
					pb->next = temp.next;
				} 
				pb = pb->next;
			}
			pf = pf->next;
		}
		printf("������ɡ�\n");
	}
}
