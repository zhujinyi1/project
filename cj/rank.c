
/*
�������ܣ������ֽܷ��������Ӻ���
��������
����ֵ����
*/
void paixu_zongfen()
{
//1�������ֽܷ������ 	
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
	printf("\n�����ֽܷ��򡪡������\n");
}

/*
�������ܣ������������������Ӻ���
��������
����ֵ����
*/
void paixu_xingming()
{
//2�����������������    
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
	printf("\n�����������򡪡������\n");
}


/*
�������ܣ������Ա��������Ӻ���
��������
����ֵ����
*/
void paixu_xingbie()
{
// 3�������Ա������   
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
	printf("\n�����Ա��򡪡������\n");
}


/*
�������ܣ������Ӳ˵�
��������
����ֵ����
*/
void  paixu_zicaidan()
{		
	    int c=0;
		while(1)
		{
			printf("\n�������������Ӳ˵�������������");
			printf("\n�� 1�������ֽܷ�������      ��");
			printf("\n�� 2������������������      ��");
			printf("\n�� 3�������Ա�������      ��");
			printf("\n�� 0���������˵�            ��");
			printf("\n������������������������������");
			printf("\n�������������ѡ��");
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
			fflush(stdin);//���������ݡ��س�
		}
		    memset(temp.xm,'\0',1);
    		memset(temp.xuehao,'\0',1);
}