#include"information.h"
extern int a;
/*
�������ܣ���ʼ������������ʼ����ֵ
��������
����ֵ������ͷ�ڵ�
*/
NODE* primitive()
{
	int i;
	NODE *head,*p,*pnew;
	

	head=(NODE*)malloc(sizeof(NODE));        //��̬�ڴ����
	if(head==NULL){                          //�ж��ڴ��Ƿ񿪱ٳɹ�
		printf("��ʼ��ʧ�ܣ��ڴ�ռ䲻�㣡");
		exit(0);
	}
	p=head;
	head->next=NULL;
	
	for(i=0;i<15;i++){
	
		pnew=(NODE*)malloc(sizeof(NODE));    
		if(pnew==NULL){                      //�ж��ڴ��Ƿ񿪱ٳɹ�
			printf("��ʼ��ʧ�ܣ��ڴ�ռ䲻�㣡");
			exit(0);
		}
		
		pnew->num=i+1;
		pnew->people=0;          //���û������㣨��Ϊ����ų�ʼ����
		pnew->type=i/3+1;   //��ÿ�������ţ�ÿ�����ִ���һ������

		pnew->next=NULL;	//���ڵ��ָ��nextָ���		
		p->next=pnew;     //ָ�����
		p=pnew;

	}
	
	printf("��ʼ���ɹ���\n");
	a=15;
	pau();
	return (head);
}