/*
	����y�Nm��d������n�������i�߂����ʂ��o�͂���v���O�������쐬����B
	�������A����3�����𖞂�������
	(�A)	�[�N���l�����邱��
	(�C)	���t�̍X�V�����͊֐�increment_date�Ƃ��邱��
	(�E)	�ϐ�y�Am�Ad�An�̓L�[�{�[�h������͂����A
			increment_date�֐���p���Č��ʂ��o�͂���v���O�����Ƃ��邱��
*/

#include<stdio.h>

void increment_date(int *year, int *month, int *day, int n){	//���t�̍X�V����
	int flg = 0, flg2 = 0,susumu = 0;	//flg�͕��N(0)���[�N(1)���𔻒f���Aflg2�͌���i�߂邩�ǂ����y��2����(2)�����łȂ���(1)�𔻒f����
	if (*year % 4 == 0 && *year % 100 != 0){	//�[�N
		flg = 1;
	}
	else if (*year % 4 == 0 && *year % 400 == 0){	//�[�N
		flg = 1;
	}
	*day += n;
	if (*day >= 30){
		flg2 = 1;
		susumu = 1;
	}
	else if (*day >= 29 && *month == 2){
		flg2 = 2;
		susumu = 1;
	}
	if (flg2 == 1 || flg2 == 2){ //���N�������͂��邤�N�̌����i�ނƂ�
		while (susumu != 0){
			switch (flg) {
				case 0:	//���N
					if (*month == 4 || *month == 6 || *month == 9 || *month == 11){
						*day -= 30;
						if (*day > 30){
							susumu++;
						}
					}
					else if (*month == 2){
						*day -= 28;
						if (*day > 28){
							susumu++;
						}
					}
					else {
						*day -= 31;
						if (*day > 31){
							susumu++;
						}
					}
					break;
				case 1:	//�[�N
					if (*month == 4 || *month == 6 || *month == 9 || *month == 11){
						*day -= 30;
						if (*day > 30){
							susumu++;
						}
					}
					else if (flg2 == 2){
						*day -= 29;
						if (*day > 29){
							susumu++;
						}
					}
					else {
						*day -= 31;
						if (*day > 31){
							susumu++;
						}
					}
					break;
				default:
					break;
			}
			++*month;
			susumu--;
			if (*month > 12){
				++*year;
				*month -= 12;
			}
		}
	}
}

int main(void){
	int y = 0, m = 0, d = 0, n = 0;
	printf("���t����͂��Ă�������\n");
	printf("�N�F");
	scanf_s("%d",&y);
	printf("���F");
	scanf_s("%d", &m);
	printf("���F");
	scanf_s("%d", &d);
	printf("�����i�߂܂����F");
	scanf_s("%d", &n);
	increment_date(&y,&m,&d,n);
	printf("%d�N%d��%d���ɂȂ�܂����B\n",y,m,d,n);
	return 0;
}