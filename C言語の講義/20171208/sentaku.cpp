/*
	西暦y年m月d日からn日だけ進めた結果を出力するプログラムを作成せよ。
	ただし、次の3条件を満たすこと
	(ア)	閏年を考慮すること
	(イ)	日付の更新処理は関数increment_dateとすること
	(ウ)	変数y、m、d、nはキーボードから入力させ、
			increment_date関数を用いて結果を出力するプログラムとすること
*/

#include<stdio.h>

void increment_date(int *year, int *month, int *day, int n){	//日付の更新処理
	int flg = 0, flg2 = 0,susumu = 0;	//flgは平年(0)か閏年(1)かを判断し、flg2は月を進めるかどうか及び2月か(2)そうでないか(1)を判断する
	if (*year % 4 == 0 && *year % 100 != 0){	//閏年
		flg = 1;
	}
	else if (*year % 4 == 0 && *year % 400 == 0){	//閏年
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
	if (flg2 == 1 || flg2 == 2){ //平年もしくはうるう年の月が進むとき
		while (susumu != 0){
			switch (flg) {
				case 0:	//平年
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
				case 1:	//閏年
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
	printf("日付を入力してください\n");
	printf("年：");
	scanf_s("%d",&y);
	printf("月：");
	scanf_s("%d", &m);
	printf("日：");
	scanf_s("%d", &d);
	printf("何日進めますか：");
	scanf_s("%d", &n);
	increment_date(&y,&m,&d,n);
	printf("%d年%d月%d日になりました。\n",y,m,d,n);
	return 0;
}