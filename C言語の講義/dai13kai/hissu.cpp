/*
	�\���̂̃����o�ɂ́C�ʂ̍\���̂��܂߂邱�Ƃ��\�ł���D
	������W��\���\����point��3�����o�Ƃ��Ă��O�p�`��\���\����triangle��錾����D
	���ɁC�O�p�`��3�ӂ̒����̍��v���v�Z���C��ʕ\������v���O�������쐬����D
	�֐��ɂ���K�v�͂Ȃ��C���W�͏����l�Ƃ��ė^���Ă悢�D�P�ʂ��s�v�D
	���L�͍\���̂�錾����ۂ̃q���g�ł���D
	�������̌v�Z�́C���ȏ�p.201���Q�l�ɂ���sqrt�֐���p����Ƃ悢�D
*/

#include<stdio.h>
#include<math.h>

struct Point { //���W��\���\����
	double x;
	double y;
};

struct Triangle { //�O�p�`��\���\����
	Point poi1;
	Point poi2;
	Point poi3;
}ti;


double calc() {
	double p1, p2, p3, result;
	p1 = sqrt((ti.poi1.x - ti.poi2.x)*(ti.poi1.x - ti.poi2.x) + (ti.poi1.y - ti.poi2.y)*(ti.poi1.y - ti.poi2.y));
	p2 = sqrt((ti.poi2.x - ti.poi3.x)*(ti.poi2.x - ti.poi3.x) + (ti.poi2.y - ti.poi3.y)*(ti.poi2.y - ti.poi3.y));
	p3 = sqrt((ti.poi3.x - ti.poi1.x)*(ti.poi3.x - ti.poi1.x) + (ti.poi3.y - ti.poi1.y)*(ti.poi3.y - ti.poi1.y));
	result = p1 + p2 + p3;
	return result;
}

int main1(void) {
	double result;
	printf("�O�p�`�̂R�ӂ̒����̍��v���v�Z���܂��B\n");
	for (int i = 1; i <= 3; i++) {
		printf("�_%d�ix���W�j:", i); //x���W
		switch (i) {
		case 1:
			scanf_s("%lf", &ti.poi1.x);
			printf("�_1�iy���W�j:");
			scanf_s("%lf", &ti.poi1.y);
			break;
		case 2:
			scanf_s("%lf", &ti.poi2.x);
			printf("�_2�iy���W�j:");
			scanf_s("%lf", &ti.poi2.y);
			break;
		case 3:
			scanf_s("%lf", &ti.poi3.x);
			printf("�_3�iy���W�j:");
			scanf_s("%lf", &ti.poi3.y);
			break;
		default:
			printf("error");
			break;
		}
	}
	result = calc();
	printf("�O�p�`��3�ӂ̒����̍��v���v�Z���܂�����%lf\n", result);
	return 0;
}