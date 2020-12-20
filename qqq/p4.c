#include"p1_stu.h"

/*
功能：在head链表中追加一个新节点
参数：链表头结点
返回值：链表头结点
*/
NODE *append(NODE * head)
{
	NODE *p,*pnew;
	p=head;
	pnew=NULL;                          //初始化指针
	pnew=(NODE*)malloc(sizeof(NODE));             
	if(pnew==NULL)
	{
		printf("no enough memory");
		return head;                        
	}                                   //开辟空间
	while(p->next!=NULL)
	{
		p=p->next;
	}                                   //将指针移动到最后准备添加
	p->next=pnew;
	pnew->next=NULL;
	fflush(stdin);
	printf("姓名:");
	scanf("%s",&pnew->xm);
	fflush(stdin);
	printf("学号:");
	scanf("%s",&pnew->xh);
	fflush(stdin);
	printf("性别:");
	scanf("%s",&pnew->xb);
	fflush(stdin);
	printf("语文:");
	scanf("%lf",&pnew->cj[0]);
	fflush(stdin);
	printf("数学:");
	scanf("%lf",&pnew->cj[1]);
	fflush(stdin);
	printf("英语:");
	scanf("%lf",&pnew->cj[2]);               //读入成绩
	pnew->cj[3]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];
	pnew->cj[4]=pnew->cj[3]/3;              //总分，平均分
	display(head);                           //调入输出函数
}

/*
功能：在head链表中插入一个新节点
参数：链表头结点
返回值：链表头结点
*/
NODE *Insert(NODE * head)
{
	NODE *p=NULL;
	NODE *q=head;
	int j;
	int i;//插入位置
	char xingming[10];
	p= (NODE *)malloc (sizeof(NODE));  //创建新节点
	if (p == NULL)   //创建失败,则返回
	{
	  printf ("no enough memory!\n");
	 return (NULL);
	 } 
	//数据域
	printf("\n请输入新学生的学号=");
	scanf("%s",p->xh);	
	printf("\n请输入新学生的姓名=");
	scanf("%s",p->xm);
	printf("\n请输入新学生的性别=");
	fflush(stdin);
	scanf("%c",&p->xb);
    for(j=0;j<M;j++)
	{
		printf("\n请输入该学生的成绩%d=",j+1);
		scanf("%lf",&p->cj[j]); 
	}
	p->cj[M]=p->cj[0]+p->cj[1]+p->cj[2];
	p->cj[M+1]=p->cj[M]/M;
	//指针域
	//方案1插入到第几个节点之后
	/***
    printf("\n请输入你想把新节点插入到第几个节点后：\ni=");
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
	{	//插入
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//追加
		q->next=p;
		p->next=NULL;
	}
	****/
	//方案2插入到哪个节点之后
	printf("\n你想把新节点插入到哪个节点后：\n姓名=");
	scanf("%s",xingming);
	while(q->next!=NULL)
	{
		q=q->next;
		if(strcmp(q->xm,xingming)==0)
			break;
	}
	if(q->next!=NULL)
	{	//插入
		 p->next = q->next ;  
		 q->next = p;        
	}
	else
	{	//追加
		q->next=p;
		p->next=NULL;
	}
	
	return head;
}
/*
功能：在head链表中修改一个节点信息
参数：链表头结点
返回值：链表头结点
*/
NODE *update(NODE * head)
{
	NODE *q=head;
	int i,j,choice=0;
	printf("\n请输入你想修改第几个学生的信息：\ni=");
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
	  printf("\n找到该学生！！\n   学号     姓名  性别  语文  数学  外语  总分  平均分\n");
	  printf("%-11s%-10s%4c  ",q->xh,q->xm,q->xb);  //学号姓名 性别
	  for(j=0;j<M+2;j++)
		  printf("%-6.1lf",q->cj[j]);  //三门单科成绩、总分、平均分
	  printf("\n");
	
		//修改第i个学生信息
		printf("\n┏━━━━修改菜单━━━━━┓");
		printf("\n┃ 1、学号  2、姓名 3、性别 ┃");
		printf("\n┃ 4、语文  5、数学 6、外语 ┃");
	    printf("\n┗━━━━━━━━━━━━━┛");
		printf("\n━━请输入你需要修改的项目：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n新学号=");
				scanf("%s",q->xh);
			 	 break;
		case 2:printf("\n新姓名=");
				scanf("%s",q->xm);
		     break;
		case 3: printf("\n新性别=");
				fflush(stdin);
				scanf("%c",&q->xb);
				 break;
		case 4:	printf("\n新语文成绩=");
			scanf("%lf",&q->cj[0]);  
		      break;
		case 5: printf("\n新数学成绩=");
			scanf("%lf",&q->cj[1]);  
		      break;
		 case 6: printf("\n新外语成绩=");
			scanf("%lf",&q->cj[2]);  
		      break;
		}
		if(choice>=4&&choice<=6)		
		{
			q->cj[M]=q->cj[0]+q->cj[1]+q->cj[2];
			q->cj[M+1]=q->cj[M]/M;
		}
	}
	else	//没有该学生
		printf("\n没有该学生\n");	
	return head;
}


/*
功能：在head链表中删除一个节点
参数：链表头结点
返回值：链表头结点
*/
NODE *del(NODE * head)
{
	NODE *p,*q,*d;
	char name[12];
	fflush(stdin);
	printf("你想删掉哪个兄弟:");
	scanf("%s",name);
	p=head;
	while(strcmp(p->xm,name)!=0)            //循环，找到这个兄弟时结束循环
	{
		if(p->next==NULL)
		{
			printf("没有这个人");
			return head;                     //找不到就退出循环并返回头节点
		}
		q=p;                                 //记录该同学前一个节点
		p=p->next;                           //循环后移
	}
	d=p;                                     //将删除指针移动到该节点
	p=p->next;                               //循环后移
	free(d);                                 //释放待删除节点空间
	q->next=p;                               //将断裂的链表连接
	return head;                                
}