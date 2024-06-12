#include <stdio.h>
int amain()
{
	int input;
	float output;
	scanf_s("%d",&input);

	output = input / 100.0f + 25;
	if (output < 100 )
	{
		printf("%f",100.00);
	}
	else if (output > 2000)
	{
		printf("%f",2000.00);
	}
	else
	{
		printf("%.2f",output);
	}

	return 0;
}