/*
３つの整数を読み込み、その最小値を画面に出力するプログラム
*/

#include<stdio.h>

int main1(void)
{
	int n1, n2, n3, min;

	puts("三つの整数を入力してください。");
	printf("整数１：");	  scanf_s("%d", &n1);
	printf("整数２：");	  scanf_s("%d", &n2);
	printf("整数３：");	  scanf_s("%d", &n3);

	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;

	printf("最小値は%dです。\n", min);
	return 0;
}