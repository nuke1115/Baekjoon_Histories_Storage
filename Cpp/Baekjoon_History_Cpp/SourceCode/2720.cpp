#include <stdio.h>
const int Quarter = 2500;
const int Dime = 1000;
const int Nickel = 500;
const int Penny = 100;
int amain()
{
	int testCase, change;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%d", &change);
		change *= 100;
		printf("%d ", change / Quarter);
		change -= (change / Quarter) * Quarter;
		printf("%d ", change / Dime);
		change -= (change / Dime) * Dime;
		printf("%d ", change / Nickel);
		change -= (change / Nickel) * Nickel;
		printf("%d\n", change / Penny);
		change -= (change / Penny) * Penny;
	}
	return 0;
}
/*

*/