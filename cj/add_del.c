int addition()
{
    int f,i,j;
	if(N==10)
	{
		printf("人已经满了，不能再加了哦！\n");
		printf("已经自动退出");
		return 1;
	}
    printf("请输入想要添加的位置：（0~%d）",N);
    scanf("%d",&f);
    for(i=N;i>f;i--)
        {
            s[i]=s[i-1];
        }
    fflush(stdin);//清空键盘缓冲区
		printf("\n学号=");
		gets(s[f].xuehao);
		fflush(stdin);
		printf("\n姓名=");
		gets(s[f].xm);
		fflush(stdin);
		while(strlen(s[f].xuehao)==0)
		{
			printf("不能为空\n");
			printf("\n学号=");
			gets(s[f].xuehao);
			fflush(stdin);
		}
		printf("\n性别=");
		s[f].xb=getchar();
		while(strlen(s[f].xm)==0)
		{
			printf("不能为空\n");
			printf("\n姓名=");
			gets(s[f].xm);
			fflush(stdin);
		}
		fflush(stdin);
		printf("\n成绩：");
		for(j=0;j<M;j++)
		{
			printf("\n第%d门课=",j+1);
            scanf("%lf",&s[f].cj[j]);
			while(s[f].cj[j]<0||s[f].cj[j]>100)
			{
				printf("成绩必须在0-100之间");
				printf("\n第%d门课=",j+1);
    	        scanf("%lf",&s[f].cj[j]);
			}
			
		}
	N++;
}
void f_del()
{
	 int f,i,j;
    printf("请输入想要删除的位置：（0~%d）",N-1);
    scanf("%d",&f);
    for(i=f;i<N-1;i++)
        {
            s[i]=s[i+1];
        }
	N--;
}