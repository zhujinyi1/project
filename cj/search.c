/*
�����������Ӳ˵�
����������
����ֵ����
*/
void chazhao_zicaidan()
{
    int a;
    while(1)
    {
		printf("\n���������������˵�������������");
		printf("\n�� 1����������              ��");
		printf("\n�� 2���Ա����              ��");
		printf("\n�� 3��ѧ�Ų���              ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n������������������������������");
		printf("\n�������������ѡ��");
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
			printf("\n�˳�\n");
			break;
			}
		fflush(stdin);//���������ݡ��س�
	}

}
//����4:����������
/*
�������ܣ�����������
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_name()
{
	char x[12],i,j,k=0;
	printf("������Ҫ���ҵĶ���:");
	getchar();
	gets(x);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xm)==0)
		{
				if(k==0)
				{
					printf("\nѧ��\t����\t�Ա�\t����\t��ѧ\t����\t�ܷ�\tƽ����\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
		if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}

//����5:���Ա����
/*
�������ܣ����Ա����
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_sex()
{
	fflush(stdin);
	char x,i,j,k=0;
	printf("������Ҫ���ҵĶ�����Ա�:");
	x=getchar();
	for(i=0;i<N;i++)
	{
		if(x==s[i].xb)
		{
				if(k==0)
				{
					printf("\nѧ��\t����\t�Ա�\t����\t��ѧ\t����\t�ܷ�\tƽ����\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
	if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}

//����6:��ѧ�Ų���
/*
�������ܣ���ѧ�Ų���
�������������Ա�ѧ�ţ��ɼ�
����ֵ����
*/
void search_number()
{
	char x[12],i,j,k=0;
	printf("������Ҫ���ҵĶ����ѧ��:");
						getchar();
	gets(x);
	for(i=0;i<N;i++)
	{
		if(strcmp(x,s[i].xuehao)==0)
		{
				if(k==0)
				{
					printf("\nѧ��\t����\t�Ա�\t����\t��ѧ\t����\t�ܷ�\tƽ����\n");
					k++;
				}
				printf("%s\t%s\t%c\t",s[i].xuehao,s[i].xm,s[i].xb);
				for(j=0;j<M+2;j++)
					printf("%.2lf\t",s[i].cj[j]);
				printf("\n");
		}
	}
		if(k==0)
	printf("\nû���ҵ���ͬѧ\n");
}