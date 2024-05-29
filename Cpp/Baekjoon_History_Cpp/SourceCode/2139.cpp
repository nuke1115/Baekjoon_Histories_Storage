#include <stdio.h>

int amain()
{
	int nums[3]{ -1 }, sum, dLim;
	bool isLeap = false;
	while (true)
	{
		scanf_s("%d %d %d", &nums[0], &nums[1], &nums[2]);

		if (nums[0] == 0)
		{
			break;
		}
		isLeap = ((nums[2] % 4 == 0) && (nums[2] % 100 != 0 || nums[2] % 400 == 0));
		sum = 0;
		for (int m = 1; m <= nums[1]; m++)
		{
			if (m == 2 && isLeap)
			{
				dLim = 29;
			}
			else if (m == 2)
			{
				dLim = 28;
			}
			else if (m == 4 || m == 6 || m == 9 || m == 11)
			{
				dLim = 30;
			}
			else
			{
				dLim = 31;
			}

			if (m != nums[1])
			{
				sum += dLim;
			}
		}
		sum += nums[0];
		printf("%d\n", sum);
	}
	return 0;
}