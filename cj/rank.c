
/*
函数功能：按照总分降序排序子函数
参数：无
返回值：无
*/
void paixu_zongfen()
{
//1、按照总分降序输出 	
	int i,j;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(s[i].cj[3]<=s[j].cj[3])
			{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			}
		}
	}
	printf("\n按照总分降序——完成了\n");
}

/*
函数功能：按照姓名降序排序子函数
参数：无
返回值：无
*/
void paixu_xingming()
{
//2、按照姓名降序输出    
	int i,j;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strcmp(s[i].xm,s[j].xm)==-1)
			{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			}
		}
	}
	printf("\n按照姓名降序——完成了\n");
}


/*
函数功能：按照性别降序排序子函数
参数：无
返回值：无
*/
void paixu_xingbie()
{
// 3、按照性别降序输出   
	int i,j;
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(s[i].xb<=s[j].xb)
			{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			}
		}
	}
	printf("\n按照性别降序——完成了\n");
}


/*
函数功能：排序子菜单
参数：无
返回值：无
*/
void  paixu_zicaidan()
{		
	    int c=0;
		while(1)
		{
			printf("\n┏━━━排序子菜单━━━━━┓");
			printf("\n┃ 1、按照总分降序排列      ┃");
			printf("\n┃ 2、按照姓名降序排列      ┃");
			printf("\n┃ 3、按照性别降序排列      ┃");
			printf("\n┃ 0、返回主菜单            ┃");
			printf("\n┗━━━━━━━━━━━━━┛");
			printf("\n━━请输入你的选择：");
			scanf("%d",&c);
			switch(c)
			{
			case 1:paixu_zongfen();
				break;
			case 2:paixu_xingming();
				break;
			case 3:paixu_xingbie();
				break;
			}
			if(c!=1&&c!=2&&c!=3)
				break;
			fflush(stdin);//吸收脏数据—回车
		}
		    memset(temp.xm,'\0',1);
    		memset(temp.xuehao,'\0',1);
}