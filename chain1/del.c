#include "z.h"

NODE* f_delete(NODE* head)
{
	NODE *p1=head,*p2;
	int n,x=0;
	printf("那个兄弟的学号是啥:");
	scanf("%d",&n);
	while(p1!=NULL)
	{
		p2=p1;
		p1=p1->next;
		if(p1->num==n)
		{
			x=1;
			break;
		}
	}
	
	if(x==0)
	{
		printf("没找到\n");
		return head;
	}

	p1=p1->next;
	p2->next=p1;
	
	printf("删除完成\n");

	return head;

}

