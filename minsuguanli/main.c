#include"zjy.h"

/*ʹ��˵����
		1.�����趨���ܹ��ĸ����ķ��䣨���˼䣬˫�˼䣬��ͥ�䣬������ͥ�䣩��ÿ�ֹ��ķ��������
		2.��λ�����˼�ÿ��150��˫�˼�ÿ��200����ͥ��ÿ��250�����˼�ÿ��300
		3.����Ա�ܳף�administrator
		4.
*/

/*
���ܣ���������������˵���͹���Ա��֤
����ֵ��0
��������
*/
int main()
{
	char x[15]="administrator";
	char y[15];
	printf("welcome to this homestay!\n");
	printf("please enter to continue:");
	getchar();
	printf("\n");
	printf("ʹ��˵����\n");
	printf("��ϵͳ���ṩ3�����޹���ѡ��\n");
	printf("1.��Ȫ���� 2.ũ������ 3.ɽˮ����\n");
	printf("ÿ��������5�����䣬��ŷֱ�Ϊ1��2��3��4��5\n");
	printf("���磺��Ȫ���޵�һ�����䷿���Ϊ101����ũ��Ϊ201");
	printf("ÿ�������շѷֱ�Ϊ200����Ȫ��,250��ũ�ң�,300��ɽˮ��һ��\n");
	
	printf("Are you an administrator?\n");
	printf("If yes,please input your key.");
	fflush(stdin);
	gets(y);
	fflush(stdin);
	if(strcmp(x,y)==0)
	{
		printf("hello administrator!");
		menu_ad();
	}
/*	else
	{
		menu_cus();
	}*/
	return 0;
}