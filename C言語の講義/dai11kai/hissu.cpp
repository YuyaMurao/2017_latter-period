/*
	�L�[�{�[�h���當����̓��͂��󂯕t���Achar�^�̔z��Ɋi�[����B]
	�����āA���͂��ꂽ������̕��������J�E���g���A��ʂɕ\������B
	�Ō�ɁA��������i�[�����z��̒��g����̕�����ƂȂ�悤��������N���A����B
	�֐��Ƃ��Ď�������K�v�͂Ȃ��B
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
	printf("���������͂��Ă��������B\n");
	printf("������:");
	gets_s(string);
	printf("�������J�E���g:%d\n",count(string));
	printf("��������N���A���܂��B\n");
	//clstl[0] = clear(string);
	//printf("�i�[���ꂽ�������\�����܂��B:%s\n",clstl);
	clear(string);
	printf("�i�[���ꂽ�������\�����܂��B:%s\n", string);
	return 0;
}