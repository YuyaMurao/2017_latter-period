/*
	キーボードから文字列の入力を受け付け、char型の配列に格納せよ。]
	そして、入力された文字列の文字数をカウントし、画面に表示せよ。
	最後に、文字列を格納した配列の中身を空の文字列となるよう文字列をクリアせよ。
	関数として実現する必要はない。
*/
#include <stdio.h>

int count(char string[]){
	int i = 0,count = 0;
	while (string[i] != '\0'){
		count++;
		i++;
	}
	return count;
}

int clear(char string[]){
	string[0] = '\0';
	return *string;
}

int main1(void){
	char string[256];
	//char clstl[256];
	printf("文字列を入力してください。\n");
	printf("文字列:");
	gets_s(string);
	printf("文字数カウント:%d\n",count(string));
	printf("文字列をクリアします。\n");
	//clstl[0] = clear(string);
	//printf("格納された文字列を表示します。:%s\n",clstl);
	clear(string);
	printf("格納された文字列を表示します。:%s\n", string);
	return 0;
}