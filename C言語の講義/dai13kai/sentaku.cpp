/*
	必須課題の3辺の長さの合計を計算する部分を関数として実現せよ．
	また，同様に三角形の面積を求める関数も追加せよ．
	各関数の仮引数は，ポインタ型とする．
*/

#include<stdio.h>
#include<math.h>

struct Point { //座標を表す構造体
	double x;
	double y;
};

struct Triangle { //三角形を表す構造体
	Point poi1;
	Point poi2;
	Point poi3;
};

double calc_lon(Point *poi1, Point *poi2, Point *poi3) {
	//三角形の長さの合計を求める
	double p1, p2, p3, result;
	p1 = sqrt((poi1->x - poi2->x)*(poi1->x - poi2->x) + (poi1->y - poi2->y)*(poi1->y - poi2->y));
	p2 = sqrt((poi2->x - poi3->x)*(poi2->x - poi3->x) + (poi2->y - poi3->y)*(poi2->y - poi3->y));
	p3 = sqrt((poi3->x - poi1->x)*(poi3->x - poi1->x) + (poi3->y - poi1->y)*(poi3->y - poi1->y));
	result = p1 + p2 + p3;
	return result;
}

double calc_tri(Point *po1,Point *po2,Point *po3) {
	//三角形の面積を求める
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
	printf("三角形の３辺の長さの合計を計算します。\n");
	for (int i = 1; i <= 3; i++) {
		printf("点%d（x座標）:", i); //x座標
		switch (i) {
		case 1:
			scanf_s("%lf", &po1.x);
			printf("点1（y座標）:");
			scanf_s("%lf", &po1.y);
			break;
		case 2:
			scanf_s("%lf", &po2.x);
			printf("点2（y座標）:");
			scanf_s("%lf", &po2.y);
			break;
		case 3:
			scanf_s("%lf", &po3.x);
			printf("点3（y座標）:");
			scanf_s("%lf", &po3.y);
			break;
		default:
			printf("error");
			break;
		}
	}
	result_lon = calc_lon(&po1, &po2, &po3);
	printf("三角形の3辺の長さの合計を計算しました⇒%lf\n", result_lon);
	result_tri = calc_tri(&po1,&po2,&po3);
	printf("三角形の面積を計算しました⇒%lf\n", result_tri);
	return 0;
}