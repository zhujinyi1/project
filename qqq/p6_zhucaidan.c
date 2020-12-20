#include"p1_stu.h"
/*
功能：主菜单函数
参数：无
返回值：无
*/
void zhucaidan()
{
	NODE  * head=NULL;//头结点
	int choice=0;
	while(1)
    {
		printf("\n┏━━━━━━菜单━━━━━┓");
		printf("\n┃ 1、创建链表              ┃");
		printf("\n┃ 2、增加一个节点          ┃");
		printf("\n┃ 3、修改节点信息          ┃");
		printf("\n┃ 4、删除一个节点          ┃");
		printf("\n┃ 5、输出全部节点          ┃");
		printf("\n┃ 6、从文件中读出全部节点  ┃");
		printf("\n┃ 7、链表保存到文件中      ┃");
		printf("\n┃ 8、追加一个节点          ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┗━━━━━━━━━━━━━┛");
		printf("\n━━请输入你的选择：");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n输入学生信息\n");
			 head=create( ); 
			 break;
		case 2:head=Insert(head) ;//增加一个节点
		     break;
		case 3: head=update(head);//修改节点信息
		      break;
		case 4: head=del(head);//删除一个节点
		      break;
		case 5: display(head);//输出全部节点
		      break;
		case 6: head=read_from_file();//从文件中读出全部节点
		      break;
		case 7: write_to_file(head);//链表保存到文件中
		      break;
		case 8:append(head);//追加一个节点
				break;
		default: printf("\n退出\n");exit(0);
		}
		getchar();//吸收脏数据—回车
	}
	return 0;
}