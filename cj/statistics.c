//函数：按科目统计
/*
参数：科目成绩
返回值：无
*/
int add_score()
{
	int k,i,bujige,you,liang,zhong,cha;
	bujige=you=liang=zhong=cha=0;
	while(1)
	{
		bujige=you=liang=zhong=cha=0;
		printf("\n┏━━━━━━━━按成绩统计━━━━━━━━┓");
		printf("\n┃ 1、按科目一              ┃");
		printf("\n┃ 2、按科目二              ┃");
		printf("\n┃ 3、按科目三              ┃");
		printf("\n┃ 4、按总分                ┃");
		printf("\n┃ 0、退出                  ┃");
		printf("\n┃ 注：优（90-100）         ┃");
		printf("\n┃     良（80-89）          ┃");
		printf("\n┃     中（70-79）          ┃");
		printf("\n┃     差（60-69）          ┃");
		printf("\n┃     不及格（0-59）       ┃");
		printf("\n┃ 0、返回                  ┃");
		printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━┛");			
		printf("\n━━请输入你的选择：");
		scanf("%d",&k);
		if(k!=1&&k!=2&&k!=3&&k!=4)
		{
			return 1;	
		}
		for(i=0;i<N;i++)
		{
			if(s[i].cj[k-1]>=90&&s[i].cj[k-1]<=100)
				you++;
			else if (s[i].cj[k-1]>=80&&s[i].cj[k-1]<=89)
				liang++;
			else if (s[i].cj[k-1]>=70&&s[i].cj[k-1]<=79)
				zhong++;
			else if(s[i].cj[k-1]>=60&&s[i].cj[k-1]<=69)
				cha++;
			else
				bujige++;
		}
		printf("统计完成！\n");
		printf("成绩为优的有%d人\n",you);
		printf("成绩为良的有%d人\n",liang);
		printf("成绩为中的有%d人\n",zhong);
		printf("成绩为差的有%d人\n",cha);
		printf("  不及格的有%d人\n",bujige);
	}
}