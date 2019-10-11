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

void mystrlwr(char str[],int len){
	int i = 0;
	for (; i < len; i++){
		//A-Z 字母 a-Z
		if (str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i]-'A' + 'a';
		}
	}

}

void main(){
	char src[] = "C,C++,Java";



	char dest[20] = {0};
	//memcpy 由src所指内存区域复制count个字节到dest所指内存区域
	memcpy(dest,src,9);
	printf("%s\n",dest);

	delchar(src,'a');
	printf("%s\n",src);

	char str[] = "CHINA motherland!";
	//_strupr(str);
	//printf("%s\n",str);
	mystrlwr(str, sizeof(str)/ sizeof(char));
	printf("%s\n",str);
}
