/*
	二つの値を交換する
*/

#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void){
	int a = 0, b = 0;
	printf("整数値を２つ入力してください。\n");
	printf("整数a:");
	scanf_s("%d",&a);
	printf("整数b:");
	scanf_s("%d",&b);
	swap(&a,&b);
	printf("２つの変数の値を交換しました。\n");
	printf("整数a:%d\n",a);
	printf("整数b:%d\n",b);
}