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

	p=head;           //��pָ��head
	head->next=NULL;

	printf("�Ƿ񴴽�һ���µĽڵ�(�ǣ�1����0)");
	scanf("%d",&x);
	while(x!=0)
	{
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
		
		
		p->next=pnew;     //��pָ��Ľڵ��*next ָ��Ľڵ�
		pnew->next=NULL;
		p=pnew;           //��pָ��pnew

		printf("�Ƿ񴴽�һ���µĽڵ�(�ǣ�1����0)");
		scanf("%d",&x);

	}
	return head;
}
