/*
	�L�[�{�[�h����2�̕�����̓��͂��󂯕t���A���ꂼ��char�^�̔z��Ɋi�[����B
	�����āA���͂��ꂽ�������A������֐�string_cat���쐬����B
	�������A�A���ł���ő�̕�������10�����܂łƂ��A11�����ȍ~�͐؂�̂Ă�B
	�A������������́A��ʂɕ\�����邱�ƁB

	���s���ʂ̗�́A�ȉ��̂Ƃ���

	���������͂��Ă��������B
	������1�FABC
	������2�FDEFGHIJK
	�������A�����܂����i�ő�10�����j�FABCDEFGHIJ
*/

#include<stdio.h>

char *string_cat(char *s,const char *s2){
	char *link = s;
	int count = 0;
	while (*s){// s���Ō�܂Ői�߂�
		s++; 
		count++;
	}
	while (*s2 != '\0'){ //s2���R�s�[����
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
	printf("���������͂��Ă��������B\n");
	printf("������P:");
	gets_s(mozi);
	printf("������Q:");
	gets_s(mozi2);
	printf("�������A�����܂����B(�ő�10����)�F%s\n", string_cat(mozi, mozi2));
	return 0;
}