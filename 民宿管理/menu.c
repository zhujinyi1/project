#include"information.h"

/*
��������f_menu
���ܣ����˵�
��������
����ֵ����
*/
void f_menu(){

	NODE *head;
	int i,t=0;
	while(1)
	{
		printf("|-------���˵�-------|\n");
		printf("|1.��ʼ��	     |\n");
		printf("|2.��ѯ�շ�	     |\n");   
		printf("|3.Ԥ������	     |\n");
		printf("|4.�˷�		     |\n");
		printf("|5.�����û�/������Ϣ |\n");  
		printf("|6.��ʾ�˱�	     |\n");
		printf("|7.���ӷ���	     |\n");
		printf("|����.�˳�	     |\n");
		printf("|--------------------|\n");
		printf("����������ѡ��:");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				clear();
				printf("���ڳ�ʼ��...\n");
				head = primitive();
				break;
			case 2:
				clear();
				printf("���ڲ���");
				empty(head);
				break;
			case 3:
				f_book(head);
				clear();
				break;
			case 4:
				rebook(head);
				clear();
				break;
			case 5:
				f_search(head);
				clear();
				break;
			case 6:
				clear();
				display(head);
				break;
			case 7:
				head = f_add(head);
				clear();
				break;
			default:
				printf("\n��ӭ�ٴι��٣�\n");
				pau();
				t=1;
		}
		if(t==1){
			break;
		}
	}
	
}