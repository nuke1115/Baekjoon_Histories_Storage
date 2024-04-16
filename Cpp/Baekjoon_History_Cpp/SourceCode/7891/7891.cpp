#include <stdio.h>

int amain()
{

	int testCases, a, b;

	scanf_s("%d" , &testCases);


	for (int i = 0; i < testCases; i++)
	{
		scanf_s("%d %d" , &a , &b);
		printf("%d\n" , a + b);
	}

	return 0;
}
