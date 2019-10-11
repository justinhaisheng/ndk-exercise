//
// Created by haisheng on 2019/10/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main3(){
	char dest[50];
	char* a = "china";
	char* b = " is powerful!";
	strcpy(dest,a);
	printf("cpy %s %s\n",dest,a);
	strcat(dest,b);
	printf("cat %s %#x\n",dest,b);

	char* p = strchr(dest,'w');
	if(p){
		printf("strchr %s  %d\n",p,p-dest);
	}else{
		printf("找不到 w");
	}

	char* hak = "I want go to USA!";
	char* needto = "to";
	char* p1 = strstr(hak,needto);
	if(p1){
		printf("strstr %s  %d\n",p1,p1-hak);
	}
}
