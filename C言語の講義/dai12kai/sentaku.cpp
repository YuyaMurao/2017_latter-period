/*
	����܂łɊw�񂾕ϐ��E���Z�E�z��E�֐��E�|�C���^������g���āA
	���̎d�l�ɏ��������{�[�����O�̃X�R�A�v�Z�v���O�������쐬����B
	(�A)�S10�t���[���̓��A1�t���[���ڂ���9�t���[���ڂ܂ł͍ő�2���A10�t���[���ڂ͍ő�3���Ƃ���
	�@	1���ڂ�10�s���|�����ꍇ�̓X�g���C�N�Ƃ��āA���̃t���[���Ɉڍs����B
	�A	1���ڂ�2���ڂ�10�s���|�����ꍇ�́A�X�y�A�Ƃ���B
	�B	10�t���[���ڂ�1���ڂ�2���ڂŃX�g���C�N�܂��̓X�y�A�ƂȂ����ꍇ��3�����\

	(�C)	���_�v�Z�́A��ʓI�ȃ{�[�����O�̃��[���ɏ]������
	�@	�X�y�A�F����1�����̃|�C���g�����Z
	�A	�X�g���C�N�F����2�����̃|�C���g�����Z
	���_�u���i�X�g���C�N2��A���j�A�^�[�L�[�i�X�g���C�N3��A���j�̏ꍇ�̌v�Z�ɒ���
	
	(�E)	�|�����s���̌��́A�L�[�{�[�h������͂����A���͒l���s���ł���ꍇ�̓G���[���b�Z�[�W��\�����čē��͂𑣂�����
	�@	�e�t���[��1���ڂ�11�ȏ�̐��l�����͂��ꂽ�@���@�u0~10�͈̔͂œ��͂��ĉ������v
	�A	�e�t���[��1���ڂ�2���ڂ̍��v��11�ȏ�@���@�u������x���͂������ĉ������v
	
	(�G)	�ŏI���_����ʂɕ\�����邱��
*/

#include<stdio.h>

int calc(int score[][4]){	//���_����
	int i,totalscore = 0;
	for (i = 1; i <= 10; i++){
		if (i != 10 && score[i][1] + score[i][2]  == 10){	//10�t���[���ڂ͗�O
			if (score[i][1] == 10 && score[i + 1][1] == 10 && score[i + 2][1] == 10 || (i == 9 && score[9][1] == 10 && score[10][1] == 10 && score[10][3] == 10)){	//�^�[�L�[
				//printf("%d �^�[�L�[�@�@%d   %d   %d\n", i ,score[i][1], score[i][2], score[i][3]);	//�����p
				totalscore += 30;
				//printf("���݃g�[�^���@%d\n", totalscore);	//�����p
			}
			else if (score[i][1] == 10 && score[i + 1][1] == 10 || (i == 10 && score[10][1] == 10 && score[10][3] == 10)){	//�_�u��
				//printf("%d �_�u���@�@�@%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//�����p
				if (i != 9){
					totalscore += 20 + score[i + 2][1];
				}else{	//9�t���[���ڂ̏ꍇ
					totalscore += 20 + score[10][3];
				}
				//printf("���݃g�[�^���@%d\n",totalscore);	//�����p
			}
			else if (score[i][1] == 10){	//�X�g���C�N
				//printf("%d �X�g���C�N�@%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//�����p
				if (i != 9){
					totalscore += 10 + score[i + 1][1] + score[i + 1][2];
				}else{	//9�t���[���ڂ̏ꍇ
					if (score[10][1] == 10){	//10�t���[���ڂ�1���ڂ��X�g���C�N
						totalscore += 10 + score[10][1] + score[10][3];
					}else{
						totalscore += 10 + score[10][1] + score[10][2];
					}
				}
				//printf("���݃g�[�^���@%d\n", totalscore);	//�����p
			}else{	//�X�y�A
				totalscore += 10 + score[i + 1][1];
				//printf("%d �X�y�A�@�@�@%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//�����p
				//printf("���݃g�[�^���@%d\n",totalscore);	//�����p
			}
		}else if(i != 10){	//�ʏ�̓��_���Z
			//printf("%d �ʏ�@�@�@�@%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//�����p
			totalscore += score[i][1] + score[i][2];
			//printf("���݃g�[�^���@%d\n", totalscore);	//�����p
		}else{	// 10�t���[����
			totalscore += score[10][1] + score[10][2] + score[10][3];
			//printf("%d 10�t���[���ځ@�@�@%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//�����p
			//printf("���݃g�[�^���@%d\n", totalscore);	//�����p
		}
	}
	//printf("�g�[�^���@�@%d\n", totalscore);//�����p
	return totalscore;
}

int main(void){
	int i, score[13][4], totalscore = 0;
	for (int k = 0; k < 13; k++){	//�z��̏�����
		for (int l = 0; l < 4; l++){
			score[k][l] = 0;
		}
	}
	printf("�`�{�[�����O�̃X�R�A�v�Z�v���O�����`\n");
	printf("10�t���[���ڂ܂ł̓|�����s���̐�����͂��Ă��������B\n");
	for (i = 1; i <= 10;i++){
		printf("������%d�t���[���ځ�����\n",i);
		for (int j = 1; j <= 2;j++){
			printf("%d���ځF",j);
			scanf_s("%d",&score[i][j]);
			if (i != 10 && score[i][1] == 10){	//1���ڂ�10�s���|�����ꍇ�̓X�g���C�N�Ƃ��āA���̃t���[���Ɉڍs����B(10�t���[���ڂ͗�O)
				break;
			}
			if (score[i][1] < 0 || score[i][1] > 10){	//�e�t���[��1���ڂ�11�ȏ�̐��l�����͂��ꂽ
				printf("0�`10�͈̔͂œ��͂��ĉ�����\n");
				j--;
			}
		}
		if (i != 10 && score[i][1] + score[i][2] >= 11){	//�e�t���[��1���ڂ�2���ڂ̍��v��11�ȏ�(10�t���[���ڂ͗�O)
			printf("������x���͂��ĉ�����\n");
			score[i][1] = 0;
			score[i][2] = 0;
			i--;
		}
	}
	if (score[10][1] == 10 || score[10][1] + score[10][2] == 10){	//10�t���[���ڂ�1���ڂ�2���ڂŃX�g���C�N�܂��̓X�y�A�ƂȂ����ꍇ��3�����\
		int flg = 0;
		while (flg == 0){
			printf("3���ځF");
			scanf_s("%d", &score[10][3]);
			if (score[10][3] <= 10){
				flg = 1;
			}else{
				printf("������x���͂��ĉ�����\n");
			}
		}
	}
	totalscore = calc(score);
	printf("�ŏI���_��%d�_�ł�\n",totalscore);
	return 0;
}

/*
	�y�Q�l�z
	�u�{�E�����O - Wikipedia�vhttps://ja.wikipedia.org/wiki/%E3%83%9C%E3%82%A6%E3%83%AA%E3%83%B3%E3%82%B0
	�u�{�E�����O�̃X�R�A�̌����E�v�Z���@�Ɩڈ��̘b�vhttp://bowling.solution-strategy.com/category1/entry22.html
	�u�X�R�A�̂����vhttp://www.tokibow.com/tbchp/score.htm
	�u�ق킢�Ƃ̃{�E�����O�u���vhttp://park1.wakwak.com/~shiraki/bowling/score.html
	�u�{�E�����O�̃X�R�A�̌v�Z���@���ڂ�������I�^�[�L�[�̏ꍇ�́H�vhttps://sattoga.com/archives/472/
*/