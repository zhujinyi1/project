/*�޸��Ӳ˵�*/
void alter()
{
            int j,h=1,a,i;
    double c;
    char k,x[12];
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
            printf("\n���������������޸ĩ�����������");
		    printf("\n�� 1��ѧ��                  ��");
		    printf("\n�� 2���Ա�                  ��");
		    printf("\n�� 3���ɼ�                  ��");
            printf("\n�� 4������                  ��");
		    printf("\n�� 0���˳�                  ��");
		    printf("\n������������������������������\n");
            printf("��������Ҫ�޸ĵ�ѡ�");
            scanf("%d",&a);
            switch(a)
            {
                case 1:
                    printf("�������޸ĺ��ѧ�ţ�");
                    fflush(stdin);
                    gets(temp.xuehao);
                    fflush(stdin);
                    strcpy(s[i].xuehao,temp.xuehao);
                    break;
                case 2:
                    printf("�������޸ĺ���Ա�");
                    fflush(stdin);
                    k=getchar();
                    fflush(stdin);
                    while(k!='m'&&k!='f')
		            {
		            	printf("�Ա����Ϊm/f");		            	
		            	printf("\n�Ա�=");
		            	k=getchar();
                        fflush(stdin);
		            }
                    p->xb=k;
                    break;
                case 3:
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
                case 4:
                    printf("�������޸ĺ��������");
                    fflush(stdin);
                    gets(temp.xm);
                    fflush(stdin);
                    strcpy(s[i].xm,temp.xm);
                    printf("�޸���ɣ�");
                    break;
            }
                if(a!=1&&a!=2&&a!=3&&a!=4) 
		        {
	            	printf("\n�˳�\n");
	            	break;
		        }
	            fflush(stdin);//���������ݡ��س�
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