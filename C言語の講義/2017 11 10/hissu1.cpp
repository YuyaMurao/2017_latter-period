/*
	授業スライド3枚目　配列に書き換えたもの（5人の点数の合計と平均を求める）
*/
#include<stdio.h>

int main1(void){
	int sum = 0,tensuu[5];
	printf("5人の点数を入力してください。\n");
	for (int i = 1; i <= 5; i++){
		printf("%d番：",i);
		scanf_s("%d", &tensuu[i]);
		sum += tensuu[i];
	}
	printf("合計点：%5d\n", sum);
	printf("平均点：%5.1f\n", (double)sum / 5);

	return 0;
}

