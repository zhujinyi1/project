#include"information.h"
extern int a;
/*
函数功能：初始化房间数并初始化数值
参数：无
返回值：链表头节点
*/
NODE* primitive()
{
	int i;
	NODE *head,*p,*pnew;
	

	head=(NODE*)malloc(sizeof(NODE));        //动态内存分配
	if(head==NULL){                          //判断内存是否开辟成功
		printf("初始化失败，内存空间不足！");
		exit(0);
	}
	p=head;
	head->next=NULL;
	
	for(i=0;i<15;i++){
	
		pnew=(NODE*)malloc(sizeof(NODE));    
		if(pnew==NULL){                      //判断内存是否开辟成功
			printf("初始化失败，内存空间不足！");
			exit(0);
		}
		
		pnew->num=i+1;
		pnew->people=0;          //给用户数归零（因为这个才初始化）
		pnew->type=i/3+1;   //给每个房间编号，每个数字代表一个类型

		pnew->next=NULL;	//最后节点的指针next指向空		
		p->next=pnew;     //指针后移
		p=pnew;

	}
	
	printf("初始化成功！\n");
	a=15;
	pau();
	return (head);
}