#include <stdio.h>
#include <stdlib.h>

//˫������ 
typedef struct student{
	int num;
	int score;
	char name[20];
	struct student *front;
	struct student *next;
}STU;

void double_linked_add(STU **p_head, STU *p_new);
void double_linked_printf(STU *head);

int main()
{
	STU *head = NULL, *p_new = NULL;
	
	int num;
	printf("������������ʼ������");
	scanf("%d", &num);
	
	int i;
	for(i=0;i<num;i++)
	{
		//����һ���½ڵ� 
		p_new = (STU *)malloc(sizeof(STU));
		printf("������ѧ�š����������֣�");
		scanf("%d %d %s", &p_new->num,&p_new->score,&p_new->name);
		//���½ڵ���������� 
		double_linked_add(&head, p_new);
	}
	
	double_linked_printf(head); 
	
	return 0;
} 


void double_linked_add(STU **p_head, STU *p_new)
{
	STU *p_mov = *p_head;
	//��һ�μ�������ʱ  
	if(*p_head == NULL)
	{
		*p_head = p_new;
		p_new->front = NULL;
		p_new->next = NULL;
	} 
	//���ǵ�һ�μ�������ʱ 
	else
	{
		//�ҵ�ԭ�����������һ���ڵ� 
		while(p_mov->next != NULL)
		{
			p_mov = p_mov->next;
		}
		//���½ڵ����ԭ�������� 
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
		//��ͷ��β 
		printf("�������е��������£���ͷ��β����\n");
		while(p_mov->next != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->next;
		}
		printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
		//��β��ͷ 
		printf("�������е��������£���β��ͷ����\n");
		while(p_mov != NULL)
		{
			printf("%d -- %s -- %d\n", p_mov->num,p_mov->name,p_mov->score);
			p_mov = p_mov->front;
		}
	}
}