/*
	文字列s内の全ての数字文字を削除する関数を作成せよ。
	void del_digit(char s[ ]) {…}
	たとえば、"AB1C9"を受け取ったら、"ABC"に更新する。
*/

#include <stdio.h>
#include <string.h>

/*
//自分で考えたけど失敗

void del_digit(char s[]) { //数字を削除する関数
	int num = 0,flg = 1;	//配列用の数字
	while (s[num] != '\0'){
		for (int i = 0; i < 10; i++){	//数字判断処理
			char n = '0' + i;	//0～9までの数字型を文字型に変換している
			if (s[num] == n){
				if (s[num + 1] != '\0'){
					s[num] = s[num + 1];
				}else{
					s[num] = '\0';
					flg = 0;
				}
			}
		}
		num++;
	}
}
*/

/*
//ネットを参考

void del_digit(char s[]){
	int n = 0, num = 0;

	while (s[n]) {
		if (s[n] < '0' || s[n] > '9'){
			s[num++] = s[n];
		}
		n++;
	}
	s[num] = '\0';
}
*/

void del_digit(char s[]){
	int n = 0;	//sの配列を回す用
	int num = 0;	//strの配列をまわす用
	char str[256];	//コピー用
	strcpy_s(str, 256, s);	//strに入力した文字を入れておく（処理はstrで行う）
	while (str[num] != '\0'){
		int flg = 0;
		for (int i = 0; i < 10; i++){	//数字判断処理
			char nu = '0' + i;	//0～9までの数字の型を文字型に変換している
			if (str[num] == nu){
				flg = 1;	//数字だった場合フラグを立てておく
			}
		}
		if (flg == 0){	//フラグが立っていないとき（文字であった場合）にsの配列に再格納する
			s[n] = str[num];
			n++;
		}
		num++;
	}
	s[n] = '\0';
}

int main(void){
	char string[256],s[256];
	printf("文字列を入力してください。\n");
	printf("文字列:");
	gets_s(string);
	printf("数字だけををクリアします。\n");
	del_digit(string);
	printf("格納された文字列を表示します。:%s\n", string);
	return 0;
}