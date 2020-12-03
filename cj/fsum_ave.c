/*
函数功能：N个学生成绩求和、求平均
参数：无
返回值：无
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
	printf("\n学生成绩求和，平均分\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			s[i].cj[M]=s[i].cj[M]+s[i].cj[j];
		s[i].cj[M+1]=s[i].cj[M]/M;
	}
	printf("\n学生成绩求和，平均分 完成！！\n");
}
