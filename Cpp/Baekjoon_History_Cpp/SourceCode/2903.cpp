#include <stdio.h>
#include <cmath>
int amain()
{
	int num, sum, numX = 1, numY = 2;
	scanf_s("%d", &num);

	num -= 1;

	numY = numX + numY;
	numX = numX << num;
	
	sum = pow(numX + numY , 2);


	printf("%d", sum);
	return 0;
}

/*
x : 1=>2=>4=>8=>16 ���� �ٱ����� ���� �� ���� �̷�� ���� �ټ��� ����ġ
y : 2=>3=>5=>9=>17 ���� �ٱ����� ���� �� ���� �̷�� ���� �ټ��� ����ġ
z
(Xn+Yn)^2 => Zn+1 =>��ü ���� �� ���ϴ� ��
(Xn+Yn) =>   Yn+1 �� ���� ���ϴ� ��
x => 2�� ����� ����
*/