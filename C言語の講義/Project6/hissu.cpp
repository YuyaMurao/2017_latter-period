#include<stdio.h>
#include <string.h>
#include<math.h>

struct Point{		/*　座標を表す構造体　*/
	double x;
	double y;
};

struct Triangle{	/*　三角形を表す構造体　*/
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
	printf("三角形の３辺の長さの合計を計算します。\n");
	for (int i = 1; i < 3; i++){
		printf("点%d（x座標）:",i);	//x座標
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
		printf("点%d（y座標）:", i);	//y座標
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