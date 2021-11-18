/*
	4行3列の行列と3行4列の行列の積を求めるプログラムを作成せよ．
	各構成要素の値はキーボードから読み込むこと．
*/

#include <stdio.h>

int main(void){
	//配列gyou1は4行3列、gyou2は3行4列(0番目の配列は使用しないことにする)
	int gyou1[5][5], gyou2[5][5], kekka[5][5];
	//配列kekkaの初期化
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			gyou1[i][j] = 0;
			gyou1[i][j] = 0;
			kekka[i][j] = 0;
		}
	}


	printf("4行3列と3行4列の行列の積を求めます。\n");
	for (int kaisuu = 1; kaisuu <= 2; kaisuu++){

		//1つ目の行列か2つ目の行列によって行数、列数変わるので対応
		int gyousuu = 0, retusuu = 0;
		switch (kaisuu) {
		case 1:
			gyousuu = 4;
			retusuu = 3;
			break;
		case 2:
			gyousuu = 3;
			retusuu = 4;
			break;
		default:
			break;
		}

		printf("*****%dつ目の行列*****\n", kaisuu);

		//行列の読み込み
		for (int gyou = 1; gyou <= gyousuu; gyou++){
			for (int retu = 1; retu <= retusuu; retu++){
				printf("%d行%d列目の数を入力してください。\n", gyou, retu);

				//1つ目か2つ目に対応する変数に格納
				switch (kaisuu) {
				case 1:
					scanf_s("%d", &gyou1[gyou][retu]);
					break;
				case 2:
					scanf_s("%d", &gyou2[gyou][retu]);
					break;
				default:
					break;
				}
			}
		}

	}
	
	//計算
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			int kari = 0;
			for (int k = 0; k < 5; k++){
				kari = kari + gyou1[i][k] * gyou2[k][j];
			}
			kekka[i][j] = kari;
		}
	}

	//出力処理
	printf("\n*****計算結果を表示します*****\n");
	for (int i = 1; i <= 4;i++){
		for (int j = 1; j <= 4; j++){
			printf("　 %3d", kekka[i][j]);
		}
		printf("\n");
	}
	printf("******************************\n");
	return 0;
}