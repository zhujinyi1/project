#include"zjy.h"

/*使用说明：
		1.房间设定：总共四个规格的房间（单人间，双人间，家庭间，豪华家庭间），每种规格的房间有五间
		2.价位：单人间每天150，双人间每天200，家庭间每天250，三人间每天300
		3.管理员密匙：administrator
		4.
*/

/*
功能：主函数，并进行说明和管理员认证
返回值：0
参数：无
*/
int main()
{
	char x[15]="administrator";
	char y[15];
	printf("welcome to this homestay!\n");
	printf("please enter to continue:");
	getchar();
	printf("\n");
	printf("使用说明：\n");
	printf("本系统共提供3种民宿供您选择\n");
	printf("1.温泉民宿 2.农家民宿 3.山水民宿\n");
	printf("每间民宿有5个房间，编号分别为1，2，3，4，5\n");
	printf("例如：温泉民宿第一个房间房间号为101，而农家为201");
	printf("每间民宿收费分别为200（温泉）,250（农家）,300（山水）一天\n");
	
	printf("Are you an administrator?\n");
	printf("If yes,please input your key.");
	fflush(stdin);
	gets(y);
	fflush(stdin);
	if(strcmp(x,y)==0)
	{
		printf("hello administrator!");
		menu_ad();
	}
/*	else
	{
		menu_cus();
	}*/
	return 0;
}