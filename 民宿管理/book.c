#include"information.h"
extern int a;
/*
�������ܣ�Ԥ�����䲢�������Ϣ�Ǽ�
������ͷ�ڵ�
����ֵ����
*/

void f_book(NODE* head){
	NODE* p=head;
	int i,t=0,j;
	char m[12]={'\0'},b[11]={'\0'},c[18]={'\0'};
	while(1)
	{
		printf("������ҪԤ���ķ���ţ�(1-%d,���븺���˳�)",a);
		scanf("%d",&i);
		if(i<0){
			return ;
		}
		while(p->next!=NULL)
		{
			p=p->next;
			if(p->num==i){
				t=1;
				break;
			}
		}
		if(t==0){
			printf("�÷��䲻����\n");
			printf("���������룺\n");
		}
		else if(p->people!=0){
			printf("�÷����Ѿ�����\n");
			printf("����������\n");
		}
		else{
			break;
		}
	}
	while(1)
	{
		fflush(stdin);
		printf("�������ס������");
		scanf("%d",&p->people);
		if(p->people>3||p->people<=0)
		{
			printf("��������������\n");
		}
		else
			break;
	}

	for(j=0;j<p->people;j++){
		while(strlen(m)==0)
		{
			fflush(stdin);
			printf("�������%d���˵�������",j+1);
			scanf("%s",&m);
			if(strlen(m)==0)
				printf("��������Ϊ��");
		}
		strcpy(p->name[j],m);
		while(p->sex[j]!='m'&&p->sex[j]!='f')
		{
			fflush(stdin);
			printf("�������%d���˵��Ա�",j+1);
			scanf("%c",&p->sex[j]);
			if(p->sex[j]!='m'&&p->sex[j]!='f')
				printf("�Ա������m/f");
		}
		while(strlen(c)!=18)
		{
			fflush(stdin);
			printf("�������%d���˵����֤�ţ�",j+1);
			scanf("%s",&c);
			if(strlen(c)!=18)
				printf("���֤�ű�����18λ");
		}
		strcpy(p->id[j],c);
		while(strlen(b)!=11)
		{
			fflush(stdin);
			printf("�������%d���˵���ϵ�绰��",j+1);
			scanf("%s",&b);
			fflush(stdin);
			if(strlen(b)!=11)
				printf("�绰�ű�����ʮһλ");
		}
		strcpy(p->tel[j],b);
	}
	printf("��������סʱ�䣺����ʽ ����:��:�գ�");
	scanf("%d:%d:%d",&p->in[0],&p->in[1],&p->in[2]);

	printf("Ԥ���ɹ���");
	pau();
}

/*
�������ܣ��˷�
������ͷ�ڵ�
����ֵ����
*/
void rebook(NODE* head){
	NODE* p=head;
	char m[12]={'\0'},b[11]={'\0'},c[18]={'\0'};
	int i,j,t=0,time,cost;
	printf("��Ҫ���ļ䷿��");
	scanf("%d",&i);
	while(p->next!=NULL){
		p=p->next;
		if(i==p->num)
		{
			t=1;
			break;
		}
	}
	if(t==0){
		printf("û��䷿");
		pau();
		return;
	}
	printf("��סʱ�䣺");
	scanf("%d",&time);
	cost=p->type*time*50;
	for(j=0;j<3;j++){
		strcpy(p->tel[j],b);
		strcpy(p->id[j],c);
		strcpy(p->name[j],m);
		p->sex[j]=0;
		strcpy(p->name[j],m);
		p->in[j]=0;
	}
	p->people=0;
	printf("�˷��ɹ���\n");
	printf("�����ι������%dԪ\n",cost);
	pau();

}