#include "z.h"

NODE* f_create()
{
	NODE *head,*p,*pnew;
	int x;

	head=(NODE*)malloc(sizeof(NODE));
	if(head==NULL)
	{
		printf("not enough memory");
		return NULL;
	}

	p=head;           //让p指向head
	head->next=NULL;

	printf("是否创建一个新的节点(是：1，否：0)");
	scanf("%d",&x);
	while(x!=0)
	{
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
		
		
		p->next=pnew;     //将p指向的节点的*next 指向的节点
		pnew->next=NULL;
		p=pnew;           //将p指向pnew

		printf("是否创建一个新的节点(是：1，否：0)");
		scanf("%d",&x);

	}
	return head;
}
