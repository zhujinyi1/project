#include"information.h"

/*
�������ܣ������˱�
������ͷ�ڵ�
����ֵ����
*/
void display(NODE* head)
{
	int t=0;
	int i;
	NODE* p;
	p=head;
	printf("������ס�����\n");
	printf("����	�����	��ס������	�Ա�	���֤��	��ϵ�绰	��סʱ��	���ʱ��\n");
	while(p->next!=NULL)
	{
		t=0;
		p=p->next;
			printf("%d	%d	",p->type,p->num);
			for(i=0;i<p->people;i++){
				t=1;
				printf("%12s	%c	%18s	%11s	%d:%d:%d	%d:%02d:%02d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
			}
			if(t==0){
				printf("\n");
			}
	}
	pau();
}
