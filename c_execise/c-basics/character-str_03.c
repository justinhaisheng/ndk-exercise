//
// Created by haisheng on 2019/10/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delchar(char *str, char del){
	char *p = str;
	while (*str != '\0') {
		if (*str != del) {
			*p++ = *str;
		}
		str++;
	}
	*p = '\0';
}
//תСд
void mystrlwr(char str[],int len){
	int i = 0;
	for (; i < len; i++){
		//A-Z ��ĸ a-Z
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i]-'A' + 'a';
		}
	}
}

void main_str_03(){
	char src[] = "C,C++,Java";



	char dest[20] = {0};
	//memcpy ��src��ָ�ڴ�������count���ֽڵ�dest��ָ�ڴ�����
	memcpy(dest,src,9);
	printf("%s\n",dest);

	delchar(src,'a');
	printf("%s\n",src);

	char str[] = "CHINA motherland!";
	_strupr(str);//ת��д
	printf("%s\n",str);
	mystrlwr(str, sizeof(str)/ sizeof(char));
	printf("%s\n",str);

	//�Ƚ��ַ��� strcmpi���Դ�Сд
	char* str1 = "abc";
	char* str2 = "ABC";

	int r = strcmp(str1,str2);
	if (r > 0){
		printf("str1 ����str2\n");
	}
	else if (r == 0){
		printf("str1 ����str2\n");
	}
		//str1 < str2
	else if (r < 0){
		printf("str1 С��str2\n");
	}

	char* num_str = "9978";
	int num_r = atol(num_str);
	printf("%d\n", num_r);

	char *buf1 = "aaa", *buf2 = "bbb", *buf3 = "ccc";
	int ptr;
	ptr = strcmp(buf2, buf1);
	if (ptr > 0)
		printf("buffer 2 is greater than buffer 1n\n");
	else
		printf("buffer 2 is less than buffer 1n\n");
	ptr = strcmp(buf2, buf3);
	if (ptr > 0)
		printf("buffer 2 is greater than buffer 3n\n");
	else
		printf("buffer 2 is less than buffer 3n\n");


	char *string1 = "1234567890";
	char *string2 = "747DC8";
	int length;
	length = strcspn(string1, string2);
	printf("Character where strings intersect is at position %dn\n", length);


	char *buffer;
	buffer = strerror(77);
	printf("Error: %sn\n", buffer);
}
