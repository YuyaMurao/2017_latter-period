/*
	��̒l����������
*/

#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	int a = 0, b = 0;
	printf("�����l���Q���͂��Ă��������B\n");
	printf("����a:");
	scanf_s("%d",&a);
	printf("����b:");
	scanf_s("%d",&b);
	swap(&a,&b);
	printf("�Q�̕ϐ��̒l���������܂����B\n");
	printf("����a:%d\n",a);
	printf("����b:%d\n",b);
}