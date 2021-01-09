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

	printf("你想把那个兄弟添加在哪（0~%d） : ",m-1);
	scanf("%d",&n);
	if(n>m)
	{
		printf("超了");
		return head;
	}

	for(i=0;i<n;i++)
	{
		p1=p1->next;
	}

	p2=p1->next;      //记录插入点的前后节点
		
	pnew=(NODE*)malloc(sizeof(NODE));
	if(pnew==NULL)
	{
		printf("not enough memory");
		return NULL;
	}
	printf("学号：");
	scanf("%d",&pnew->num);
	printf("成绩：");
	scanf("%d",&pnew->score);
		
	p1->next=pnew;     //将p指向的节点的*next 指向的节点
	pnew->next=p2;
	
	return head;
}
