#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int N=5,M=3;
struct students
{
    char xuehao[12];
    char xm[10];
    char xb;
    double cj[5];
}s[10],temp,*p;

#include"add_del.c"
#include"f_alter.c"
#include"statistics.c"
#include"search.c"
#include"rank.c"
#include"fsum_ave.c"
#include"finput.c"
#include"menu.c"

/*Ö÷º¯Êý*/
int main()
{
    memset(s,'\0',1);
    main_menu();
    return 0;
}