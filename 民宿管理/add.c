#include"information.h"
extern int a;
/*
�������ܣ���ӷ���
������ͷ�ڵ�
����ֵ��ͷ�ڵ�
*/
NODE* f_add(NODE* head){
	NODE *p,*pnew;
	int x;

	p=head;           //��pָ��head
	
	printf("�Ƿ񴴽�һ���µķ���(�ǣ�1����0)");
	scanf("%d",&x);
	while(p->next!=NULL)
		p=p->next;
	while(x!=0)
	{
		pnew = (NODE*)malloc(sizeof(NODE));
		pnew->type=0;
		while(pnew->type<=0||pnew->type>5){
			printf("�÷���������������");
			scanf("%d",&pnew->type);
			if(pnew->type<=0||pnew->type>5){
				printf("û�и�������\n����������\n");
			}
		}
		p->next=pnew;     //��pָ��Ľڵ��*next ָ��Ľڵ�
		pnew->next=NULL;
		p=pnew;           //��pָ��pnew
		a++;                //����������1
		p->people=0;         //��ʼ�� 
		p->num=a;            
		
		printf("�Ƿ񴴽�һ���µķ���(�ǣ�1����0)");
		scanf("%d",&x);
	
	}
	return head;
}
