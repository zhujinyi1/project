#include"p1_stu.h"


/*
���ܣ���Ӳ�̣��ļ�������������ڴ���
��������
����ֵ��ͷ���
*/
NODE  *read_from_file()
{//�Զ����ķ�ʽ���ļ�wang
   
    FILE *fp1 = fopen ("ѧ��.dat", "rb");    NODE *head, *tail, *pnew;
     if (fp1 == NULL)   //���ļ�ʧ��
    {  
       printf ("ѧ���ɼ��ļ�������\n");
       exit (0);
    }
    //ѧ���ɼ��ļ����ڣ��������еĽ����Ϣ
	 head = (NODE *)malloc (sizeof(NODE));  //����ͷ�ڵ�
	if (head == NULL)   //����ʧ��,�򷵻�
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //ͷ�ڵ��ָ������NULL
	tail = head;   
	while(!feof(fp1))
	{
		pnew = (NODE *)malloc (sizeof(NODE));  
		if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(NODE), 1, fp1)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	return  head;
	 fclose (fp1);   //�ر��ļ�
}
	
 /*
���ܣ����ڴ��е�����д��Ӳ�̣��ļ���
������ͷ���
����ֵ����
*/
void write_to_file(NODE* head)
{
	//��д��ķ�ʽ���ļ�ѧ��.dat
    FILE *fp1 = fopen ("ѧ��.dat", "wb");   
    NODE *p=head->next;
    char xuehao[12];
    int i;
  	while(p!=NULL)
	{
		fwrite (p, sizeof(NODE), 1, fp1);   
		p=p->next; 
	}
	 fclose (fp1);   //�ر��ļ�
}

   