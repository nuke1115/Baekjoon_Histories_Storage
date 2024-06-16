#include <stdio.h>
int amain()
{
	int nums[5], isSorted = false, tmp;

	scanf_s("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

	while (!isSorted)
	{
		isSorted = true;

		for (int i = 0; i < 4; i++)
		{
			if (nums[i] > nums[i+1])
			{
				isSorted = false;
				tmp = nums[i + 1];
				nums[i + 1] = nums[i];
				nums[i] = tmp;
				printf("%d %d %d %d %d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);
			}
		}

	}

	return 0;
}