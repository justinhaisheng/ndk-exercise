
# include <stdio.h>
# include <stdlib.h>

//1.基本数据类型
//int short long float double char
/*
int %d
short %d
long %ld
float %f
double %lf
char %c
%x 十六进制
%o 八进制
%s 字符串
*/


void main1(){
	int i = 1;
	printf("%d\n",i);

	float f = 23.3;
	printf("%f\n",f);

//基本数据类型所占的字节数
printf("int占%d字节\n",sizeof(int));
printf("char占%d字节\n", sizeof(char));
printf("float占%d字节\n", sizeof(float));

//循环
int n = 0;
for (; n < 10; n++){
	printf("%d\n",n);
}

//等待输入
system("pause");
}