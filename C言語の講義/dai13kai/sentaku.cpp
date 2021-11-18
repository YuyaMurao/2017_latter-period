/*
	�K�{�ۑ��3�ӂ̒����̍��v���v�Z���镔�����֐��Ƃ��Ď�������D
	�܂��C���l�ɎO�p�`�̖ʐς����߂�֐����ǉ�����D
	�e�֐��̉������́C�|�C���^�^�Ƃ���D
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
};

double calc_lon(Point *poi1, Point *poi2, Point *poi3) {
	//�O�p�`�̒����̍��v�����߂�
	double p1, p2, p3, result;
	p1 = sqrt((poi1->x - poi2->x)*(poi1->x - poi2->x) + (poi1->y - poi2->y)*(poi1->y - poi2->y));
	p2 = sqrt((poi2->x - poi3->x)*(poi2->x - poi3->x) + (poi2->y - poi3->y)*(poi2->y - poi3->y));
	p3 = sqrt((poi3->x - poi1->x)*(poi3->x - poi1->x) + (poi3->y - poi1->y)*(poi3->y - poi1->y));
	result = p1 + p2 + p3;
	return result;
}

double calc_tri(Point *po1,Point *po2,Point *po3) {
	//�O�p�`�̖ʐς����߂�
		//double p1, p2, p3, s; 
	double result;
		//p1 = sqrt((po1->x - po2->x)*(po1->x - po2->x) + (po1->y - po2->y)*(po1->y - po2->y));
		//p2 = sqrt((po2->x - po3->x)*(po2->x - po3->x) + (po2->y - po3->y)*(po2->y - po3->y));
		//p3 = sqrt((po3->x - po1->x)*(po3->x - po1->x) + (po3->y - po1->y)*(po3->y - po1->y));
		//s = (p1 + p2 + p3) * 0.5 ;
		//result = sqrt(s * (s - p1) * (s - p2) * (s - p3));
	result = abs((po2->x - po1->x)*(po3->y - po1->y) - (po3->x - po1->x)* (po2->y - po1->y)) *0.5;
	return result;
}

int main(void){
	Point po1;
	Point po2;
	Point po3;
	double result_lon,result_tri;
	printf("�O�p�`�̂R�ӂ̒����̍��v���v�Z���܂��B\n");
	for (int i = 1; i <= 3; i++) {
		printf("�_%d�ix���W�j:", i); //x���W
		switch (i) {
		case 1:
			scanf_s("%lf", &po1.x);
			printf("�_1�iy���W�j:");
			scanf_s("%lf", &po1.y);
			break;
		case 2:
			scanf_s("%lf", &po2.x);
			printf("�_2�iy���W�j:");
			scanf_s("%lf", &po2.y);
			break;
		case 3:
			scanf_s("%lf", &po3.x);
			printf("�_3�iy���W�j:");
			scanf_s("%lf", &po3.y);
			break;
		default:
			printf("error");
			break;
		}
	}
	result_lon = calc_lon(&po1, &po2, &po3);
	printf("�O�p�`��3�ӂ̒����̍��v���v�Z���܂�����%lf\n", result_lon);
	result_tri = calc_tri(&po1,&po2,&po3);
	printf("�O�p�`�̖ʐς��v�Z���܂�����%lf\n", result_tri);
	return 0;
}