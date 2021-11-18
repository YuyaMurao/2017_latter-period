/*
	キーボードから一つの整数を入力させ、その入力値が「3の倍数」なら「アホ」、
	「5の倍数」なら「ワン」、「3と5の公倍数」なら「アホワン」、
	それ以外なら「入力した整数値」を画面に出力するプログラム
	倍数及び公倍数を判断する処理のみ、関数nabeatsuとして定義すること。
	また、キーボードから整数を入力し、画面に出力する一連の処理は、
	「999」が入力されるまで繰返し実行せよ。
*/


#include<stdio.h>

int nabeatsu(int seisuu)
{
	if (seisuu % 3 == 0 || seisuu % 5 == 0){
		if (seisuu % 3 == 0 && seisuu % 5 == 0)	//3と5の公倍数
			return 0;
		if (seisuu % 3 == 0)	//3の倍数
			return 1;
		if (seisuu % 5 == 0)	//5の倍数
			return 2;
	}
	else	//それ以外
	{
		return 3;
	}
}

int main2(void)
{
	int seisuu = 0, loop = 0;

	while (loop == 0)	//無限ループ
	{
		printf("整数を入力してください:");
		scanf_s("%d", &seisuu);

		if (seisuu == 999){
			printf("終了します。\n");
			break;		//999が入力されたらループを抜ける
		}

		switch (nabeatsu(seisuu))	//seisuuを引数としたnabeatsu使用して判断する 
		{
		case 0:
			printf("アホワン");		//3と5の公倍数
			break;
		case 1:
			printf("アホ");		//3の倍数
			break;
		case 2:
			printf("ワン");		//5の倍数
			break;
		case 3:
			printf("%d", seisuu);	//それ以外
			break;
		default:
			printf("エラー");	//エラー処理（緊急事態）
			break;
		}
		printf("\n");
	}
	return 0;
}
