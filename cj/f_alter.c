void alter()
{
    int j,h=1;
    double c;
    char i,x[12];
    printf("������Ҫ�޸ĵĶ��������:");
	getchar();
    
	gets(x);
    fflush(stdin);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xm)==0)
        {
            h=0;
            p=&s[i];
            printf("���޸���һ�ŵĳɼ���1��2��3��,0�˳���");
            scanf("%d",&j);
            printf("�������޸ĺ�ĳɼ���");
            scanf("%lf",&c);
            while(c<0||c>100)
            {
                printf("�ɼ����������0-100");
                printf("�������޸ĺ�ĳɼ���");
                scanf("%lf",&c);
            }
            p->cj[j-1]=c;
            break;
        if(j!=1&&j!=2&&j!=3) 
		{
	    	printf("\n�˳�\n");
	    	break;
		}
	    fflush(stdin);//���������ݡ��س�
        printf("�޸���ɣ�");
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