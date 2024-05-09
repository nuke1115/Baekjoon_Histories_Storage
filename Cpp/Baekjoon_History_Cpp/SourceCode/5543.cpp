#include <stdio.h>
#include <ios>

int amain()
{
	int nums[5];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d" , &nums[i]);
	}

	printf("%d" , std::min(nums[0] , std::min(nums[1] , nums[2])) + std::min(nums[3] , nums[4]) - 50);

	return 0;
}

void other()//ver1
{
	int smallestBurger = 2000, smallestBeverage = 2000, tmp = 2000;

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &tmp);
		if (tmp < smallestBurger)
		{
			smallestBurger = tmp;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		scanf_s("%d", &tmp);
		if (tmp < smallestBeverage)
		{
			smallestBeverage = tmp;
		}
	}

	printf("%d", (smallestBeverage + smallestBurger) - 50);

}
//ios 헤더 찾아보기