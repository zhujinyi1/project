/*
�������ܣ�N��ѧ���ɼ���͡���ƽ��
��������
����ֵ����
*/
void sum_ave()
{
    int i,j;
	for(i=0;i<N;i++)
	{
		p=&s[i];
		p->cj[M+1]=0;
		p->cj[M]=0;
	}
	printf("\nѧ���ɼ���ͣ�ƽ����\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			s[i].cj[M]=s[i].cj[M]+s[i].cj[j];
		s[i].cj[M+1]=s[i].cj[M]/M;
	}
	printf("\nѧ���ɼ���ͣ�ƽ���� ��ɣ���\n");
}
