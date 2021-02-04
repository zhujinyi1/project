#include"information.h"
extern int a;
/*
函数功能：添加房间
参数：头节点
返回值：头节点
*/
NODE* f_add(NODE* head){
	NODE *p,*pnew;
	int x;

	p=head;           //让p指向head
	
	printf("是否创建一个新的房间(是：1，否：0)");
	scanf("%d",&x);
	while(p->next!=NULL)
		p=p->next;
	while(x!=0)
	{
		pnew = (NODE*)malloc(sizeof(NODE));
		pnew->type=0;
		while(pnew->type<=0||pnew->type>5){
			printf("该房间属于哪种类型");
			scanf("%d",&pnew->type);
			if(pnew->type<=0||pnew->type>5){
				printf("没有该种类型\n请重新输入\n");
			}
		}
		p->next=pnew;     //将p指向的节点的*next 指向的节点
		pnew->next=NULL;
		p=pnew;           //将p指向pnew
		a++;                //房间总数加1
		p->people=0;         //初始化 
		p->num=a;            
		
		printf("是否创建一个新的房间(是：1，否：0)");
		scanf("%d",&x);
	
	}
	return head;
}
