/*
キーボードで整数値を入力させ、それに対応する月名を表示するプログラム
*/

#include<stdio.h>
#include <string.h>

int main3(void)
{
	int num,num1;
	char tuki[10];

	puts("Input number?");
	scanf_s("%d", &num);

	switch (num){
	case 1:    strcpy_s(tuki, "January");   break;
	case 2:    strcpy_s(tuki, "February");  break;
	case 3:    strcpy_s(tuki, "March");     break;
	case 4:    strcpy_s(tuki, "April");     break;
	case 5:    strcpy_s(tuki, "May");       break;
	case 6:    strcpy_s(tuki, "June");      break;
	case 7:    strcpy_s(tuki, "July");      break;
	case 8:    strcpy_s(tuki, "August");    break;
	case 9:    strcpy_s(tuki, "September"); break;
	case 10:   strcpy_s(tuki, "October");   break;
	case 11:   strcpy_s(tuki, "November");  break;
	case 12:   strcpy_s(tuki, "December");  break;
	default:   num = 0;                     break;
    }

	if (num == 0)
		printf("入力エラー\n");
	else
        printf("%d月は英語で%sです.\n", num, tuki);

	return 0;
}