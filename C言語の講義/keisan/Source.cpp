/*
	�ǂݍ��񂾓�̐����l�̘a��ϐ��Ɋi�[���ĕ\��
*/

#include<stdio.h>

int main(void)
{
	int n1, n2;
	int wa;

	puts("��̐�������͂��Ă��������B");
	printf("�����P�F");	scanf_s("%d", &n1);
	printf("�����Q�F");	scanf_s("%d", &n2);

	wa = n1 + n2;

	printf("�����̘a��%d�ł��B\n", wa);

	return 0;
}