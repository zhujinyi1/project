#include"information.h"

/*
函数名：f_menu
功能：主菜单
参数：无
返回值：无
*/
void f_menu(int f){

	
	NODE *head;
	int i,t=0;
	head = read();
	if(f==1){
		while(1)
		{
			printf("|-----管理员菜单-----|\n");
			printf("|1.初始化	     |\n");
			printf("|2.查询空房	     |\n");   
			printf("|3.预定房间	     |\n");
			printf("|4.退房		     |\n");
			printf("|5.查找用户/房间信息 |\n");  
			printf("|6.显示账本	     |\n");
			printf("|7.增加房间	     |\n");
			printf("|其他.退出	     |\n");
			printf("|--------------------|\n");
			printf("请输入您的选择:");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
					clear();
					printf("正在初始化...\n");
					head = primitive();
					break;
				case 2:
					clear();
					printf("正在查找");
					empty(head);
					break;
				case 3:
					f_book(head);
					clear();
					break;
				case 4:
					rebook(head);
					clear();
					break;
				case 5:
					f_search(head);
					clear();
					break;
				case 6:
					clear();
					display(head);
					break;
				case 7:
					head = f_add(head);
					clear();
					break;
				default:
					t=1;
					break;
				}
				if(t==1){
					break;
			}
		}
	}
	else if(f==2){
		while(1)
		{
			printf("|------用户菜单------|\n");
			printf("|1.初始化	     |\n");
			printf("|2.查询空房	     |\n");   
			printf("|3.预定房间	     |\n");
			printf("|4.退房		     |\n");
			printf("|其他.登出	     |\n");
			printf("|--------------------|\n");
			printf("请输入您的选择:");
			scanf("%d",&i);
			switch(i)
			{
				case 1:
					clear();
					printf("正在初始化...\n");
					head = primitive();
					break;
				case 2:
					clear();
					printf("正在查找");
					empty(head);
					break;
				case 3:
					f_book(head);
					clear();
					break;
				case 4:
					rebook(head);
					clear();
					break;
				default:
					t=1;
					break;
			}
			if(t==1){
				break;
			}
		}
	}
	write(head);
}