#include<stdio.h>
#include <string.h>
#include<math.h>

struct Point{		/*�@���W��\���\���́@*/
	double x;
	double y;
};

struct Triangle{	/*�@�O�p�`��\���\���́@*/
	Point poi1;
	Point poi2;
	Point poi3;
};

double calc(){
	double p1,p2,p3,result;
	p1 = sqrt(( - )*( - )+( - )*( - ));
	p2 = sqrt(( - )*( - ) + ( - )*( - ));
	p3 = sqrt(( - )*( - ) + ( - )*( - ));
	result = p1 + p2 + p3;
	return result;
}

int main(void){	
	Triangle ti;
	int result;
	printf("�O�p�`�̂R�ӂ̒����̍��v���v�Z���܂��B\n");
	for (int i = 1; i < 3; i++){
		printf("�_%d�ix���W�j:",i);	//x���W
		switch (i) {
		case 1:
			scanf("%d", &ti.poi1.x);
			break;
		case 2:
			scanf("%d", &ti.poi2.x);
			break;
		case 3:
			scanf("%d", &ti.poi3.x);
			break;
		default:
			printf("error");
			break;
		}
		printf("�_%d�iy���W�j:", i);	//y���W
		switch (i) {
		case 1:
			scanf("%d", &ti.poi1.y);
			break;
		case 2:
			scanf("%d", &ti.poi2.y);
			break;
		case 3:
			scanf("%d", &ti.poi3.y);
			break;
		default:
			printf("error");
			break;
		}
		result = calc();
	}
}