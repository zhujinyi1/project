#include"information.h"

/*
�������ܣ�ע���û�/����Ա
������ͷ�ڵ�
����ֵ��ͷ�ڵ�
*/
Users* sign_up(Users* head){     
	int a = 0;
	char name1[12],key1[12];
	Users *p,*pnew;

	if(head==NULL){
		head = (Users*)malloc(sizeof(Users));
		if(head==NULL){
			printf("no enough memory!");
			exit(0);
		}
		head->next=NULL;
	}

	p = head;
	while(p->next!=NULL){
		p = p->next;
	}
	
	pnew = (Users *)malloc(sizeof(Users));
	if(head==NULL){
			printf("no enough memory!");
			exit(0);
		}
	p->next=pnew;
	pnew->next=NULL;

	while(a!=1&&a!=2)
	{
		printf("������Ҫ��ʲô���ע�����ϵͳ��\n");
		printf("1.����Ա��2.�û�");
		scanf("%d",&a);
		if(a!=1&&a!=2)
			printf("������������������");
	}
	fflush(stdin);
	p = head;
	printf("�������û�����");
	scanf("%s",name1);
	do{	
		p=p->next;
		if(p==NULL)
			break;
		while(strcmp(name1,p->name)==0){
			printf("�û����ظ�������������");
			fflush(stdin);
			printf("�������û�����");
			scanf("%s",name1);
			fflush(stdin);
		}
	}while(p->next!=NULL);
	fflush(stdin);
	
	printf("���������룺");
	scanf("%s",key1);
	fflush(stdin);
	while(strlen(key1)<6){
		
		printf("����̫�̣����������룡���Ϊ6λ���12λ");
		scanf("%s",key1);
		fflush(stdin);

	}

	strcpy(p->name,name1);
	strcpy(p->key,key1);
	p->rank = a;

	printf("ע��ɹ�������");

	write_user(head);
	return head;
}

/*
�������ܣ���¼
�������û�ͷ�ڵ�
����ֵ������Ȩ�޵ȼ����û�/����Ա��
*/
int sign_in(Users *head){
	Users *p;
	char name1[12],key1[12];
	int flag=-1;
	printf("�������û�����");
	fflush(stdin);
	scanf("%s",name1);
	fflush(stdin);
	p=head->next;
	while(p!=NULL){
		
		if(strcmp(name1,p->name)==0){
			flag=0;
			printf("����������:");
			fflush(stdin);
			scanf("%s",key1);
			fflush(stdin);
			if(strcmp(key1,p->key)==0){
				printf("Welcome to my system!\n");
				if(p->rank==1){
					printf("Administrator!\n");
				}else{
					printf("User!\n");
				}
				flag = p->rank;
				break;
			}
		}
		p=p->next;
	}
	if(flag==0){
		printf("��������\n");
	}
	else if(flag==-1){
		printf("�û��������ڣ�\n");
	}
	return flag;
}

/*
�������ܣ���ʼ�˵�
��������
����ֵ����
*/
void begin(){
	int i=0 ,f,t=0;
	Users *head=NULL;
	f=0;
	while(1)
	{
		printf("|------��ʼ�˵�------|\n");
		printf("|1.��¼  	     |\n");
		printf("|2.ע��   	         |\n");   
		printf("|�������˳�	     |\n");
		printf("|--------------------|\n");
		printf("����������ѡ��:");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				clear();
				head = read_user();
				f = sign_in(head);
				if(f!=0&&f!=-1){
					f_menu(f);
				}
				break;
			case 2:
				clear();
				head = read_user();
				head = sign_up(head);
				break;
			default:
				t=1;
				break;
		}
		if(t==1){
			printf("��ӭ�´ι��٣�\n");
			break;
		}
		
	}
}