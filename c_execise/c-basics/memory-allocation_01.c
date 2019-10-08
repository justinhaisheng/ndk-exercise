#include <stdio.h>
#include <stdlib.h>
void heapFun(int index){
	//动态的分配内存大小，p是数组的首地址
	int* p = malloc(index* sizeof(int));
	for(int i = 0;i<index;i++){
		p[i] = rand()%100;
	}

	int* p_q = p;
	for(int j=0;j<index;j++){
		printf("%d\n",*(p_q+j));
	}
	free(p);
}
//realloc重新分配内存大小
void reallocFun(){
	int len;
	printf("第一次输入数组的长度：");
	scanf("%d",&len);
	int *p = calloc(len, sizeof(int));
	int i = 0;
	for (; i < len; i++){
		p[i] = rand() % 100;
		printf("%d,%#x\n", p[i], &p[i]);
	}
	int addLen;
	printf("输入数组增加的长度：");
	scanf("%d",&addLen);

	int *q = realloc(p,len + addLen);
	if(q!=NULL){
		for (int j; j < len+addLen; j++){
			q[j] = rand() % 300+1;
			printf("%d,%#x\n", q[j], &q[j]);
		}
	}

	if(p!=NULL){
		free(p);
		p = NULL;
	}

	if(q!=NULL){
		free(q);
		q = NULL;
	}

}


int main() {
	//栈内存,造成栈溢出
	//int a[1024*1024*10];
	//C语言内存分配：
	//1.栈区(stack)
	//windows下，栈内存分配2M（确定的常数），超出了限制，提示stack overflow错误
	//自动分配，释放
	//2.堆区(heap)
	//程序员手动分配释放，操作系统80%内存
	//3.全局区或静态区
	//4.字符常量区
	//5.程序代码区
	//heapFun(6);
	reallocFun();
	//printf("Hello, World!\n");
	return 0;
}