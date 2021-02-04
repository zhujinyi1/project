#include"information.h"

/*
函数功能:入住时间查找
参数：头节点
返回值：无
*/
void time_search(NODE* head)
{
	NODE* p;
	int x[3],i;
	printf("请输入入住时间(格式：年：月：日)");
	scanf("%d:%d:%d",&x[0],&x[1],&x[2]);
	while(p->next!=NULL){
		p=p->next;
		
		if(x[0]==p->in[0]&&x[1]==p->in[1]&&x[2]==p->in[2])
		{
			printf("房间类型	房间号	居住人数	姓名	性别	身份证号	联系方式	入住时间	");
			printf("%d	%d	%d	",p->type,p->num,p->people);
			if(p->people!=0)
			{
				printf("%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				for(i=1;i<p->people;i++)
					printf("			%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
		
			}
			printf("\n");
		}
	}
	pau();
}

/*
函数类型：按照房间类型查找
参数：头节点
返回值：无
*/
void room_search(NODE* head){
	NODE* p;
	int a,i;
	p=head;
	
	
	while(a<=0||a>5)
	{
		printf("类型只能是1-5\n");
		printf("请重新输入房间类型：");
		scanf("%d",&a);
	}
		
	while(p->next!=NULL){
		p=p->next;
		
		if(a==p->type)
		{
			printf("房间类型	房间号	居住人数	姓名	性别	身份证号	联系方式	入住时间	");
			printf("%d	%d	%d	",p->type,p->num,p->people);
			if(p->people!=0)
			{
				printf("%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				for(i=1;i<p->people;i++)
					printf("			%s	%c	%s	%s	%d:%d:%d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
		
			}
			printf("\n");
		}
	}
	pau();
}

/*
函数功能：查找空房
参数：头节点
返回值：无
*/
void empty(NODE *head)
{
	NODE* p;
	int t=0;
	p=head;
	printf("空房间为：\n");
	while(p->next!=NULL)
	{
		p=p->next;
		if(p->people==0)
		{
			t=1;
			printf("类型	房间号\n");
			printf("%d	%d	\n",p->type,p->num);
		}
	}
	
	if(t==0)
	{
		printf("抱歉，没有空房间");
	}
	pau();
}

/*
函数功能：姓名查找
参数：头节点
返回值：无
*/
void name_search(NODE* head)
{
	NODE* p=head;
	char a[12];
	int t=0,i;
	printf("请输入姓名:");
	scanf("%s",a);
	printf("姓名	身份证号	联系电话	房间号	房间类型	入住时间\n");
	while(p->next!=NULL)
	{
		p=p->next;
		for(i=0;i<p->people;i++)
		{
			if(strcmp(p->name[i],a)==0)
			{
				t=1;
				printf("%s	%s	%s	%d	%d	%d:%d:%d\n",p->name[i],p->id[i],p->tel[i],p->num,p->type,p->in[0],p->in[1],p->in[2]);
			}
		}
	}
	if(t==0)
	{
		printf("查无此人！\n");
	}
	pau();
}

/*
函数功能：房间号查找
参数：头节点
返回值：无
*/
void num_search(NODE* head)
{
	NODE* p=head;
	int t=0,i,j;
	printf("请输入房间号:");
	scanf("%d",&j);
	printf("房间号	房间类型	居住人数	姓名	身份证号	联系电话	入住时间\n");
	while(p->next!=NULL)
	{
		p=p->next;
		if(p->num==j)
		{
			t=1;
			printf("%d	%d	%d",p->num,p->type,p->people);
			for(i=0;i<p->people;i++)
			{		
				printf("	%s	%s	%s	%d:%02d:%02d\n",p->name[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
				printf("		");
			}
		}
	}
	if(t==0)
	{
		printf("没有此房间\n");
	}
	pau();
}

/*
函数功能：查找菜单
参数：头节点
返回值：无
*/
void f_search(NODE* head)
{	
	int i,t=0;
	NODE *p;
	p=head;
	while(1)
	{
		t=0;
		printf("|------查找菜单------|\n");
		printf("|1.姓名查找      |\n");
		printf("|2.房号查找	     |\n");      
		printf("|3.房间类型查找    |\n");
		printf("|4.入住时间查找	   |\n");
		printf("|其他，返回      |\n");
		printf("|--------------------|\n");
		printf("请输入你的选择：");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				clear();
				name_search(p);
				break;
			case 2:
				clear();
				num_search(p);
				break;
			case 3:
				clear();
				room_search(p);
				break;
			case 4:
				time_search(p);
				clear();
				break;
			default:
				t=1;
				clear();
				break;
		}
		if(t==1){
			break;
		}
	}
}
