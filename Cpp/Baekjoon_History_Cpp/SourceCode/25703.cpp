#include <stdio.h>

int main()
{
	int input;

	scanf_s("%d" , &input);
	
	printf("int a;\n");
	printf("int *ptr = &a;\n");

	for (int i = 1; i < input; i++ )
	{
		printf("int ");
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}

		if (i >= 2)
		{
			printf("ptr%d = &ptr%d;\n", i + 1, i);
		}
		else
		{
			printf("ptr%d = &ptr;\n", i + 1);
		}
	}

	return 0;
}


