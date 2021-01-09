#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct stu
{
	int num;
	int score;
	struct stu *next;
};

typedef struct stu NODE;
