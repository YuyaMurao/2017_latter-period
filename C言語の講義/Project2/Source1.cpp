/*
�S�̐�����ǂݍ��݁A���̍ő�l����ʂɏo�͂���v���O����
*/

#include<stdio.h>

int main2(void)
{
	int n1, n2, n3,n4, max;

	puts("�l�̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf_s("%d", &n1);
	printf("�����Q�F");	  scanf_s("%d", &n2);
	printf("�����R�F");	  scanf_s("%d", &n3);
	printf("�����S�F");	  scanf_s("%d", &n4);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	printf("�ő�l��%d�ł��B\n", max);
	return 0;
}