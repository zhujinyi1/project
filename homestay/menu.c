#include"zjy.h"

/*
功能：管理员界面
参数：无
返回值：无
*/
void menu_ad()
{
	int a;
	printf("\n┏━━━━━━菜单━━━━━┓");
	printf("\n┃ 1、创建链表              ┃");
	printf("\n┃ 2、增加一个节点          ┃");
	printf("\n┃ 3、修改节点信息          ┃");
	printf("\n┃ 4、删除一个节点          ┃");
	printf("\n┃ 5、输出全部节点          ┃");
	printf("\n┃ 6、从文件中读出全部节点  ┃");
	printf("\n┃ 7、链表保存到文件中      ┃");
	printf("\n┃ 8、追加一个节点          ┃");
	printf("\n┃ 其他、退出               ┃");
	printf("\n┗━━━━━━━━━━━━━┛");
	printf("\n━━请输入你的选择：");
	scanf("%d",&a);
	while(1)
	{
		switch(a)
		{
			case 1:
				printf("%d",a);
				break;
			case 2:
				printf("%d",a);
				break;
			case 3:
				printf("%d",a);
				break;
			case 4:
				printf("%d",a);
				break;
			case 5:
				printf("%d",a);
				break;
			case 6:
				printf("%d",a);
				break;
			case 7:
				printf("%d",a);
				break;
			case 8:
				printf("%d",a);
				break;
			default:
				printf("exit\n");
				a=0;
				break;
		}
		if(a==0)
			break;
		scanf("%d",&a);
	}

}