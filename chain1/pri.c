#include "z.h"

void f_print(NODE *head)
{
	NODE *p=head;
	printf("ѧ��\t�ɼ�\n");
	while(p->next!=NULL)
	{
		p=p->next;

		printf("%d\t%d\n",p->num,p->score);

	}
}