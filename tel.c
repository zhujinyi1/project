#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void charu(void);
void xianshi(void);
void chaxun(void);
void xiugai(void);
void shanchu(void);

struct info
{
	int number;
	char name[10];
	char phonenumber[12];
	char email[20];
	char addr[20];
	int mailcode;
}
;
typedef struct info TXL;
TXL addresslist[1000]={0,0,0,0,0,0},tmp;
int j=0;

int main(void) 
{
	int i,a,c,d,e=-1,h,q,z;
	char f[10],g[12],x[20],y[20],b1[20],b2[20];
	while(1)
	{
		printf("---------------通讯录---------------\n");
		printf("          1:插入新联系人\n          2:查询联系人\n          3:修改联系人\n          4:删除联系人\n          5:显示所有联系人\n          6:退出\n");
		printf("------------------------------------\n");
		printf("请输入1-6位数:\n");
		scanf("%d",&a);
		if(a>=1&&a<=6)
		{
			if(a!=1)
			{
				if(j==0)
				{
				    if(a==6)
				    exit(-1);
				    else
				    {
					    printf("通讯录为空\n");
						a=0;	
					}
				}
			}
	    }
	    else
	    printf("输入的数据错误\n");
		switch (a)
		{
			case 1:
                charu();
				break; 	    
			case 2:
                chaxun(); 
				break;
			case 3:
                 xiugai();
				break;
			case 4:
                shanchu();
			    break;
			case 5:
                xianshi();
				break;
			case 6:
				exit(-1);
			default:
				break;
		}
    }
	return 0;
}



void charu(void)//插入联系人
{
	int i;
	printf("------------插入联系人-------------\n");
	if(j>=1000)
    printf("内存不够\n");
    else if(j==0)
    {
	    printf("输入联系人信息序号:\n");
	    scanf("%d",&addresslist[j].number);
		printf("输入联系人信息姓名:\n");
        scanf("%s",addresslist[j].name);
		printf("输入联系人信息电话号码:\n");
		scanf("%s",addresslist[j].phonenumber);
		printf("输入联系人信息电子邮件:\n");
		scanf("%s",addresslist[j].email);
		printf("输入联系人信息地址:\n");
		scanf("%s",addresslist[j].addr);
		printf("输入联系人信息邮编:\n");
		scanf("%s",&addresslist[j].mailcode);
		j++;
	}
    else
    {
	    printf("插入除这些序号之外的序号:\n");
	    for(i=0;i<j;i++)
	    printf("%d ",addresslist[i].number);
	    printf("\n");
	    printf("输入联系人信息序号:\n");
	    scanf("%d",&addresslist[j].number);
		printf("输入联系人信息姓名:\n");
        scanf("%s",addresslist[j].name);
		printf("输入联系人信息电话号码:\n");
		scanf("%s",addresslist[j].phonenumber);
		printf("输入联系人信息电子邮件:\n");
		scanf("%s",addresslist[j].email);
		printf("输入联系人信息地址:\n");
		scanf("%s",addresslist[j].addr);
		printf("输入联系人信息邮编:\n");
		scanf("%s",&addresslist[j].mailcode);
		j++;
	}
}


void xianshi(void)//显示联系人
{
	int i,k,m,n,x;
	printf("-----------显示联系人---------------\n");
	printf("1:按序号查询.\n2:按姓名查询.\n请选择:\n");
	scanf("%d",&k);
	if(k==2)
	{
		if(j==1)
		{
			printf("序号%d\n",addresslist[0].number);
		    printf("名字%s\n",addresslist[0].name);
			printf("电话%s\n",addresslist[0].phonenumber);
			printf("邮件%s\n",addresslist[0].email);
			printf("地址%s\n",addresslist[0].addr);
			printf("邮编%d\n",addresslist[0].mailcode);
		} 
	    else if(j==2)
		{
		    x=strcmp(addresslist[0].name,addresslist[1].name);
		    if(x<0)
			{
		 	   for(i=0;i<2;i++)
			   {
					printf("序号%d\n",addresslist[i].number);
		            printf("名字%s\n",addresslist[i].name);
			        printf("电话%s\n",addresslist[i].phonenumber);
			        printf("邮件%s\n",addresslist[i].email);
			        printf("地址%s\n",addresslist[i].addr);
			        printf("邮编%d\n",addresslist[i].mailcode);
			   }
			}
		    else
			{
			    for(i=1;i>=0;i--)
		 		{
					printf("序号%d\n",addresslist[i].number);
		            printf("名字%s\n",addresslist[i].name);
			        printf("电话%s\n",addresslist[i].phonenumber);
			        printf("邮件%s\n",addresslist[i].email);
			        printf("地址%s\n",addresslist[i].addr);
			        printf("邮编%d\n",addresslist[i].mailcode);
				}
			 }
		 }
		 else
		 {
			for(i=0;i<j-1;i++)
			for(m=0;m<j-i-1;m++)
			{
				n=strcmp(addresslist[m].name,addresslist[m+1].name);
				if(n>0)
				{
					tmp=addresslist[m];
					addresslist[m]=addresslist[m+1];
					addresslist[m+1]=tmp;
				}
			}
			for(i=0;i<j;i++)
			{
					printf("序号%d\n",addresslist[i].number);
		            printf("名字%s\n",addresslist[i].name);
			        printf("电话%s\n",addresslist[i].phonenumber);
			        printf("邮件%s\n",addresslist[i].email);
			        printf("地址%s\n",addresslist[i].addr);
			        printf("邮编%d\n",addresslist[i].mailcode);
			}
		 }
	}
	else if(k==1)
	{
		if(j==1)
		{
					printf("%d\n",addresslist[i].number);
		            printf("%s\n",addresslist[i].name);
			        printf("%s\n",addresslist[i].phonenumber);
			        printf("%s\n",addresslist[i].email);
			        printf("%s\n",addresslist[i].addr);
			        printf("%d\n",addresslist[i].mailcode);
		}
        else if(j==2)
		{
		 	x=strcmp(addresslist[0].name,addresslist[1].name);
		 	if(x<0)
		 	{
		 		for(i=0;i<2;i++)
		 		{
					printf("%d\n",addresslist[i].number);
		            printf("%s\n",addresslist[i].name);
			        printf("%s\n",addresslist[i].phonenumber);
			        printf("%s\n",addresslist[i].email);
			        printf("%s\n",addresslist[i].addr);
			        printf("%d\n",addresslist[i].mailcode);
				}
			 }
			 else
			 {
			 	for(i=1;i>=0;i--)
		 		{
					printf("%d\n",addresslist[i].number);
		            printf("%s\n",addresslist[i].name);
			        printf("%s\n",addresslist[i].phonenumber);
			        printf("%s\n",addresslist[i].email);
			        printf("%s\n",addresslist[i].addr);
			        printf("%d\n",addresslist[i].mailcode);
				}
			 }
		 }
		 else
		 {
		    for(i=0;i<j-1;i++)
			for(m=0;m<j-i-1;m++)
			if(addresslist[m].number>addresslist[m+1].number)
			{
				tmp=addresslist[m];
				addresslist[m]=addresslist[m+1];
				addresslist[m+1]=tmp;
			}
			for(i=0;i<j;i++)
			{
					printf("%d\n",addresslist[i].number);
		            printf("%s\n",addresslist[i].name);
			        printf("%s\n",addresslist[i].phonenumber);
			        printf("%s\n",addresslist[i].email);
			        printf("%s\n",addresslist[i].addr);
			        printf("%d\n",addresslist[i].mailcode);
			}
		 }
	}
	else
	printf("输入的数据错误!\n");
}
void chaxun(void)
{
	int e=-1,c,i,d,q;
	char b[12];
	printf("---------查询联系人--------------\n");
	printf("1:按号码查询\n2:按姓名查询\n请选择:\n");
	scanf("%d",&q);
    getchar();
	if(q==1)
	{
		printf("输入联系人的电话号码:");
		gets(b);
		for(i=0;i<j;i++)
		{
			d=strcmp(b,addresslist[i].phonenumber);
			if(d==0)
			{
				e=i;
			    break;	
			}
		}
		if(e==-1)
		printf("此电话号码不存在\n");
		else
		{
			printf("%d\n",addresslist[e].number);
		    printf("%s\n",addresslist[e].name);
			printf("%s\n",addresslist[e].phonenumber);
			printf("%s\n",addresslist[e].email);
			printf("%s\n",addresslist[e].addr);
			printf("%d\n",addresslist[e].mailcode);
		}
	 } 
	else if(q==2)
	{
		printf("输入联系人名字:");
			gets(b);
		for(i=0;i<=j;i++)
		{
			c=strcmp(b,addresslist[i].name);
			if(c==0)
			{
			    e=i;
			    break;
			} 
		}
		if(e==-1)
		{
			printf("此名字不存在\n");
		}
		else
		{
			printf("%d\n",addresslist[e].number);
		    printf("%s\n",addresslist[e].name);
			printf("%s\n",addresslist[e].phonenumber);
			printf("%s\n",addresslist[e].email);
			printf("%s\n",addresslist[e].addr);
			printf("%d\n",addresslist[e].mailcode);
		}
	}
	else
		printf("输入数据错误!");
}
void xiugai(void)
{
	int i,e=-1,c,a1,a2,a3,a4,b3;
	char f[10],g[12],b1[20],b2[20];
	printf("------------修改联系人--------------\n");
	printf("输入联系人名字:");
	getchar();
	gets(f);
	for(i=0;i<j;i++)
	{
		c=strcmp(f,addresslist[i].name);
		if(c==0)
		{
			e=i;                 
			break;
		}
	}
	if(e!=-1)
	{
		printf("是否修改电话号码:(1:是 2:否)\n");
		 scanf("%d",&a1);
		 getchar();
		 if(a1!=1&&a1!=2)
		 {
			 printf("输入数据错误!\n");
		 }
		 else
		 {
             if(a1==1)
			 {
			printf("输入联系人电话号码:\n");
            gets(g);
			strcpy(addresslist[e].phonenumber,g);
			 }
			  	printf("是否修改联系人电子邮件:(1:是 2:否)\n");
				scanf("%d",&a2);
				getchar();
				if(a2!=1&&a2!=2)
				 {
					 printf("输入数据错误!\n");
				 }
				else
				{
           			if(a2==1)
					 {
						printf("输入联系人电子邮件:\n");
						gets(b1);
						strcpy(addresslist[e].email,b1);
					 }
					 printf("是否修改联系人地址:(1:是 2:否)\n");
					 scanf("%d",&a3);
					 getchar();
					if(a3!=1&&a3!=2)
					 {
						 printf("输入数据错误!\n");
					 }
					else
					{
   					 if(a3==1)
					 {
						printf("输入联系人地址:\n");
						gets(b2);
						strcpy(addresslist[e].addr,b2);
					 }
			 			printf("是否修改联系人邮编:(1:是 2:否)\n");
						scanf("%d",&a4);
						if(a4!=1&&a4!=2)
						 {
							 printf("输入数据错误!\n");
						 }
						else
						{
						 if(a4==1)
						 {
							printf("输入联系人邮编:\n");
							scanf("%d",&b3);
							addresslist[e].mailcode=b3;
						 }
						}
					}
				}
		 }
	}
    else
    {
    	printf("此名字不存在\n");
	}
}
void shanchu(void)//删除
{
	int i,h,e=-1;
	printf("--------删除联系人------------\n");
	printf("输入删除的序号:");
	scanf("%d",&h);
	for(i=0;i<j;i++)
	{
		if(addresslist[i].number==h)
		{
			e=i;
			break;
		} 
	} 
	if(e!=-1)
	{
		if(j==1)
		{
			j=0;
		}
		else
		{
			for(i=e;i<j;i++)
			{
				addresslist[i]=addresslist[i+1];
			}
			j--;	
		}
	}
    else
    {
    	printf("此序号不存在\n"); 
	}	
}
