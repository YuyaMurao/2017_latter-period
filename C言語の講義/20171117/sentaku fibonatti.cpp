/*
	�t�B�{�i�b�`����
*/

#include<stdio.h>

int fib(__int64 n){
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	n = (fib(n-1)) + fib((n-2));

	return n;
}

int main(void){
	__int64 n = 0;
	printf("�t�B�{�i�b�`����Fn=");
	scanf_s("%I64d",&n);
	printf("F(%I64d)=%I64d\n",n,fib(n));
	return 0;
}