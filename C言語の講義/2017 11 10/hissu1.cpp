/*
	���ƃX���C�h3���ځ@�z��ɏ������������́i5�l�̓_���̍��v�ƕ��ς����߂�j
*/
#include<stdio.h>

int main1(void){
	int sum = 0,tensuu[5];
	printf("5�l�̓_������͂��Ă��������B\n");
	for (int i = 1; i <= 5; i++){
		printf("%d�ԁF",i);
		scanf_s("%d", &tensuu[i]);
		sum += tensuu[i];
	}
	printf("���v�_�F%5d\n", sum);
	printf("���ϓ_�F%5.1f\n", (double)sum / 5);

	return 0;
}

