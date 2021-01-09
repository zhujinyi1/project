#include "z.h"
int main()
{
	int a;	
	NODE* head=NULL;
	while(1)
	{
	printf("1、创建\n");
	printf("2、添加\n");
	printf("3、修改\n");
	printf("4、删除\n");
	printf("5、打印\n");
	printf("0、退出\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		head=f_create();
		break;
	case 2:
		head=f_add(head);
		break;
	case 3:
	///	head=f_correct(head);
		break;
	case 4:
		head=f_delete(head);
		break;
	case 5:
		f_print(head);
		break;
	case 0:
		printf("退出");
		return 0;
	}
	}
	return 0;
}
