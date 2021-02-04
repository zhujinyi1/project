#include"information.h"
extern int a;
/*
函数功能：预定房间并且完成信息登记
参数：头节点
返回值：无
*/

void f_book(NODE* head){
	NODE* p=head;
	int i,t=0,j;
	char m[12]={'\0'},b[11]={'\0'},c[18]={'\0'};
	while(1)
	{
		printf("请输入要预定的房间号：(1-%d,输入负数退出)",a);
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
			printf("该房间不存在\n");
			printf("请重新输入：\n");
		}
		else if(p->people!=0){
			printf("该房间已经有人\n");
			printf("请重新输入\n");
		}
		else{
			break;
		}
	}
	while(1)
	{
		fflush(stdin);
		printf("请输入居住人数：");
		scanf("%d",&p->people);
		if(p->people>3||p->people<=0)
		{
			printf("错误，请重新输入\n");
		}
		else
			break;
	}

	for(j=0;j<p->people;j++){
		while(strlen(m)==0)
		{
			fflush(stdin);
			printf("请输入第%d个人的姓名：",j+1);
			scanf("%s",&m);
			if(strlen(m)==0)
				printf("姓名不能为空");
		}
		strcpy(p->name[j],m);
		while(p->sex[j]!='m'&&p->sex[j]!='f')
		{
			fflush(stdin);
			printf("请输入第%d个人的性别：",j+1);
			scanf("%c",&p->sex[j]);
			if(p->sex[j]!='m'&&p->sex[j]!='f')
				printf("性别必须是m/f");
		}
		while(strlen(c)!=18)
		{
			fflush(stdin);
			printf("请输入第%d个人的身份证号：",j+1);
			scanf("%s",&c);
			if(strlen(c)!=18)
				printf("身份证号必须是18位");
		}
		strcpy(p->id[j],c);
		while(strlen(b)!=11)
		{
			fflush(stdin);
			printf("请输入第%d个人的联系电话：",j+1);
			scanf("%s",&b);
			fflush(stdin);
			if(strlen(b)!=11)
				printf("电话号必须是十一位");
		}
		strcpy(p->tel[j],b);
	}
	printf("请输入入住时间：（格式 ：年:月:日）");
	scanf("%d:%d:%d",&p->in[0],&p->in[1],&p->in[2]);

	printf("预定成功！");
	pau();
}

/*
函数功能：退房
参数：头节点
返回值：无
*/
void rebook(NODE* head){
	NODE* p=head;
	char m[12]={'\0'},b[11]={'\0'},c[18]={'\0'};
	int i,j,t=0,time,cost;
	printf("您要退哪间房：");
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
		printf("没这间房");
		pau();
		return;
	}
	printf("居住时间：");
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
	printf("退房成功！\n");
	printf("您本次共需缴纳%d元\n",cost);
	pau();

}