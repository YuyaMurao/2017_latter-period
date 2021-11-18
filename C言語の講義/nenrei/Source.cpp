/*
キーボードで年齢を入力させ，その結果を画面に出力させるプログラム
*/

#include<stdio.h>

int main(void)
{
	int tosi = 0;

	printf("あなたは何歳ですか？\n");
	scanf_s("%d", &tosi);
	printf("あなたは%d歳ですね。\n", tosi);
}
