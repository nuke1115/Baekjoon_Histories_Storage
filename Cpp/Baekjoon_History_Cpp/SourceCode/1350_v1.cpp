#include <stdio.h>

int amain()
{
	
	int diskSpace;
	int fileNum;
	long long neededSpaces = 0;
	scanf_s("%d" , &fileNum);
	long long *fileSizes = new long long[fileNum];

	for (int i = 0; i < fileNum; i++)
	{
		scanf_s("%lld" , &fileSizes[i]);
	}

	scanf_s("%d" , &diskSpace);


	for (int i = 0; i < fileNum; i++)
	{
		if (fileSizes[i] != 0)
		{
			if (fileSizes[i] % diskSpace == 0)
			{
				neededSpaces += fileSizes[i] / diskSpace;
			}
			else
			{
				neededSpaces += fileSizes[i] / diskSpace + 1;
			}
		}
	}

	printf("%lld" , neededSpaces * diskSpace);

	delete[] fileSizes;


	return 0;
}

//ceil 쓸땐 왜 틀린거지????????? 왜??????????????????????????