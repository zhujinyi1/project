#include"p1_stu.h"
/*
���ܣ����˵�����
��������
����ֵ����
*/
void zhucaidan()
{
	NODE  * head=NULL;//ͷ���
	int choice=0;
	while(1)
    {
		printf("\n���������������˵�������������");
		printf("\n�� 1����������              ��");
		printf("\n�� 2������һ���ڵ�          ��");
		printf("\n�� 3���޸Ľڵ���Ϣ          ��");
		printf("\n�� 4��ɾ��һ���ڵ�          ��");
		printf("\n�� 5�����ȫ���ڵ�          ��");
		printf("\n�� 6�����ļ��ж���ȫ���ڵ�  ��");
		printf("\n�� 7�������浽�ļ���      ��");
		printf("\n�� 8��׷��һ���ڵ�          ��");
		printf("\n�� 0���˳�                  ��");
		printf("\n������������������������������");
		printf("\n�������������ѡ��");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\n����ѧ����Ϣ\n");
			 head=create( ); 
			 break;
		case 2:head=Insert(head) ;//����һ���ڵ�
		     break;
		case 3: head=update(head);//�޸Ľڵ���Ϣ
		      break;
		case 4: head=del(head);//ɾ��һ���ڵ�
		      break;
		case 5: display(head);//���ȫ���ڵ�
		      break;
		case 6: head=read_from_file();//���ļ��ж���ȫ���ڵ�
		      break;
		case 7: write_to_file(head);//�����浽�ļ���
		      break;
		case 8:append(head);//׷��һ���ڵ�
				break;
		default: printf("\n�˳�\n");exit(0);
		}
		getchar();//���������ݡ��س�
	}
	return 0;
}