/*
	4�s3��̍s���3�s4��̍s��̐ς����߂�v���O�������쐬����D
	�e�\���v�f�̒l�̓L�[�{�[�h����ǂݍ��ނ��ƁD
*/

#include <stdio.h>

int main(void){
	//�z��gyou1��4�s3��Agyou2��3�s4��(0�Ԗڂ̔z��͎g�p���Ȃ����Ƃɂ���)
	int gyou1[5][5], gyou2[5][5], kekka[5][5];
	//�z��kekka�̏�����
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			gyou1[i][j] = 0;
			gyou1[i][j] = 0;
			kekka[i][j] = 0;
		}
	}


	printf("4�s3���3�s4��̍s��̐ς����߂܂��B\n");
	for (int kaisuu = 1; kaisuu <= 2; kaisuu++){

		//1�ڂ̍s��2�ڂ̍s��ɂ���čs���A�񐔕ς��̂őΉ�
		int gyousuu = 0, retusuu = 0;
		switch (kaisuu) {
		case 1:
			gyousuu = 4;
			retusuu = 3;
			break;
		case 2:
			gyousuu = 3;
			retusuu = 4;
			break;
		default:
			break;
		}

		printf("*****%d�ڂ̍s��*****\n", kaisuu);

		//�s��̓ǂݍ���
		for (int gyou = 1; gyou <= gyousuu; gyou++){
			for (int retu = 1; retu <= retusuu; retu++){
				printf("%d�s%d��ڂ̐�����͂��Ă��������B\n", gyou, retu);

				//1�ڂ�2�ڂɑΉ�����ϐ��Ɋi�[
				switch (kaisuu) {
				case 1:
					scanf_s("%d", &gyou1[gyou][retu]);
					break;
				case 2:
					scanf_s("%d", &gyou2[gyou][retu]);
					break;
				default:
					break;
				}
			}
		}

	}
	
	//�v�Z
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			int kari = 0;
			for (int k = 0; k < 5; k++){
				kari = kari + gyou1[i][k] * gyou2[k][j];
			}
			kekka[i][j] = kari;
		}
	}

	//�o�͏���
	printf("\n*****�v�Z���ʂ�\�����܂�*****\n");
	for (int i = 1; i <= 4;i++){
		for (int j = 1; j <= 4; j++){
			printf("�@ %3d", kekka[i][j]);
		}
		printf("\n");
	}
	printf("******************************\n");
	return 0;
}