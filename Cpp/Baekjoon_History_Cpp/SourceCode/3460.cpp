#include <stdio.h>

int amain()
{
	int testCase, decNum;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%d", &decNum);
		for (int k = 0; decNum != 0; k++)
		{
			if (decNum % 2 != 0)
			{
				printf("%d " , k);
			}
			decNum /= 2;
		}

	}
	return 0;
}