#include"p1_stu.h"

/*
���ܣ���head������׷��һ���½ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *append(NODE * head)
{
	NODE *p,*pnew;
	p=head;
	pnew=NULL;                          //��ʼ��ָ��
	pnew=(NODE*)malloc(sizeof(NODE));             
	if(pnew==NULL)
	{
		printf("no enough memory");
		return head;                        
	}                                   //���ٿռ�
	while(p->next!=NULL)
	{
		p=p->next;
	}                                   //��ָ���ƶ������׼�����
	p->next=pnew;
	pnew->next=NULL;
	fflush(stdin);
	printf("����:");
	scanf("%s",&pnew->xm);
	fflush(stdin);
	printf("ѧ��:");
	scanf("%s",&pnew->xh);
	fflush(stdin);
	printf("�Ա�:");
	scanf("%s",&pnew->xb);
	fflush(stdin);
	printf("����:");
	scanf("%lf",&pnew->cj[0]);
	fflush(stdin);
	printf("��ѧ:");
	scanf("%lf",&pnew->cj[1]);
	fflush(stdin);
	printf("Ӣ��:");
	scanf("%lf",&pnew->cj[2]);               //����ɼ�
	pnew->cj[3]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];
	pnew->cj[4]=pnew->cj[3]/3;              //�ܷ֣�ƽ����
	display(head);                           //�����������
}

/*
���ܣ���head�����в���һ���½ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *Insert(NODE * head)
{
	NODE *p=NULL;
	NODE *q=head;
	int j;
	int i;//����λ��
	char xingming[10];
	p= (NODE *)malloc (sizeof(NODE));  //�����½ڵ�
	if (p == NULL)   //����ʧ��,�򷵻�
	{
	  printf ("no enough memory!\n");
	 return (NULL);
	 } 
	//������
	printf("\n��������ѧ����ѧ��=");
	scanf("%s",p->xh);	
	printf("\n��������ѧ��������=");
	scanf("%s",p->xm);
	printf("\n��������ѧ�����Ա�=");
	fflush(stdin);
	scanf("%c",&p->xb);
    for(j=0;j<M;j++)
	{
		printf("\n�������ѧ���ĳɼ�%d=",j+1);
		scanf("%lf",&p->cj[j]); 
	}
	p->cj[M]=p->cj[0]+p->cj[1]+p->cj[2];
	p->cj[M+1]=p->cj[M]/M;
	//ָ����
	//����1���뵽�ڼ����ڵ�֮��
	/***
    printf("\n������������½ڵ���뵽�ڼ����ڵ��\ni=");
	scanf("%d",&i);
	j=0;
	while(q->next!=NULL)
	{
		q=q->next;
		j++;
		if(j>=i)
			break;
	}
	if(q->next!=NULL)
	{	//����
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//׷��
		q->next=p;
		p->next=NULL;
	}
	****/
	//����2���뵽�ĸ��ڵ�֮��
	printf("\n������½ڵ���뵽�ĸ��ڵ��\n����=");
	scanf("%s",xingming);
	while(q->next!=NULL)
	{
		q=q->next;
		if(strcmp(q->xm,xingming)==0)
			break;
	}
	if(q->next!=NULL)
	{	//����
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//׷��
		q->next=p;
		p->next=NULL;
	}
	
	return head;
}
/*
���ܣ���head�������޸�һ���ڵ���Ϣ
����������ͷ���
����ֵ������ͷ���
*/
NODE *update(NODE * head)
{
	NODE *q=head;
	int i,j,choice=0;
	printf("\n�����������޸ĵڼ���ѧ������Ϣ��\ni=");
	scanf("%d",&i);
	j=0;
	while(q->next!=NULL)
	{
		q=q->next;
		j++;
		if(j>=i)
			break;
	}
	if(q!=NULL)
	{	
	  printf("\n�ҵ���ѧ������\n   ѧ��     ����  �Ա�  ����  ��ѧ  ����  �ܷ�  ƽ����\n");
	  printf("%-11s%-10s%4c  ",q->xh,q->xm,q->xb);  //ѧ������ �Ա�
	  for(j=0;j<M+2;j++)
		  printf("%-6.1lf",q->cj[j]);  //���ŵ��Ƴɼ����ܷ֡�ƽ����
	  printf("\n");
	
		//�޸ĵ�i��ѧ����Ϣ
		printf("\n�����������޸Ĳ˵�������������");
		printf("\n�� 1��ѧ��  2������ 3���Ա� ��");
		printf("\n�� 4������  5����ѧ 6������ ��");
	    printf("\n������������������������������");
		printf("\n��������������Ҫ�޸ĵ���Ŀ��");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n��ѧ��=");
				scanf("%s",q->xh);
			 	 break;
		case 2:printf("\n������=");
				scanf("%s",q->xm);
		     break;
		case 3: printf("\n���Ա�=");
				fflush(stdin);
				scanf("%c",&q->xb);
				 break;
		case 4:	printf("\n�����ĳɼ�=");
			scanf("%lf",&q->cj[0]);  
		      break;
		case 5: printf("\n����ѧ�ɼ�=");
			scanf("%lf",&q->cj[1]);  
		      break;
		 case 6: printf("\n������ɼ�=");
			scanf("%lf",&q->cj[2]);  
		      break;
		}
		if(choice>=4&&choice<=6)		
		{
			q->cj[M]=q->cj[0]+q->cj[1]+q->cj[2];
			q->cj[M+1]=q->cj[M]/M;
		}
	}
	else	//û�и�ѧ��
		printf("\nû�и�ѧ��\n");	
	return head;
}


/*
���ܣ���head������ɾ��һ���ڵ�
����������ͷ���
����ֵ������ͷ���
*/
NODE *del(NODE * head)
{
	NODE *p,*q,*d;
	char name[12];
	fflush(stdin);
	printf("����ɾ���ĸ��ֵ�:");
	scanf("%s",name);
	p=head;
	while(strcmp(p->xm,name)!=0)            //ѭ�����ҵ�����ֵ�ʱ����ѭ��
	{
		if(p->next==NULL)
		{
			printf("û�������");
			return head;                     //�Ҳ������˳�ѭ��������ͷ�ڵ�
		}
		q=p;                                 //��¼��ͬѧǰһ���ڵ�
		p=p->next;                           //ѭ������
	}
	d=p;                                     //��ɾ��ָ���ƶ����ýڵ�
	p=p->next;                               //ѭ������
	free(d);                                 //�ͷŴ�ɾ���ڵ�ռ�
	q->next=p;                               //�����ѵ���������
	return head;                                
}