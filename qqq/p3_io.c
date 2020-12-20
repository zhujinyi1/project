#include"p1_stu.h"

/*
功能：创建学生链表
参数：无
返回值：链表头节点
*/
NODE *create( )  //创建链表
{
  NODE *head, *tail, *pnew;
  char xuehao[12];
  int i;
  head = (NODE *)malloc (sizeof(NODE));  //创建头节点
  if (head == NULL)   //创建失败,则返回
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //头节点的指针域置NULL
  tail = head;                    //开始时尾指针指向头节点
  printf ("\n请输入学生信息（学号、姓名、性别、语文、数学、外语）\n");
  while (1)  //创建学生成绩线性链表
  {
	fflush(stdin);
	printf("\n请输入学号（为#时结束输入）=");
	scanf ("%10s", xuehao);  //输入学号
	if (strcmp(xuehao,"#")==0)         //学号为#,循环退出
        break;
     //创建一新节点
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //创建新节点失败,则返回
    {
      printf ("no enough memory!\n");
      return (NULL);
    }
	//节点数据域
    strcpy(pnew->xh,xuehao);  //学号
	printf("\n请输入该生的姓名=");
	fflush(stdin);
	scanf ("%s", pnew->xm);  //输入姓名
    printf("\n请输入该生的性别=");
	fflush(stdin);
	scanf ("%c", &pnew->xb);  //输入性别
	for(i=0;i<M;i++)
	{
		fflush(stdin);
		printf("\n请输入该生的成绩%d=",i+1);  //三门单科成绩
		scanf("%lf",&pnew->cj[i]);
	}
    pnew->cj[M]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];//总分
	 pnew->cj[M+1]=pnew->cj[M]/M;			//平均分  
	//节点指针域
    pnew->next = NULL;  
    tail->next = pnew;     
    tail = pnew; 
  }
  return (head);
}
/*
功能：显示学生链表中全部节点信息
参数：头节点
返回值：无
*/
void display(NODE *head)  
{
  NODE *p;
  int i;
  printf("\n   学号     姓名  性别  语文  数学  外语  总分  平均分\n");
  for (p = head->next; p != NULL; p = p->next)
  {
	  printf("%-11s%-10s%4c  ",p->xh,p->xm,p->xb);  //学号姓名 性别
	  for(i=0;i<M+2;i++)
		  printf("%-6.1lf",p->cj[i]);  //三门单科成绩、总分、平均分
	  printf("\n");
  }
  printf ("\n");
}

