/*
	�L�[�{�[�h�����̐�������͂����A
	�P���炻�̓��͒l�܂ł̘a��\������v���O�����imain�֐����ŌĂяo���j
*/

#include<stdio.h>

int keisan(int a)
{
	int kekka = 0, flg = 0;
	if (a < 0)	//a���}�C�i�X�̏ꍇ�i�ꉞ�j
	{
		flg = 1;
		a = -a;
	}

	while (a != 0)	//�v�Z����
	{
		kekka += a;
		a--;
	}

	if (flg == 0)
		return kekka;
	else   //a���}�C�i�X�̏ꍇ�i�ꉞ�j
		return -kekka + 1;
}

int main1(void)
{
	int seisuu = 0;
	printf("��������͂��Ă�������:");
	scanf_s("%d", &seisuu);
	printf("1����%d�܂ł̘a��%d�ł��B\n", seisuu, keisan(seisuu));
	return 0;
}
