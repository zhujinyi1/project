#include"information.h"

/*
函数功能：写入文件
参数：头节点
返回值：无
*/
void write(NODE* head)
{
	FILE *fp = fopen("民宿.dat","wb");
	NODE *p;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		fwrite (p, sizeof(NODE), 1, fp);
	}
	printf("房间信息写入文件成功！\n");
	pau();
	fclose(fp);

}

/*
函数功能：读取文件
参数：无
返回值：头节点
*/

NODE  *read()
{//以读出的方式打开文件wang
   
    FILE *fp = fopen ("民宿.dat", "rb");
    NODE *head, *tail, *pnew;
     if (fp == NULL)   //打开文件失败
    {  
       printf ("民宿文件不存在,请先进行初始化再使用\n");
	   pau();
       return NULL;
    }
    //民宿文件存在，读出其中的结点信息
	 head = (NODE *)malloc (sizeof(NODE));  //创建头节点
	if (head == NULL)   //创建失败,则返回
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //头节点的指针域置NULL
	tail = head;   
	while(!feof(fp))
	{
		pnew = (NODE *)malloc (sizeof(NODE));  
		if (pnew == NULL)    //创建新节点失败,则返回
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(NODE), 1, fp)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	printf("房间信息读取成功！\n");
	pau();
	return  head;
	 fclose (fp);   //关闭文件
}

/*
函数功能：用户信息写入文件
参数：用户结构体头节点
返回值：无
*/
void write_user(Users* head)
{
	FILE *fp = fopen("用户.dat","wb");
	Users *p;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		fwrite (p, sizeof(Users), 1, fp);
	}
	printf("用户信息写入文件成功！\n");
	pau();
	fclose(fp);

}

/*
函数功能：用户信息从文件中读取
参数：无
返回值：用户结构体头节点
*/
Users  *read_user()
{//以读出的方式打开文件wang
   
    FILE *fp = fopen ("用户.dat", "rb");
    Users *head, *tail, *pnew;
     if (fp == NULL)   //打开文件失败
    {  
       printf ("用户文件不存在,请先进行初始化再使用\n");
	   pau();
       return NULL;
    }
    //用户文件存在，读出其中的结点信息
	 head = (Users *)malloc (sizeof(Users));  //创建头节点
	if (head == NULL)   //创建失败,则返回
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //头节点的指针域置NULL
	tail = head;   
	while(!feof(fp))
	{
		pnew = (Users *)malloc (sizeof(Users));  
		if (pnew == NULL)    //创建新节点失败,则返回
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(Users), 1, fp)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	printf("用户信息读取成功！\n");
	pau();
	return  head;
	 fclose (fp);   //关闭文件
}