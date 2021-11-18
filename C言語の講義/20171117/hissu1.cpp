/*
	キーボードから一つの整数を入力させ、
	１からその入力値までの和を表示するプログラム（main関数内で呼び出す）
*/

#include<stdio.h>

int keisan(int a)
{
	int kekka = 0, flg = 0;
	if (a < 0)	//aがマイナスの場合（一応）
	{
		flg = 1;
		a = -a;
	}

	while (a != 0)	//計算処理
	{
		kekka += a;
		a--;
	}

	if (flg == 0)
		return kekka;
	else   //aがマイナスの場合（一応）
		return -kekka + 1;
}

int main1(void)
{
	int seisuu = 0;
	printf("整数を入力してください:");
	scanf_s("%d", &seisuu);
	printf("1から%dまでの和は%dです。\n", seisuu, keisan(seisuu));
	return 0;
}
