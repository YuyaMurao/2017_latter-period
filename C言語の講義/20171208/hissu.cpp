/*
	�L�[�{�[�h����l�̈قȂ鐮����5���͂����Ĕz��Ɋi�[����B
	�����āA�z����̗v�f�����������ɕ��ёւ���֐�sort���쐬���A���ёւ������ʂ��o�͂���B
	���ёւ��̃A���S���Y���́A�o�u���\�[�g��p����B
*/

#include<stdio.h>

void swap(int *seisuu1,int *seisuu2){
	int temp;
	temp = *seisuu1;
	*seisuu1 = *seisuu2;
	*seisuu2 = temp;
}

void sort(int seisuu[]){
	for (int i = 1; i < 6; i++){
		for (int j = 5 ; j > i; j--){
			if (seisuu[j] < seisuu[j -1]){
				swap(&seisuu[j], &seisuu[j-1]);
			}
		}
	}
}

int main1(void){
	int seisuu[6];
	for (int i = 1; i < 6; i++){
		seisuu[i] = 0;
	}
	printf("������5���͂��Ă��������B\n");
	for (int i = 1; i < 6; i++){
		printf("����%d�F",i);
		scanf_s("%d", &seisuu[i]);
	}
	sort(seisuu);
	printf("���������ɕ��ѕς��܂����F");
	for (int i = 1; i < 6; i++){
		printf("%d�A", seisuu[i]);
	}
	printf("\n");
	return 0;
}