#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct people
{
	char name[12];
	char sex;
	char id[18];
	char room[10];
	int num;
	
	int intime[3];
};

typedef struct people PEO;
