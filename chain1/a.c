#include "z.h"

NODE* f_add(NODE* head)
{
	NODE *pnew,*p1=head,*p2;
	int n,m,i;
	
	for(m=0;p1!=NULL;m++)
	{
		p1=p1->next;
	}

	p1=head;

	printf("������Ǹ��ֵ�������ģ�0~%d�� : ",m-1);
	scanf("%d",&n);
	if(n>m)
	{
		printf("����");
		return head;
	}

	for(i=0;i<n;i++)
	{
		p1=p1->next;
	}

	p2=p1->next;      //��¼������ǰ��ڵ�
		
	pnew=(NODE*)malloc(sizeof(NODE));
	if(pnew==NULL)
	{
		printf("not enough memory");
		return NULL;
	}
	printf("ѧ�ţ�");
	scanf("%d",&pnew->num);
	printf("�ɼ���");
	scanf("%d",&pnew->score);
		
	p1->next=pnew;     //��pָ��Ľڵ��*next ָ��Ľڵ�
	pnew->next=p2;
	
	return head;
}
