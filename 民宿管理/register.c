#include"information.h"

/*
函数功能：注册用户/管理员
参数：头节点
返回值：头节点
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
		printf("请问您要以什么身份注册这个系统？\n");
		printf("1.管理员，2.用户");
		scanf("%d",&a);
		if(a!=1&&a!=2)
			printf("输入有误，请重新输入");
	}
	fflush(stdin);
	p = head;
	printf("请输入用户名：");
	scanf("%s",name1);
	do{	
		p=p->next;
		if(p==NULL)
			break;
		while(strcmp(name1,p->name)==0){
			printf("用户名重复，请重新输入");
			fflush(stdin);
			printf("请输入用户名：");
			scanf("%s",name1);
			fflush(stdin);
		}
	}while(p->next!=NULL);
	fflush(stdin);
	
	printf("请输入密码：");
	scanf("%s",key1);
	fflush(stdin);
	while(strlen(key1)<6){
		
		printf("密码太短，请重新输入！最短为6位，最长12位");
		scanf("%s",key1);
		fflush(stdin);

	}

	strcpy(p->name,name1);
	strcpy(p->key,key1);
	p->rank = a;

	printf("注册成功！！！");

	write_user(head);
	return head;
}

/*
函数功能：登录
参数：用户头节点
返回值：访问权限等级（用户/管理员）
*/
int sign_in(Users *head){
	Users *p;
	char name1[12],key1[12];
	int flag=-1;
	printf("请输入用户名：");
	fflush(stdin);
	scanf("%s",name1);
	fflush(stdin);
	p=head->next;
	while(p!=NULL){
		
		if(strcmp(name1,p->name)==0){
			flag=0;
			printf("请输入密码:");
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
		printf("密码有误！\n");
	}
	else if(flag==-1){
		printf("用户名不存在！\n");
	}
	return flag;
}

/*
函数功能：开始菜单
参数：无
返回值：无
*/
void begin(){
	int i=0 ,f,t=0;
	Users *head=NULL;
	f=0;
	while(1)
	{
		printf("|------初始菜单------|\n");
		printf("|1.登录  	     |\n");
		printf("|2.注册   	         |\n");   
		printf("|其他、退出	     |\n");
		printf("|--------------------|\n");
		printf("请输入您的选择:");
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
			printf("欢迎下次光临！\n");
			break;
		}
		
	}
}