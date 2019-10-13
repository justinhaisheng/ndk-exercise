//
// Created by haisheng on 2019/10/13.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int min(){
	return 1;
}

int max(){
	return 2;
}
//普通结构体
struct Man{
	//成员变量
	char name[20];
	int age;
	//成员函数
	int(*fun)();
};

//匿名结构体 相当于单例
struct{
	char name[20];
	int age;
}m1;

//结构体与指针
struct Woman{
	char* name;
	int age;
};

//结构体的大小（字节对齐）

struct Num{
	int age;
	double weight;
};

void structural_body_01_main(){
	//1、初始化结构体的变量
	struct Man m1 = {"Jack",21,min};
	int a = m1.fun();
	printf("a %d  %s\n",a,m1.name);
	//2、初始化结构体的变量
	struct Man m2;
	m2.age = 18;
	m2.fun = max;
	strcpy(m2.name,"haisheng");
	//sprintf(m2.name,"jason");
	printf("m2 age=%d name=%s fun=%d\n",m2.age,m2.name,m2.fun());

	struct Woman w1 = {"lu",21};
	struct Woman* w_p= &w1;
	printf("w_p %s %d\n",(*w_p).name,w_p->age);
	printf("w_p %s %d\n",w_p->name,w_p->age);

	printf("结构体数组\n");
	struct Woman ws[] = {{"hh",21},{"gg",22}};
	for (int i = 0; i < sizeof(ws)/ sizeof(struct Woman); ++i) {
		struct Woman w = ws[i];
		printf("w_p %s %d %d\n",w.name,w.age, sizeof(w));
	}
	printf("结构体的大小（字节对齐）");
	struct Num n1 = {20,89.0};
	printf("%#x,%d %d %d\n", &n1,sizeof(n1), sizeof(int), sizeof(double));
}
