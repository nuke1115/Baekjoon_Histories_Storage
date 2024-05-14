#include <stdio.h>

//hmm

bool CheckArithmeticSequence(int num1, int num2, int num3)
{
	return num2 - num1 == num3 - num2;
}

int amain()
{
	int testCase;
	scanf_s("%d", &testCase);
	int nums[50];
	int number;

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%d", &nums[i]);
	}

	if (CheckArithmeticSequence(nums[0], nums[1], nums[2]))
	{
		number = nums[1] - nums[0];
		printf("%d", nums[testCase - 1] + number);
	}
	else
	{
		number = nums[1] / nums[0];
		printf("%d", nums[testCase - 1] * number);
	}


	return 0;
}
//778