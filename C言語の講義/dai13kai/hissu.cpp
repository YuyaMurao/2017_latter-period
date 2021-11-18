/*
	構造体のメンバには，別の構造体を含めることも可能である．
	ある座標を表す構造体pointを3つメンバとしてもつ三角形を表す構造体triangleを宣言せよ．
	次に，三角形の3辺の長さの合計を計算し，画面表示するプログラムを作成せよ．
	関数にする必要はなく，座標は初期値として与えてよい．単位も不要．
	下記は構造体を宣言する際のヒントである．
	平方根の計算は，教科書p.201を参考にしてsqrt関数を用いるとよい．
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
	printf("三角形の３辺の長さの合計を計算します。\n");
	for (int i = 1; i <= 3; i++) {
		printf("点%d（x座標）:", i); //x座標
		switch (i) {
		case 1:
			scanf_s("%lf", &ti.poi1.x);
			printf("点1（y座標）:");
			scanf_s("%lf", &ti.poi1.y);
			break;
		case 2:
			scanf_s("%lf", &ti.poi2.x);
			printf("点2（y座標）:");
			scanf_s("%lf", &ti.poi2.y);
			break;
		case 3:
			scanf_s("%lf", &ti.poi3.x);
			printf("点3（y座標）:");
			scanf_s("%lf", &ti.poi3.y);
			break;
		default:
			printf("error");
			break;
		}
	}
	result = calc();
	printf("三角形の3辺の長さの合計を計算しました⇒%lf\n", result);
	return 0;
}