#include <stdio.h>

int amain()
{
	int num;

	scanf_s("%d" , &num);

	for (int i = 0; i < num; i++)
	{
		for (int b = 0; b < i; b++)
		{
			printf(" ");
		}
		
		for (int s = i; s < num; s++)
		{
			printf("*");
		}

		printf("\n");
	}


	return 0;
}