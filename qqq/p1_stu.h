#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>
#define M 3  //三门单科成绩，语文、数学、外语
struct  Grade_Info
{
 //数据域
  char xh[12];  //学号
  char xm[10];//姓名
  char  xb ;// 性别
  double cj[M+2];//三门单科成绩、总分、平均分
	//指针域
  struct  Grade_Info  *next;  
};
typedef  struct  Grade_Info  NODE;   //别名
