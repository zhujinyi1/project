//����������Ŀͳ��
/*
��������Ŀ�ɼ�
����ֵ����
*/
int add_score()
{
	int k,i,bujige,you,liang,zhong,cha;
	bujige=you=liang=zhong=cha=0;
	while(1)
	{
		bujige=you=liang=zhong=cha=0;
		printf("\n���������������������ɼ�ͳ�Ʃ�����������������");
		printf("\n�� 1������Ŀһ              ��");
		printf("\n�� 2������Ŀ��              ��");
		printf("\n�� 3������Ŀ��              ��");
		printf("\n�� 4�����ܷ�                ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n�� ע���ţ�90-100��         ��");
		printf("\n��     ����80-89��          ��");
		printf("\n��     �У�70-79��          ��");
		printf("\n��     �60-69��          ��");
		printf("\n��     ������0-59��       ��");
		printf("\n�� 0������                  ��");
		printf("\n��������������������������������������������������������");			
		printf("\n�������������ѡ��");
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
		printf("ͳ����ɣ�\n");
		printf("�ɼ�Ϊ�ŵ���%d��\n",you);
		printf("�ɼ�Ϊ������%d��\n",liang);
		printf("�ɼ�Ϊ�е���%d��\n",zhong);
		printf("�ɼ�Ϊ�����%d��\n",cha);
		printf("  ���������%d��\n",bujige);
	}
}