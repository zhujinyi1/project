#include"zjy.h"

/*
���ܣ�����Ա����
��������
����ֵ����
*/
void menu_ad()
{
	int a;
	printf("\n���������������˵�������������");
	printf("\n�� 1����������              ��");
	printf("\n�� 2������һ���ڵ�          ��");
	printf("\n�� 3���޸Ľڵ���Ϣ          ��");
	printf("\n�� 4��ɾ��һ���ڵ�          ��");
	printf("\n�� 5�����ȫ���ڵ�          ��");
	printf("\n�� 6�����ļ��ж���ȫ���ڵ�  ��");
	printf("\n�� 7�������浽�ļ���      ��");
	printf("\n�� 8��׷��һ���ڵ�          ��");
	printf("\n�� �������˳�               ��");
	printf("\n������������������������������");
	printf("\n�������������ѡ��");
	scanf("%d",&a);
	while(1)
	{
		switch(a)
		{
			case 1:
				printf("%d",a);
				break;
			case 2:
				printf("%d",a);
				break;
			case 3:
				printf("%d",a);
				break;
			case 4:
				printf("%d",a);
				break;
			case 5:
				printf("%d",a);
				break;
			case 6:
				printf("%d",a);
				break;
			case 7:
				printf("%d",a);
				break;
			case 8:
				printf("%d",a);
				break;
			default:
				printf("exit\n");
				a=0;
				break;
		}
		if(a==0)
			break;
		scanf("%d",&a);
	}

}