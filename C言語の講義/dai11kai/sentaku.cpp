/*
	������s���̑S�Ă̐����������폜����֐����쐬����B
	void del_digit(char s[ ]) {�c}
	���Ƃ��΁A"AB1C9"���󂯎������A"ABC"�ɍX�V����B
*/

#include <stdio.h>
#include <string.h>

/*
//�����ōl�������ǎ��s

void del_digit(char s[]) { //�������폜����֐�
	int num = 0,flg = 1;	//�z��p�̐���
	while (s[num] != '\0'){
		for (int i = 0; i < 10; i++){	//�������f����
			char n = '0' + i;	//0�`9�܂ł̐����^�𕶎��^�ɕϊ����Ă���
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
//�l�b�g���Q�l

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
	int n = 0;	//s�̔z����񂷗p
	int num = 0;	//str�̔z����܂킷�p
	char str[256];	//�R�s�[�p
	strcpy_s(str, 256, s);	//str�ɓ��͂������������Ă����i������str�ōs���j
	while (str[num] != '\0'){
		int flg = 0;
		for (int i = 0; i < 10; i++){	//�������f����
			char nu = '0' + i;	//0�`9�܂ł̐����̌^�𕶎��^�ɕϊ����Ă���
			if (str[num] == nu){
				flg = 1;	//�����������ꍇ�t���O�𗧂ĂĂ���
			}
		}
		if (flg == 0){	//�t���O�������Ă��Ȃ��Ƃ��i�����ł������ꍇ�j��s�̔z��ɍĊi�[����
			s[n] = str[num];
			n++;
		}
		num++;
	}
	s[n] = '\0';
}

int main(void){
	char string[256],s[256];
	printf("���������͂��Ă��������B\n");
	printf("������:");
	gets_s(string);
	printf("�������������N���A���܂��B\n");
	del_digit(string);
	printf("�i�[���ꂽ�������\�����܂��B:%s\n", string);
	return 0;
}