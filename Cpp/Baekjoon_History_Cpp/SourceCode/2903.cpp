#include <stdio.h>
#include <cmath>
int amain()
{
	int num, sum, numX = 1, numY = 2;
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++ , numY = numX + numY , numX *= 2)
	{
		sum = pow(numX+numY , 2);
	}


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