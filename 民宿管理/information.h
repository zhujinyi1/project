#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int a;           //房间总数

struct room{      //民宿房间结构体
	int type;         //类型
	int num;       //房间号
	int in[3];           //入住时间
	int people;          //居住人数                   
	char name[3][12];      //姓名
	char sex[3];            //性别
	char id[3][18];        //身份证号   
	char tel[3][11];       //电话

	struct room *next;
};

typedef struct room NODE;

struct user{           //用户/ 管理员链表
	char name[12];     //用户名
	char key[12];      //密码
	int rank;         //用户级别（1.管理员，2.用户）

	struct user *next;
};

typedef struct user Users;
