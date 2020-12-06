/*修改子菜单*/
void alter()
{
            int j,h=1,a,i;
    double c;
    char k,x[12];
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
            printf("\n┏━━━━━━修改━━━━━┓");
		    printf("\n┃ 1、学号                  ┃");
		    printf("\n┃ 2、性别                  ┃");
		    printf("\n┃ 3、成绩                  ┃");
            printf("\n┃ 4、姓名                  ┃");
		    printf("\n┃ 0、退出                  ┃");
		    printf("\n┗━━━━━━━━━━━━━┛\n");
            printf("请输入想要修改的选项：");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                    printf("请输入修改后的学号：");
                    fflush(stdin);
                    gets(temp.xuehao);
                    fflush(stdin);
                    strcpy(s[i].xuehao,temp.xuehao);
                    break;
                case 2:
                    printf("请输入修改后的性别：");
                    fflush(stdin);
                    k=getchar();
                    fflush(stdin);
                    while(k!='m'&&k!='f')
		            {
		            	printf("性别必须为m/f");		            	
		            	printf("\n性别=");
		            	k=getchar();
                        fflush(stdin);
		            }
                    p->xb=k;
                    break;
                case 3:
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
                case 4:
                    printf("请输入修改后的姓名：");
                    fflush(stdin);
                    gets(temp.xm);
                    fflush(stdin);
                    strcpy(s[i].xm,temp.xm);
                    printf("修改完成！");
                    break;
            }
                if(a!=1&&a!=2&&a!=3&&a!=4) 
		        {
	            	printf("\n退出\n");
	            	break;
		        }
	            fflush(stdin);//吸收脏数据—回车
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
    memset(temp.xm,'\0',1);
    memset(temp.xuehao,'\0',1);
}