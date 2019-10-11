//
// Created by haisheng on 2019/10/8.
//
#include <stdio.h>
#include <stdlib.h>

void change(char* str){
	printf("change before %s \n",str);
	//str[2] = 'a';
	//printf("change before %s \n",str);
}

void main_02(){
	//1、使用字符数组存储字符串
	char str[] = {'c','h','i','n','a','\0'};
	str[2] = 'j';//可以修改
	char str2[20] = "chinah";
	printf("Hello, World! %s %s\n",str,str2);
	//2、字符指针存储字符串
	char* str3 = "hello";
	char* s = str3;
	char* h = s;
	change(h);
	//str3++;
	//*str3 = 'o';//不可以修改
	str3 += 1;
	//可以这样截取字符串
	while (*str3){
		printf("%c",*str3);
		str3++;
	}
	printf("\n");
	printf("str3 %s\n",s);
}
