
# include <stdio.h>
# include <stdlib.h>

//1.������������
//int short long float double char
/*
int %d
short %d
long %ld
float %f
double %lf
char %c
%x ʮ������
%o �˽���
%s �ַ���
*/


void main1(){
	int i = 1;
	printf("%d\n",i);

	float f = 23.3;
	printf("%f\n",f);

//��������������ռ���ֽ���
printf("intռ%d�ֽ�\n",sizeof(int));
printf("charռ%d�ֽ�\n", sizeof(char));
printf("floatռ%d�ֽ�\n", sizeof(float));

//ѭ��
int n = 0;
for (; n < 10; n++){
	printf("%d\n",n);
}

//�ȴ�����
system("pause");
}