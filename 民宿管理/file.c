#include"information.h"

/*
�������ܣ�д���ļ�
������ͷ�ڵ�
����ֵ����
*/
void write(NODE* head)
{
	FILE *fp = fopen("����.dat","wb");
	NODE *p;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		fwrite (p, sizeof(NODE), 1, fp);
	}
	printf("������Ϣд���ļ��ɹ���\n");
	pau();
	fclose(fp);

}

/*
�������ܣ���ȡ�ļ�
��������
����ֵ��ͷ�ڵ�
*/

NODE  *read()
{//�Զ����ķ�ʽ���ļ�wang
   
    FILE *fp = fopen ("����.dat", "rb");
    NODE *head, *tail, *pnew;
     if (fp == NULL)   //���ļ�ʧ��
    {  
       printf ("�����ļ�������,���Ƚ��г�ʼ����ʹ��\n");
	   pau();
       return NULL;
    }
    //�����ļ����ڣ��������еĽ����Ϣ
	 head = (NODE *)malloc (sizeof(NODE));  //����ͷ�ڵ�
	if (head == NULL)   //����ʧ��,�򷵻�
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //ͷ�ڵ��ָ������NULL
	tail = head;   
	while(!feof(fp))
	{
		pnew = (NODE *)malloc (sizeof(NODE));  
		if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(NODE), 1, fp)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	printf("������Ϣ��ȡ�ɹ���\n");
	pau();
	return  head;
	 fclose (fp);   //�ر��ļ�
}

/*
�������ܣ��û���Ϣд���ļ�
�������û��ṹ��ͷ�ڵ�
����ֵ����
*/
void write_user(Users* head)
{
	FILE *fp = fopen("�û�.dat","wb");
	Users *p;
	p=head;
	while(p->next!=NULL)
	{
		p=p->next;
		fwrite (p, sizeof(Users), 1, fp);
	}
	printf("�û���Ϣд���ļ��ɹ���\n");
	pau();
	fclose(fp);

}

/*
�������ܣ��û���Ϣ���ļ��ж�ȡ
��������
����ֵ���û��ṹ��ͷ�ڵ�
*/
Users  *read_user()
{//�Զ����ķ�ʽ���ļ�wang
   
    FILE *fp = fopen ("�û�.dat", "rb");
    Users *head, *tail, *pnew;
     if (fp == NULL)   //���ļ�ʧ��
    {  
       printf ("�û��ļ�������,���Ƚ��г�ʼ����ʹ��\n");
	   pau();
       return NULL;
    }
    //�û��ļ����ڣ��������еĽ����Ϣ
	 head = (Users *)malloc (sizeof(Users));  //����ͷ�ڵ�
	if (head == NULL)   //����ʧ��,�򷵻�
	{
	 printf ("no enough memory!\n");
		return (NULL);
	}  
	 head->next = NULL;    //ͷ�ڵ��ָ������NULL
	tail = head;   
	while(!feof(fp))
	{
		pnew = (Users *)malloc (sizeof(Users));  
		if (pnew == NULL)    //�����½ڵ�ʧ��,�򷵻�
		{
		  printf ("no enough memory!\n");
			return (NULL);
		}
		if(fread (pnew, sizeof(Users), 1, fp)!=1)
			break;   
		pnew->next = NULL;  
		tail->next = pnew;     
		tail = pnew; 
	}
	printf("�û���Ϣ��ȡ�ɹ���\n");
	pau();
	return  head;
	 fclose (fp);   //�ر��ļ�
}