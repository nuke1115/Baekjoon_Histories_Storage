#include <stdio.h>

int amain()
{
	int bulbCnt, instructionCnt, instructionNum, num1, num2 , bulbs[4000];

	scanf_s("%d %d", &bulbCnt, &instructionCnt);

	for (int i = 0; i < bulbCnt; i++)
	{
		scanf_s("%d", &bulbs[i]);
	}

	for (int i = 0; i < instructionCnt; i++)
	{
		scanf_s("%d %d %d", &instructionNum, &num1, &num2);

		if (instructionNum == 1)
		{
			bulbs[num1 - 1] = num2;
		}
		else if (instructionNum == 2)
		{
			for (int i = num1 - 1; i < num2; i++)
			{
				bulbs[i] ^= 1;
			}
		}
		else if (instructionNum == 3)
		{
			for (int i = num1 - 1; i < num2; i++)
			{
				bulbs[i] = 0;
			}
		}
		else
		{
			for (int i = num1 - 1; i < num2; i++)
			{
				bulbs[i] = 1;
			}
		}
	}

	for (int i = 0; i < bulbCnt; i++)
	{
		printf("%d ", bulbs[i]);
	}

	return 0;
}

#pragma region old

void Instruction1(int* bulbs, int& num1, int& num2)
{
	bulbs[num1 - 1] = num2;
}

void Instruction2(int* bulbs, int& num1, int& num2)
{
	for (int i = num1 - 1; i < num2; i++)
	{
		bulbs[i] ^= 1;
	}
}

void Instruction3(int* bulbs, int& num1, int& num2)
{
	for (int i = num1 - 1; i < num2; i++)
	{
		bulbs[i] = 0;
	}
}

void Instruction4(int* bulbs, int& num1, int& num2)
{
	for (int i = num1 - 1; i < num2; i++)
	{
		bulbs[i] = 1;
	}
}

int amain()
{
	int bulbCnt, instructionCnt, instructionNum, num1, num2, bulbs[4000];

	scanf_s("%d %d", &bulbCnt, &instructionCnt);

	for (int i = 0; i < bulbCnt; i++)
	{
		scanf_s("%d", &bulbs[i]);
	}

	for (int i = 0; i < instructionCnt; i++)
	{
		scanf_s("%d %d %d", &instructionNum, &num1, &num2);

		if (instructionNum == 1)
		{
			Instruction1(bulbs, num1, num2);
		}
		else if (instructionNum == 2)
		{
			Instruction2(bulbs, num1, num2);
		}
		else if (instructionNum == 3)
		{
			Instruction3(bulbs, num1, num2);
		}
		else
		{
			Instruction4(bulbs, num1, num2);
		}
	}

	for (int i = 0; i < bulbCnt; i++)
	{
		printf("%d ", bulbs[i]);
	}

	return 0;
}

#pragma endregion
