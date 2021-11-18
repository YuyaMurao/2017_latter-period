/*
	これまでに学んだ変数・演算・配列・関数・ポインタ等を駆使して、
	次の仕様に準拠したボーリングのスコア計算プログラムを作成せよ。
	(ア)全10フレームの内、1フレーム目から9フレーム目までは最大2投、10フレーム目は最大3投とする
	①	1投目で10ピン倒した場合はストライクとして、次のフレームに移行する。
	②	1投目と2投目で10ピン倒した場合は、スペアとする。
	③	10フレーム目の1投目と2投目でストライクまたはスペアとなった場合は3投が可能

	(イ)	得点計算は、一般的なボーリングのルールに従うこと
	①	スペア：次の1投分のポイントを加算
	②	ストライク：次の2投分のポイントを加算
	※ダブル（ストライク2回連続）、ターキー（ストライク3回連続）の場合の計算に注意
	
	(ウ)	倒したピンの個数は、キーボードから入力させ、入力値が不正である場合はエラーメッセージを表示して再入力を促すこと
	①	各フレーム1投目で11以上の数値が入力された　→　「0~10の範囲で入力して下さい」
	②	各フレーム1投目と2投目の合計が11以上　→　「もう一度入力し直して下さい」
	
	(エ)	最終得点を画面に表示すること
*/

#include<stdio.h>

int calc(int score[][4]){	//得点処理
	int i,totalscore = 0;
	for (i = 1; i <= 10; i++){
		if (i != 10 && score[i][1] + score[i][2]  == 10){	//10フレーム目は例外
			if (score[i][1] == 10 && score[i + 1][1] == 10 && score[i + 2][1] == 10 || (i == 9 && score[9][1] == 10 && score[10][1] == 10 && score[10][3] == 10)){	//ターキー
				//printf("%d ターキー　　%d   %d   %d\n", i ,score[i][1], score[i][2], score[i][3]);	//検査用
				totalscore += 30;
				//printf("現在トータル　%d\n", totalscore);	//検査用
			}
			else if (score[i][1] == 10 && score[i + 1][1] == 10 || (i == 10 && score[10][1] == 10 && score[10][3] == 10)){	//ダブル
				//printf("%d ダブル　　　%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//検査用
				if (i != 9){
					totalscore += 20 + score[i + 2][1];
				}else{	//9フレーム目の場合
					totalscore += 20 + score[10][3];
				}
				//printf("現在トータル　%d\n",totalscore);	//検査用
			}
			else if (score[i][1] == 10){	//ストライク
				//printf("%d ストライク　%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//検査用
				if (i != 9){
					totalscore += 10 + score[i + 1][1] + score[i + 1][2];
				}else{	//9フレーム目の場合
					if (score[10][1] == 10){	//10フレーム目の1投目がストライク
						totalscore += 10 + score[10][1] + score[10][3];
					}else{
						totalscore += 10 + score[10][1] + score[10][2];
					}
				}
				//printf("現在トータル　%d\n", totalscore);	//検査用
			}else{	//スペア
				totalscore += 10 + score[i + 1][1];
				//printf("%d スペア　　　%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//検査用
				//printf("現在トータル　%d\n",totalscore);	//検査用
			}
		}else if(i != 10){	//通常の得点加算
			//printf("%d 通常　　　　%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//検査用
			totalscore += score[i][1] + score[i][2];
			//printf("現在トータル　%d\n", totalscore);	//検査用
		}else{	// 10フレーム目
			totalscore += score[10][1] + score[10][2] + score[10][3];
			//printf("%d 10フレーム目　　　%d   %d   %d\n", i, score[i][1], score[i][2], score[i][3]);	//検査用
			//printf("現在トータル　%d\n", totalscore);	//検査用
		}
	}
	//printf("トータル　　%d\n", totalscore);//検査用
	return totalscore;
}

int main(void){
	int i, score[13][4], totalscore = 0;
	for (int k = 0; k < 13; k++){	//配列の初期化
		for (int l = 0; l < 4; l++){
			score[k][l] = 0;
		}
	}
	printf("～ボーリングのスコア計算プログラム～\n");
	printf("10フレーム目までの倒したピンの数を入力してください。\n");
	for (i = 1; i <= 10;i++){
		printf("＊＊＊%dフレーム目＊＊＊\n",i);
		for (int j = 1; j <= 2;j++){
			printf("%d投目：",j);
			scanf_s("%d",&score[i][j]);
			if (i != 10 && score[i][1] == 10){	//1投目で10ピン倒した場合はストライクとして、次のフレームに移行する。(10フレーム目は例外)
				break;
			}
			if (score[i][1] < 0 || score[i][1] > 10){	//各フレーム1投目で11以上の数値が入力された
				printf("0～10の範囲で入力して下さい\n");
				j--;
			}
		}
		if (i != 10 && score[i][1] + score[i][2] >= 11){	//各フレーム1投目と2投目の合計が11以上(10フレーム目は例外)
			printf("もう一度入力して下さい\n");
			score[i][1] = 0;
			score[i][2] = 0;
			i--;
		}
	}
	if (score[10][1] == 10 || score[10][1] + score[10][2] == 10){	//10フレーム目の1投目と2投目でストライクまたはスペアとなった場合は3投が可能
		int flg = 0;
		while (flg == 0){
			printf("3投目：");
			scanf_s("%d", &score[10][3]);
			if (score[10][3] <= 10){
				flg = 1;
			}else{
				printf("もう一度入力して下さい\n");
			}
		}
	}
	totalscore = calc(score);
	printf("最終得点は%d点です\n",totalscore);
	return 0;
}

/*
	【参考】
	「ボウリング - Wikipedia」https://ja.wikipedia.org/wiki/%E3%83%9C%E3%82%A6%E3%83%AA%E3%83%B3%E3%82%B0
	「ボウリングのスコアの見方・計算方法と目安の話」http://bowling.solution-strategy.com/category1/entry22.html
	「スコアのつけ方」http://www.tokibow.com/tbchp/score.htm
	「ほわいとのボウリング講座」http://park1.wakwak.com/~shiraki/bowling/score.html
	「ボウリングのスコアの計算方法を詳しく解説！ターキーの場合は？」https://sattoga.com/archives/472/
*/