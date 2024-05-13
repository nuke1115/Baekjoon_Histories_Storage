#include <stdio.h>

int main()
{
	int starSize;
	scanf_s("%d",&starSize);

	for (int i = 0 , fuc = 0; i < starSize*2; i += 2 , fuc++)
	{

		for (int b = 0; b < fuc; b++)
		{
			printf(" ");
		}

		for (int s = (2*starSize) - (1 + i); s > 0; s--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}