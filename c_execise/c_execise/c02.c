# include <stdio.h>
# include <stdlib.h>


//ָ��
//ָ��洢���Ǳ������ڴ��ַ
//�ڴ��ַ��ϵͳ�����ݷ���ı�ţ����ƺţ�

/*
void main(){
int i = 90;
//ָ�����������һ��int���͵�ָ��
int* p = &i; //p��ֵ����i����������ڴ��ַ
printf("%#x\n",p);

float f = 89.5f;
//����һ��float���͵�ָ��
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

