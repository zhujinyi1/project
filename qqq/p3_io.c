#include"p1_stu.h"

/*
���ܣ�����ѧ������
��������
����ֵ������ͷ�ڵ�
*/
NODE *create( )  //��������
{
  NODE *head, *tail, *pnew;
  char xuehao[12];
  int i;
  head = (NODE *)malloc (sizeof(NODE));  //����ͷ�ڵ�
  if (head == NULL)   //����ʧ��,�򷵻�
  {
    printf ("no enough memory!\n");
    return (NULL);
  }  
  head->next = NULL;    //ͷ�ڵ��ָ������NULL
  tail = head;                    //��ʼʱβָ��ָ��ͷ�ڵ�
  printf ("\n������ѧ����Ϣ��ѧ�š��������Ա����ġ���ѧ�����\n");
  while (1)  //����ѧ���ɼ���������
  {
	fflush(stdin);
	printf("\n������ѧ�ţ�Ϊ#ʱ�������룩=");
	scanf ("%10s", xuehao);  //����ѧ��
	if (strcmp(xuehao,"#")==0)         //ѧ��Ϊ#,ѭ���˳�
        break;
     //����һ�½ڵ�
    pnew = (NODE *)malloc (sizeof(NODE));  
    if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
    {
      printf ("no enough memory!\n");
      return (NULL);
    }
	//�ڵ�������
    strcpy(pnew->xh,xuehao);  //ѧ��
	printf("\n���������������=");
	fflush(stdin);
	scanf ("%s", pnew->xm);  //��������
    printf("\n������������Ա�=");
	fflush(stdin);
	scanf ("%c", &pnew->xb);  //�����Ա�
	for(i=0;i<M;i++)
	{
		fflush(stdin);
		printf("\n����������ĳɼ�%d=",i+1);  //���ŵ��Ƴɼ�
		scanf("%lf",&pnew->cj[i]);
	}
    pnew->cj[M]=pnew->cj[0]+pnew->cj[1]+pnew->cj[2];//�ܷ�
	 pnew->cj[M+1]=pnew->cj[M]/M;			//ƽ����  
	//�ڵ�ָ����
    pnew->next = NULL;  
    tail->next = pnew;     
    tail = pnew; 
  }
  return (head);
}
/*
���ܣ���ʾѧ��������ȫ���ڵ���Ϣ
������ͷ�ڵ�
����ֵ����
*/
void display(NODE *head)  
{
  NODE *p;
  int i;
  printf("\n   ѧ��     ����  �Ա�  ����  ��ѧ  ����  �ܷ�  ƽ����\n");
  for (p = head->next; p != NULL; p = p->next)
  {
	  printf("%-11s%-10s%4c  ",p->xh,p->xm,p->xb);  //ѧ������ �Ա�
	  for(i=0;i<M+2;i++)
		  printf("%-6.1lf",p->cj[i]);  //���ŵ��Ƴɼ����ܷ֡�ƽ����
	  printf("\n");
  }
  printf ("\n");
}

