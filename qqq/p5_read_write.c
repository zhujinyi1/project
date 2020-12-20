#include"p1_stu.h"


/*
功能：从硬盘（文件）的链表读到内存中
参数：无
返回值：头结点
*/
NODE  *read_from_file()
{//以读出的方式打开文件wang
   
    FILE *fp1 = fopen ("学生.dat", "rb");    NODE *head, *tail, *pnew;
     if (fp1 == NULL)   //打开文件失败
    {  
       printf ("学生成绩文件不存在\n");
       exit (0);
    }
    //学生成绩文件存在，读出其中的结点信息
	 head = (NODE *)malloc (sizeof(NODE));  //创建头节点
	if (head == NULL)   //创建失败,则返回
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //头节点的指针域置NULL
	tail = head;   
	while(!feof(fp1))
	{
		pnew = (NODE *)malloc (sizeof(NODE));  
		if (pnew == NULL)    //创建新节点失败,则返回
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(NODE), 1, fp1)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	return  head;
	 fclose (fp1);   //关闭文件
}
	
 /*
功能：把内存中的链表写入硬盘（文件）
参数：头结点
返回值：无
*/
void write_to_file(NODE* head)
{
	//以写入的方式打开文件学生.dat
    FILE *fp1 = fopen ("学生.dat", "wb");   
    NODE *p=head->next;
    char xuehao[12];
    int i;
  	while(p!=NULL)
	{
		fwrite (p, sizeof(NODE), 1, fp1);   
		p=p->next; 
	}
	 fclose (fp1);   //关闭文件
}

   