//
// Created by haisheng on 2019/10/13.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>
//结构体与动态内存分配

struct Woman{
	char* name;
	int age;
};

typedef struct Man {
	char* name;
	int age;
}M,*MP;

typedef struct Girl{
	char *name;
	int age;
	//函数指针
	void(*sayHi)(char*);
}Girl;

//Girl结构体指针取别名GirlP
typedef Girl* GirlP;

void sayHi(char* text){
	MessageBoxA(0, text, "title", 0);
}

//改名
void reaname(GirlP gp1){
	gp1->name = "Lily";
}

void main(){
	struct Woman* womans = malloc(sizeof(struct Woman) * 10);
	struct Woman* p = womans;
	p->age = 18;
	p->name = "lu";
	p++;
	p->age = 20;
	p->name = "haisheng";
	struct Woman* h_p = womans;
	for (; h_p< womans+2; ++h_p) {
		printf("age = %d , name = %s\n",h_p->age,h_p->name);
	}

	M m1 = {"Rose",20};
	MP m2 = &m1;
	printf("%s,%d ,%s,%d\n", m1.name, m1.age,m2->name,m2->age);

	Girl g1 = { "Lucy", 18, sayHi };
	GirlP gp1 = &g1;
	gp1->sayHi("Byebye!");
	//printf("%s,%d", g1.name, g1.age);
	//传递指针，改名
	//reaname(gp1);
	//printf("%s,%d", g1.name, g1.age);

}