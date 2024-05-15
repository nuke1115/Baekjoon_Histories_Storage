#include <stdio.h>

int amain()
{
	int maxScore = 0, winnerNum = 0;
	int a, b, c, d;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d %d %d %d",&a,&b,&c,&d);
		if (a+b+c+d > maxScore)
		{
			maxScore = a + b + c + d;
			winnerNum = i + 1;
		}
	}
	printf("%d %d", winnerNum, maxScore);

	return 0;
}