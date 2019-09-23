# include <stdio.h>
# include <stdlib.h>


//指针
//指针存储的是变量的内存地址
//内存地址，系统给数据分配的编号（门牌号）

/*
void main(){
int i = 90;
//指针变量，创建一个int类型的指针
int* p = &i; //p的值就是i这个变量的内存地址
printf("%#x\n",p);

float f = 89.5f;
//创建一个float类型的指针
float *fp = &f;
printf("%#x\n", fp);

system("pause");
}
*/

void change(int* p){
	*p = 300;
}

void main(){
	int i = 90;
	int *p = &i;

	printf("%#x\n", &i);
	printf("%#x\n", p);

	change(p);

	printf("%d\n", i);

	system("pause");
}

