/*
	キーボードから値の異なる整数を5つ入力させて配列に格納せよ。
	そして、配列内の要素を小さい順に並び替える関数sortを作成し、並び替えた結果を出力せよ。
	並び替えのアルゴリズムは、バブルソートを用いよ。
*/

#include<stdio.h>

void swap(int *seisuu1,int *seisuu2){
	int temp;
	temp = *seisuu1;
	*seisuu1 = *seisuu2;
	*seisuu2 = temp;
}

void sort(int seisuu[]){
	for (int i = 1; i < 6; i++){
		for (int j = 5 ; j > i; j--){
			if (seisuu[j] < seisuu[j -1]){
				swap(&seisuu[j], &seisuu[j-1]);
			}
		}
	}
}

int main1(void){
	int seisuu[6];
	for (int i = 1; i < 6; i++){
		seisuu[i] = 0;
	}
	printf("整数を5つ入力してください。\n");
	for (int i = 1; i < 6; i++){
		printf("整数%d：",i);
		scanf_s("%d", &seisuu[i]);
	}
	sort(seisuu);
	printf("小さい順に並び変えました：");
	for (int i = 1; i < 6; i++){
		printf("%d、", seisuu[i]);
	}
	printf("\n");
	return 0;
}