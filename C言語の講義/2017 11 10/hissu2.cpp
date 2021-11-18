/*
	任意の整数値を代入した配列（サイズも自由）を宣言せよ．
	ユーザから整数値の入力を受け付け，入力された値が配列内にあればTrue，
	なければFalseと画面表示するプログラム
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main2(void){
	int flg = 0,kazu = 0,i = 0,seisuu[10];
	
	//配列にランダムな数を入れる
	while (i <= 10){
		srand(time(NULL)+i);	// 乱数の種を初期化
		seisuu[i] = rand() % 10 + 1;
		printf("%d\n", seisuu[i]);
		i++;
	}

	printf("1～10の整数値を入力してください。\n");
	scanf_s("%d",&kazu);

	//比較処理
	for (int j = 0; j <= 10; j++){
		if (kazu == seisuu[j])
			flg = 1;
	}
	if (flg == 1)
		printf("True");
	else
		printf("False");

	return 0;
}