/*
    �R�̐�����ǂݍ��݁A���̍ő�l����ʂɏo�͂���v���O������C����A�����scratch�ō쐬
*/

#include<stdio.h>

int main(void)
{
	int n1, n2, n3, max;

	puts("�O�̐�������͂��Ă��������B");
	printf("�����P�F");	  scanf_s("%d", &n1);
	printf("�����Q�F");	  scanf_s("%d", &n2);
	printf("�����R�F");	  scanf_s("%d", &n3);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;

	printf("�ő�l��%d�ł��B\n", max);
	return 0;
}

