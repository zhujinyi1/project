#include "z.h"
int main()
{
	int a;	
	NODE* head=NULL;
	while(1)
	{
	printf("1������\n");
	printf("2�����\n");
	printf("3���޸�\n");
	printf("4��ɾ��\n");
	printf("5����ӡ\n");
	printf("0���˳�\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		head=f_create();
		break;
	case 2:
		head=f_add(head);
		break;
	case 3:
	///	head=f_correct(head);
		break;
	case 4:
		head=f_delete(head);
		break;
	case 5:
		f_print(head);
		break;
	case 0:
		printf("�˳�");
		return 0;
	}
	}
	return 0;
}
