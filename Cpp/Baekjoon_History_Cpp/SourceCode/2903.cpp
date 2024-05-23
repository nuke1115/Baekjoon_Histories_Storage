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
x : 1=>2=>4=>8=>16 가장 바깥쪽의 면중 한 면을 이루는 선의 겟수의 증가치
y : 2=>3=>5=>9=>17 가장 바깥쪽의 면중 한 면을 이루는 점의 겟수의 증가치
z
(Xn+Yn)^2 => Zn+1 =>전체 점의 수 구하는 식
(Xn+Yn) =>   Yn+1 의 값을 구하는 식
x => 2의 배수로 증가
*/