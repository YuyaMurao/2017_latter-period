/*
�R�̐�����ǂݍ��݁A���̍ŏ��l����ʂɏo�͂���v���O����
*/

#include<stdio.h>

int main1(void)
{
	int n1, n2, n3, min;

	puts("�O�̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf_s("%d", &n1);
	printf("�����Q�F");	  scanf_s("%d", &n2);
	printf("�����R�F");	  scanf_s("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("�ŏ��l��%d�ł��B\n", min);
	return 0;
}