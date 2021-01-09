#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct time
{
	int year;
	int month;
	int day;
};

struct people
{
	char name[12]; 
	char sex;
	char id[18];
	char r_s;
	char r_num;
	struct time d;
};

typedef struct people PEO;
