/*
	�C�ӂ̐����l���������z��i�T�C�Y�����R�j��錾����D
	���[�U���琮���l�̓��͂��󂯕t���C���͂��ꂽ�l���z����ɂ����True�C
	�Ȃ����False�Ɖ�ʕ\������v���O����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main2(void){
	int flg = 0,kazu = 0,i = 0,seisuu[10];
	
	//�z��Ƀ����_���Ȑ�������
	while (i <= 10){
		srand(time(NULL)+i);	// �����̎��������
		seisuu[i] = rand() % 10 + 1;
		printf("%d\n", seisuu[i]);
		i++;
	}

	printf("1�`10�̐����l����͂��Ă��������B\n");
	scanf_s("%d",&kazu);

	//��r����
	for (int j = 0; j <= 10; j++){
		if (kazu == seisuu[j])
			flg = 1;
	}
	if (flg == 1)
		printf("True");
	else
		printf("False");

	return 0;
}