void alter()
{
    int j,h=1;
    double c;
    char i,x[12];
    printf("请输入要修改的对象的姓名:");
	getchar();
    
	gets(x);
    fflush(stdin);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xm)==0)
        {
            h=0;
            p=&s[i];
            printf("想修改哪一门的成绩（1，2，3）,0退出：");
            scanf("%d",&j);
            printf("请输入修改后的成绩：");
            scanf("%lf",&c);
            while(c<0||c>100)
            {
                printf("成绩区间必须是0-100");
                printf("请输入修改后的成绩：");
                scanf("%lf",&c);
            }
            p->cj[j-1]=c;
            break;
        if(j!=1&&j!=2&&j!=3) 
		{
	    	printf("\n退出\n");
	    	break;
		}
	    fflush(stdin);//吸收脏数据—回车
        printf("修改完成！");
        break;
        }
        else
        {
            h=1;
        }
    }
        if(h==1)
        {
            printf("\nNot Found\n");
        }
}