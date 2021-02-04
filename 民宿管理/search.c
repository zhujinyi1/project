#include"information.h"

/*
��������:��סʱ�����
������ͷ�ڵ�
����ֵ����
*/
void time_search(NODE* head)
{
	NODE* p;
	int x[3],i;
	printf("��������סʱ��(��ʽ���꣺�£���)");
	scanf("%d:%d:%d",&x[0],&x[1],&x[2]);
	while(p->next!=NULL){
		p=p->next;
		
		if(x[0]==p->in[0]&&x[1]==p->in[1]&&x[2]==p->in[2])
		{
			printf("��������	�����	��ס����	����	�Ա�	���֤��	��ϵ��ʽ	��סʱ��	");
			printf("%d	%d	%d	",p->type,p->num,p->people);
			if(p->people!=0)
			{
				printf("%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				for(i=1;i<p->people;i++)
					printf("			%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
		
			}
			printf("\n");
		}
	}
	pau();
}

/*
�������ͣ����շ������Ͳ���
������ͷ�ڵ�
����ֵ����
*/
void room_search(NODE* head){
	NODE* p;
	int a,i;
	p=head;
	
	
	while(a<=0||a>5)
	{
		printf("����ֻ����1-5\n");
		printf("���������뷿�����ͣ�");
		scanf("%d",&a);
	}
		
	while(p->next!=NULL){
		p=p->next;
		
		if(a==p->type)
		{
			printf("��������	�����	��ס����	����	�Ա�	���֤��	��ϵ��ʽ	��סʱ��	");
			printf("%d	%d	%d	",p->type,p->num,p->people);
			if(p->people!=0)
			{
				printf("%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				for(i=1;i<p->people;i++)
					printf("			%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
		
			}
			printf("\n");
		}
	}
	pau();
}

/*
�������ܣ����ҿշ�
������ͷ�ڵ�
����ֵ����
*/
void empty(NODE *head)
{
	NODE* p;
	int t=0;
	p=head;
	printf("�շ���Ϊ��\n");
	while(p->next!=NULL)
	{
		p=p->next;
		if(p->people==0)
		{
			t=1;
			printf("����	�����\n");
			printf("%d	%d	\n",p->type,p->num);
		}
	}
	
	if(t==0)
	{
		printf("��Ǹ��û�пշ���");
	}
	pau();
}

/*
�������ܣ���������
������ͷ�ڵ�
����ֵ����
*/
void name_search(NODE* head)
{
	NODE* p=head;
	char a[12];
	int t=0,i;
	printf("����������:");
	scanf("%s",a);
	printf("����	���֤��	��ϵ�绰	�����	��������	��סʱ��\n");
	while(p->next!=NULL)
	{
		p=p->next;
		for(i=0;i<p->people;i++)
		{
			if(strcmp(p->name[i],a)==0)
			{
				t=1;
				printf("%s	%s	%s	%d	%d	%d:%d:%d\n",p->name[i],p->id[i],p->tel[i],p->num,p->type,p->in[0],p->in[1],p->in[2]);
			}
		}
	}
	if(t==0)
	{
		printf("���޴��ˣ�\n");
	}
	pau();
}

/*
�������ܣ�����Ų���
������ͷ�ڵ�
����ֵ����
*/
void num_search(NODE* head)
{
	NODE* p=head;
	int t=0,i,j;
	printf("�����뷿���:");
	scanf("%d",&j);
	printf("�����	��������	��ס����	����	���֤��	��ϵ�绰	��סʱ��\n");
	while(p->next!=NULL)
	{
		p=p->next;
		if(p->num==j)
		{
			t=1;
			printf("%d	%d	%d",p->num,p->type,p->people);
			for(i=0;i<p->people;i++)
			{		
				printf("	%s	%s	%s	%d:%02d:%02d\n",p->name[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				printf("		");
			}
		}
	}
	if(t==0)
	{
		printf("û�д˷���\n");
	}
	pau();
}

/*
�������ܣ����Ҳ˵�
������ͷ�ڵ�
����ֵ����
*/
void f_search(NODE* head)
{	
	int i,t=0;
	NODE *p;
	p=head;
	while(1)
	{
		t=0;
		printf("|------���Ҳ˵�------|\n");
		printf("|1.��������      |\n");
		printf("|2.���Ų���	     |\n");      
		printf("|3.�������Ͳ���    |\n");
		printf("|4.��סʱ�����	   |\n");
		printf("|����������      |\n");
		printf("|--------------------|\n");
		printf("���������ѡ��");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				clear();
				name_search(p);
				break;
			case 2:
				clear();
				num_search(p);
				break;
			case 3:
				clear();
				room_search(p);
				break;
			case 4:
				time_search(p);
				clear();
				break;
			default:
				t=1;
				clear();
				break;
		}
		if(t==1){
			break;
		}
	}
}
