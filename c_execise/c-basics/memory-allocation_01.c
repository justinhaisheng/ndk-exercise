#include <stdio.h>
#include <stdlib.h>
void heapFun(int index){
	//��̬�ķ����ڴ��С��p��������׵�ַ
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
//realloc���·����ڴ��С
void reallocFun(){
	int len;
	printf("��һ����������ĳ��ȣ�");
	scanf("%d",&len);
	int *p = calloc(len, sizeof(int));
	int i = 0;
	for (; i < len; i++){
		p[i] = rand() % 100;
		printf("%d,%#x\n", p[i], &p[i]);
	}
	int addLen;
	printf("�����������ӵĳ��ȣ�");
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
	//ջ�ڴ�,���ջ���
	//int a[1024*1024*10];
	//C�����ڴ���䣺
	//1.ջ��(stack)
	//windows�£�ջ�ڴ����2M��ȷ���ĳ����������������ƣ���ʾstack overflow����
	//�Զ����䣬�ͷ�
	//2.����(heap)
	//����Ա�ֶ������ͷţ�����ϵͳ80%�ڴ�
	//3.ȫ������̬��
	//4.�ַ�������
	//5.���������
	//heapFun(6);
	reallocFun();
	//printf("Hello, World!\n");
	return 0;
}