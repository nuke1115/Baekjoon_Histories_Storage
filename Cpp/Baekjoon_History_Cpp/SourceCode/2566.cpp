#include <stdio.h>
const int maxSize = 9;
int amain()
{
	
	int biggestNum = -1;
	int inputTmp = -1;
	int biggestNumCordinate[2];

	for (int i = 0; i < maxSize; i++)
	{
		for (int k = 0; k < maxSize; k++)
		{
			scanf_s("%d",&inputTmp);
			if (inputTmp > biggestNum)
			{
				biggestNum = inputTmp;
				biggestNumCordinate[0] = k;
				biggestNumCordinate[1] = i;
			}

		}
	}
	
	printf("%d\n%d %d", biggestNum, biggestNumCordinate[1] + 1 , biggestNumCordinate[0] + 1);


	return 0;
}

