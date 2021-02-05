#include"information.h"

/*
函数功能：遍历账本
参数：头节点
返回值：无
*/
void display(NODE* head)
{
	int t=0;
	int i;
	NODE* p;
	p=head;
	printf("房间入住情况：\n");
	printf("类型	房间号	入住人姓名	性别	身份证号	联系电话	入住时间	搬出时间\n");
	while(p->next!=NULL)
	{
		t=0;
		p=p->next;
			printf("%d	%d	",p->type,p->num);
			for(i=0;i<p->people;i++){
				t=1;
				printf("%12s	%c	%18s	%11s	%d:%d:%d	%d:%02d:%02d\n",p->name[i],p->sex[i],p->id[i],p->tel[i],p->in[0],p->in[1],p->in[2]);
			}
			if(t==0){
				printf("\n");
			}
	}
	pau();
}
