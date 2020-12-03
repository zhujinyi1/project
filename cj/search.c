/*
函数：查找子菜单
参数。。。
返回值：无
*/
void chazhao_zicaidan()
{
    int a;
    while(1)
    {
		printf("\n┏━━━━━━菜单━━━━━┓");
		printf("\n┃ 1、姓名查找              ┃");
		printf("\n┃ 2、性别查找              ┃");
		printf("\n┃ 3、学号查找              ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┗━━━━━━━━━━━━━┛");
		printf("\n━━请输入你的选择：");
		scanf("%d",&a);
		switch(a)
		{
			case 1:search_name(); 
				break;
			case 2:search_sex();
		        break;
			case 3: search_number();
		        break;
			
		}
		if(a!=1&&a!=2&&a!=3) 
			{
			printf("\n退出\n");
			break;
			}
		fflush(stdin);//吸收脏数据—回车
	}

}
//函数4:按姓名查找
/*
函数功能：按姓名查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_name()
{
	char x[12],i,j,k=0;
	printf("请输入要查找的对象:");
	getchar();
	gets(x);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xm)==0)
		{
				if(k==0)
				{
					printf("\n学号\t姓名\t性别\t语文\t数学\t外语\t总分\t平均分\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
		if(k==0)
	printf("\n没有找到该同学\n");
}

//函数5:按性别查找
/*
函数功能：按性别查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_sex()
{
	fflush(stdin);
	char x,i,j,k=0;
	printf("请输入要查找的对象的性别:");
	x=getchar();
	for(i=0;i<N;i++)
	{
		if(x==s[i].xb)
		{
				if(k==0)
				{
					printf("\n学号\t姓名\t性别\t语文\t数学\t外语\t总分\t平均分\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
	if(k==0)
	printf("\n没有找到该同学\n");
}

//函数6:按学号查找
/*
函数功能：按学号查找
参数：姓名，性别，学号，成绩
返回值：无
*/
void search_number()
{
	char x[12],i,j,k=0;
	printf("请输入要查找的对象的学号:");
						getchar();
	gets(x);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xuehao)==0)
		{
				if(k==0)
				{
					printf("\n学号\t姓名\t性别\t语文\t数学\t外语\t总分\t平均分\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
		if(k==0)
	printf("\n没有找到该同学\n");
}