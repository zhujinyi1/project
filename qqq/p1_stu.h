#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>
#define M 3  //���ŵ��Ƴɼ������ġ���ѧ������
struct  Grade_Info
{
 //������
  char xh[12];  //ѧ��
  char xm[10];//����
  char  xb ;// �Ա�
  double cj[M+2];//���ŵ��Ƴɼ����ܷ֡�ƽ����
	//ָ����
  struct  Grade_Info  *next;  
};
typedef  struct  Grade_Info  NODE;   //����
