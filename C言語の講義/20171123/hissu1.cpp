/*
	�����ăQ�[��
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int getRand(int max){	//�����_���̒l��Ԃ�
	srand((unsigned int)time(NULL));	//�����_���̎�𐶐�
	return rand() % max + 1;	//1�`max�܂ł̃����_��
}

int itirannsyutu(){	//��Փx�ꗗ���o�͂���
	printf("��Փx�ꗗ\n");
	printf("1 : 1�`  10�̐���\n");
	printf("2 : 1�`  30�̐���\n");
	printf("3 : 1�`  50�̐���\n");
	printf("4 : 1�` 100�̐���\n");
	printf("5 : 1�` 500�̐���\n");
	printf("6 : 1�`1000�̐���\n");
	return 0;
}

int nannido(){	//��Փx����͂�����
	int nannido = 0;
	printf("��Փx(���p����)����͂��Ă������� :");
	scanf_s("%d", &nannido);
	return nannido;
}

int handan(int nannido){	//���͂��ꂽ�l�������𔻒f����(�G���[�̎��̏���)
	int flg  = 0,handan = 0;
	while (flg == 0){
		if (nannido > 0 && nannido < 7){
			flg = 1;
			break;
		}
		else{
			printf("���͂��ꂽ�l�̓�Փx�͂���܂���\n");
			printf("�I�����܂����H\n");
			printf("1 : �͂��@2 : ������\n");
			printf("��");
			scanf_s("%d", &handan);
			if (handan == 1){
				flg = 0;
				break;
			}
			else if (handan == 2){
				printf("������x��Փx(���p����)����͂��Ă������� :");
				scanf_s("%d", &nannido);
			}
			else{
				printf("���̒l�����͂���܂����B\n");
				printf("������x��Փx(���p����)����͂��Ă������� :");
				scanf_s("%d", &nannido);
			}
		}
	}
	return flg;
}

int syuturyoku(int flg,int kazu,int kai){	//�o�͏���
	switch (flg){
	case 1:	//�����̎��̏o��
		printf("(%d���)", kai);
		printf("�����I\n");
		return 1;
	case 2:	//���������l��菬�������̏o��
		printf("(%d���)", kai);
		printf("�����́A%d��菬�����ł�\n", kazu);
		break;
	case 3 :	//���������l��菬�������̏o��
		printf("(%d���)",kai);
		printf("�����́A%d���傫���ł�\n", kazu);
		break;
	default:
		printf("�G���[\n");
		break;
	}
	return 0;
}

int hikaku(int kazu, int rand,int kai){	//��r����
	int flg = 0,seikai = 0;
		if (kazu == rand){
			flg = 1;
		}
		else if (kazu > rand){
			flg = 2;
		}
		else{
			flg = 3;
		}
		seikai = syuturyoku(flg, kazu, kai);
		if(seikai == 1)
			return 1;
		else
			return 0;
}


int game(int nannido){	//�Q�[���{��
	int seikai = 0, kazu = 0, rand = 0,kai = 1;
	int nannidokazu[7] = { 0, 10, 30, 50, 100, 500, 1000 };
	rand = getRand(nannidokazu[nannido]);
	while (seikai == 0){
		printf("��������͂��Ă�������\n��");
		scanf_s("%d", &kazu);
		seikai = hikaku(kazu, rand,kai);
		kai++;
	}
	return 0;
}

int main(void){
	int flg = 0;
	itirannsyutu();//��Փx�ꗗ���o�͂���
	int nannido_2 = nannido();
	flg = handan(nannido_2);
	while (flg == 1){
		printf("�Q�[���X�^�[�g�I\n");
		game(nannido_2);
		flg = 0;
	}
	return 0;
}