#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int a;           //��������

struct room{      //���޷���ṹ��
	int type;         //����
	int num;       //�����
	int in[3];           //��סʱ��
	int people;          //��ס����                   
	char name[3][12];      //����
	char sex[3];            //�Ա�
	char id[3][18];        //���֤��   
	char tel[3][11];       //�绰

	struct room *next;
};

typedef struct room NODE;
