#include <stdio.h>

#pragma region  shortCodeChallenge

int smain()
{
	int t;
	scanf_s("%d", &t);
	while (t--)
	{
		int m = 101, s = 0, t, k = 7;

		while (k--)
		{
			scanf_s("%d", &t);
			if (~t&1)
			{
				s += t;
				if (t < m)
				{
					m = t;
				}
			}
		}

		printf("%d %d\n", s, m);
	}

	return 0;
}

#pragma endregion


#pragma region old

int omain()
{
	int testCase;
	scanf_s("%d", &testCase);
	for (int i = 0; i < testCase; i++)
	{
		int min = 101, sum = 0, tmp;

		for (int k = 0; k < 7; k++)
		{
			scanf_s("%d", &tmp);
			if (!(tmp & 1))
			{
				sum += tmp;
				if (tmp < min)
				{
					min = tmp;
				}
			}
		}

		printf("%d %d\n", sum, min);
	}

	return 0;
}

#pragma endregion
