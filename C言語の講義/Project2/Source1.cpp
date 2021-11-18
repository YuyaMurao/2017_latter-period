/*
４つの整数を読み込み、その最大値を画面に出力するプログラム
*/

#include<stdio.h>

int main2(void)
{
	int n1, n2, n3,n4, max;

	puts("四つの整数を入力してください。");
	printf("整数１：");	  scanf_s("%d", &n1);
	printf("整数２：");	  scanf_s("%d", &n2);
	printf("整数３：");	  scanf_s("%d", &n3);
	printf("整数４：");	  scanf_s("%d", &n4);

	max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;

	printf("最大値は%dです。\n", max);
	return 0;
}