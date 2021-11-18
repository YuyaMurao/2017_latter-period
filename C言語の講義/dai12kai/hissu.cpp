/*
	キーボードから2つの文字列の入力を受け付け、それぞれchar型の配列に格納せよ。
	そして、入力された文字列を連結する関数string_catを作成せよ。
	ただし、連結できる最大の文字数は10文字までとし、11文字以降は切り捨てよ。
	連結した文字列は、画面に表示すること。

	実行結果の例は、以下のとおり

	文字列を入力してください。
	文字列1：ABC
	文字列2：DEFGHIJK
	文字列を連結しました（最大10文字）：ABCDEFGHIJ
*/

#include<stdio.h>

char *string_cat(char *s,const char *s2){
	char *link = s;
	int count = 0;
	while (*s){// sを最後まで進める
		s++; 
		count++;
	}
	while (*s2 != '\0'){ //s2をコピーする
		if (count < 10){
			*s++ = *s2++;
		}else{
			break;
		}
		count++;
	}  
	*s = '\0';
	return link;
}

int main2(void){
	char mozi[128], mozi2[128];
	printf("文字列を入力してください。\n");
	printf("文字列１:");
	gets_s(mozi);
	printf("文字列２:");
	gets_s(mozi2);
	printf("文字列を連結しました。(最大10文字)：%s\n", string_cat(mozi, mozi2));
	return 0;
}