/*
	数当てゲーム
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int getRand(int max){	//ランダムの値を返す
	srand((unsigned int)time(NULL));	//ランダムの種を生成
	return rand() % max + 1;	//1～maxまでのランダム
}

int itirannsyutu(){	//難易度一覧を出力する
	printf("難易度一覧\n");
	printf("1 : 1～  10の整数\n");
	printf("2 : 1～  30の整数\n");
	printf("3 : 1～  50の整数\n");
	printf("4 : 1～ 100の整数\n");
	printf("5 : 1～ 500の整数\n");
	printf("6 : 1～1000の整数\n");
	return 0;
}

int nannido(){	//難易度を入力させる
	int nannido = 0;
	printf("難易度(半角数字)を入力してください :");
	scanf_s("%d", &nannido);
	return nannido;
}

int handan(int nannido){	//入力された値が何かを判断する(エラーの時の処理)
	int flg  = 0,handan = 0;
	while (flg == 0){
		if (nannido > 0 && nannido < 7){
			flg = 1;
			break;
		}
		else{
			printf("入力された値の難易度はありません\n");
			printf("終了しますか？\n");
			printf("1 : はい　2 : いいえ\n");
			printf("⇒");
			scanf_s("%d", &handan);
			if (handan == 1){
				flg = 0;
				break;
			}
			else if (handan == 2){
				printf("もう一度難易度(半角数字)を入力してください :");
				scanf_s("%d", &nannido);
			}
			else{
				printf("他の値が入力されました。\n");
				printf("もう一度難易度(半角数字)を入力してください :");
				scanf_s("%d", &nannido);
			}
		}
	}
	return flg;
}

int syuturyoku(int flg,int kazu,int kai){	//出力処理
	switch (flg){
	case 1:	//正解の時の出力
		printf("(%d回目)", kai);
		printf("正解！\n");
		return 1;
	case 2:	//数が乱数値より小さい時の出力
		printf("(%d回目)", kai);
		printf("正解は、%dより小さいです\n", kazu);
		break;
	case 3 :	//数が乱数値より小さい時の出力
		printf("(%d回目)",kai);
		printf("正解は、%dより大きいです\n", kazu);
		break;
	default:
		printf("エラー\n");
		break;
	}
	return 0;
}

int hikaku(int kazu, int rand,int kai){	//比較処理
	int flg = 0,seikai = 0;
		if (kazu == rand){
			flg = 1;
		}
		else if (kazu > rand){
			flg = 2;
		}
		else{
			flg = 3;
		}
		seikai = syuturyoku(flg, kazu, kai);
		if(seikai == 1)
			return 1;
		else
			return 0;
}


int game(int nannido){	//ゲーム本体
	int seikai = 0, kazu = 0, rand = 0,kai = 1;
	int nannidokazu[7] = { 0, 10, 30, 50, 100, 500, 1000 };
	rand = getRand(nannidokazu[nannido]);
	while (seikai == 0){
		printf("整数を入力してください\n⇒");
		scanf_s("%d", &kazu);
		seikai = hikaku(kazu, rand,kai);
		kai++;
	}
	return 0;
}

int main(void){
	int flg = 0;
	itirannsyutu();//難易度一覧を出力する
	int nannido_2 = nannido();
	flg = handan(nannido_2);
	while (flg == 1){
		printf("ゲームスタート！\n");
		game(nannido_2);
		flg = 0;
	}
	return 0;
}