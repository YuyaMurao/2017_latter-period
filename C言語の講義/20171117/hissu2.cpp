/*
	�L�[�{�[�h�����̐�������͂����A���̓��͒l���u3�̔{���v�Ȃ�u�A�z�v�A
	�u5�̔{���v�Ȃ�u�����v�A�u3��5�̌��{���v�Ȃ�u�A�z�����v�A
	����ȊO�Ȃ�u���͂��������l�v����ʂɏo�͂���v���O����
	�{���y�ь��{���𔻒f���鏈���̂݁A�֐�nabeatsu�Ƃ��Ē�`���邱�ƁB
	�܂��A�L�[�{�[�h���琮������͂��A��ʂɏo�͂����A�̏����́A
	�u999�v�����͂����܂ŌJ�Ԃ����s����B
*/


#include<stdio.h>

int nabeatsu(int seisuu)
{
	if (seisuu % 3 == 0 || seisuu % 5 == 0){
		if (seisuu % 3 == 0 && seisuu % 5 == 0)	//3��5�̌��{��
			return 0;
		if (seisuu % 3 == 0)	//3�̔{��
			return 1;
		if (seisuu % 5 == 0)	//5�̔{��
			return 2;
	}
	else	//����ȊO
	{
		return 3;
	}
}

int main2(void)
{
	int seisuu = 0, loop = 0;

	while (loop == 0)	//�������[�v
	{
		printf("��������͂��Ă�������:");
		scanf_s("%d", &seisuu);

		if (seisuu == 999){
			printf("�I�����܂��B\n");
			break;		//999�����͂��ꂽ�烋�[�v�𔲂���
		}

		switch (nabeatsu(seisuu))	//seisuu�������Ƃ���nabeatsu�g�p���Ĕ��f���� 
		{
		case 0:
			printf("�A�z����");		//3��5�̌��{��
			break;
		case 1:
			printf("�A�z");		//3�̔{��
			break;
		case 2:
			printf("����");		//5�̔{��
			break;
		case 3:
			printf("%d", seisuu);	//����ȊO
			break;
		default:
			printf("�G���[");	//�G���[�����i�ً}���ԁj
			break;
		}
		printf("\n");
	}
	return 0;
}
