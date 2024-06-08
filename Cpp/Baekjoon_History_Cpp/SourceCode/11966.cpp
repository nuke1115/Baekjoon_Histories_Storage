#include <stdio.h>
int amain()
{
	int input,checkNum = 1,IsItSquareNumber = 0;
	scanf_s("%d", &input);

	for (int i = 0 ; i <= 30; i++)
	{
		if (checkNum == input)
		{
			IsItSquareNumber = 1;
			break;
		}

		checkNum <<= 1;
	}

	printf("%d",IsItSquareNumber);


	return 0;
}
/*
조건문 반복 오류 수정

2^30인 값이 들어왔을때
2^29까지 갔을때 거짓이 나와서 checkNum의 비트를 밀어도, 그 민 값을 검사하지 않아서 발생했었다
반복횟수를 30=>31개로 수정


*/